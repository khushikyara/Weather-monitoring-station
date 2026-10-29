# 🌦️ Low-Cost Weather and Atmospheric Pressure Monitoring Station

An IoT-based weather monitoring project that collects temperature, humidity, and atmospheric pressure data and uploads it to the ThingSpeak cloud platform.

## 📌 Project Overview

This project uses an ESP32 microcontroller with DHT22 and BMP180 sensors to monitor environmental conditions. The system is implemented and tested using the Wokwi online simulator, allowing the project to run without physical hardware.

## 🎯 Objectives

- Measure temperature and relative humidity.
- Monitor atmospheric pressure.
- Upload sensor readings to the cloud using Wi-Fi.
- Visualize collected data through ThingSpeak graphs.
- Demonstrate an affordable IoT monitoring solution.

## 🛠️ Components Used

- ESP32 Development Board
- DHT22 Temperature and Humidity Sensor
- BMP180 Barometric Pressure Sensor

## 💻 Technologies Used

- Arduino C++
- Wokwi Online Simulator
- ThingSpeak IoT Cloud Platform
- Wi-Fi Connectivity

## ⚙️ Working Principle

1. The DHT22 sensor measures temperature and humidity.
2. The BMP180 sensor measures atmospheric pressure.
3. The ESP32 reads the sensor values.
4. The ESP32 connects to Wi-Fi.
5. The readings are sent to ThingSpeak.
6. The cloud dashboard displays the data in graphical form.

## 📊 Results

The online simulation successfully displayed sensor readings in the Serial Monitor and uploaded data to the ThingSpeak dashboard.

## 🚀 Future Enhancements

- Add weather alerts and notifications.
- Store and analyze historical readings.
- Build a custom web dashboard.
- Deploy physical sensors for outdoor monitoring.

## 🔗 Wokwi Simulation

[Click here to view the online simulation](https://wokwi.com/projects/479210812288420865)

## 👥 Project Team

| Roll Number | Name |
|---|---|
| 13030824026 | Hardik Raj |
| 13030824027 | Jeeya Ranjan |
| 13030824028 | Jiya Sinha |
| 13030824029 | Khushi Kumari |
| 13030824030 | Krishna Gupta |

**Department:** CSE (AI & ML)

## ⚠️ Note

This project was developed and tested in simulation using Wokwi. The displayed readings are simulated values and do not represent actual outdoor weather measurements.
