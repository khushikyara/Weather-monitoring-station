#include <WiFi.h>
#include <Wire.h>
#include <DHT.h>
#include <Adafruit_BMP085.h>
#include <HTTPClient.h>

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
Adafruit_BMP085 bmp;

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* apiKey = "YOUR_WRITE_API_KEY";

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);
  dht.begin();

  if (!bmp.begin()) {
    Serial.println("BMP180 sensor not found!");
    while (1) delay(10);
  }

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  float pressure = bmp.readPressure() / 100.0;

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("DHT22 reading failed!");
    delay(2000);
    return;
  }

  Serial.printf("Temperature: %.2f C\n", temperature);
  Serial.printf("Humidity: %.2f %%\n", humidity);
  Serial.printf("Pressure: %.2f hPa\n", pressure);

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    String url = "https://api.thingspeak.com/update?api_key=";
    url += apiKey;
    url += "&field1=" + String(temperature);
    url += "&field2=" + String(humidity);
    url += "&field3=" + String(pressure);

    http.begin(url);
    Serial.print("Cloud response: ");
    Serial.println(http.GET());
    http.end();
  }

  delay(20000);
}
