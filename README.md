# ESP32-Temperature-Monitoring-System


## Overview

This project is a temperature monitoring application developed for the ESP32 using the ESP-IDF framework.

The system reads analog data from a temperature sensor connected to the ESP32 ADC, converts the measured voltage into temperature values, and displays the results in real time through the serial monitor.

## Features

* Real-time temperature monitoring
* Analog sensor acquisition using ESP32 ADC
* Voltage-to-temperature conversion
* Periodic temperature display every second
* FreeRTOS task implementation

## Hardware Requirements

* ESP32 Development Board
* LM35 temperature sensor (or compatible analog sensor)
* USB cable
* Breadboard and jumper wires

## Software Requirements

* ESP-IDF
* Visual Studio Code (optional)
* ESP32 toolchain

## Working Principle

1. Configure ADC1 Channel 0.
2. Read raw ADC values.
3. Convert ADC readings into voltage.
4. Convert voltage into temperature.
5. Display temperature every second.


## Technologies Used

* C Programming Language
* ESP-IDF
* FreeRTOS
* ESP32 ADC Driver

## Educational Purpose

This project was developed as a practical exercise for learning embedded systems programming, sensor interfacing, ADC acquisition, and real-time task management on the ESP32 platform.
