## Vehicle Theft Detection System

## Overview

Traditional vehicle alarm systems can be costly or complex. This project provides a cost-effective and easy-to-deploy theft detection system using an Arduino Uno and HC-SR505 PIR motion sensor. The system continuously monitors the environment and alerts the user via serial feedback when motion is detected near the vehicle.

This project is ideal for students and beginners looking to enhance their skills in embedded systems, circuit design, and sensor integration.

## System Architecture

The system consists of:

Input Stage: PIR sensor detects motion using changes in infrared radiation.

Processing Unit: Arduino Uno processes the PIR sensor’s output.

Output Stage: Serial feedback on Arduino IDE to alert the user.

## Operational Flow

Arduino initializes on power-up.

PIR sensor begins motion detection.

If motion is detected, the sensor sends a HIGH signal.

Arduino reads the signal and prints a message to the serial monitor.

System loops and resets for continuous monitoring.

## Features

Real-time Motion Detection

Silent Operation (No buzzers)

Serial Output Feedback

Low Cost and Power Consumption

Continuous Loop Monitoring

## Components Used and	Description

Arduino Uno	Microcontroller board for logic processing
PIR Motion Sensor	HC-SR505 for infrared motion detection
Jumper Wires	Male-Female jumper cables for circuit connections


## Flow Summary

Serial communication is initialized.

PIR sensor pin set to input mode.

Sensor reads motion every second.

Feedback is printed to Serial Monitor.

## Working Principle

The PIR sensor detects motion by monitoring changes in infrared energy.

Upon detection, it sends a HIGH signal to the Arduino.

Arduino processes this signal and displays an alert via the Serial Monitor.

The system loops continuously, providing real-time monitoring.

## Limitations
 
Sensor Reset Delay (~8 seconds after detection)

Limited Range & Angle (~3m, ~100°)

Sensitive to Environment (light, heat, airflow)

No Object Differentiation (can’t distinguish people/animals)

No Data Logging (serial output only)

## Conclusion

The Vehicle Theft Detection System is a reliable and simple embedded solution for motion-based vehicle monitoring. It’s a powerful demonstration of how minimal hardware can address practical security concerns and is a solid starting point for more advanced smart security systems.

## Getting Started

Requirements

Arduino Uno

HC-SR505 PIR Sensor

Jumper Wires

Arduino IDE

## Setup

Connect components as per circuit table.

Upload code to Arduino using Arduino IDE.

Open Serial Monitor at 9600 baud rate.

Observe motion detection messages.

## 👥 Group Members

| Name                   | ID Number     |
|------------------------|---------------|
| Biniyam Feyissa        | ETS0361/14    |
| Burka Labsi            | ETS0402/14    |
| Dagm Taye              | ETS0412/14    |
| Dagmawit Gebreweld     | ETS0435/14    |
| Dagmawit Negash        | ETS0436/14    |
| Danayt Esayas          | ETS0438/14    |
| Delina Mulubirhan      | ETS0484/14    |



## License

This project is for educational purposes only and is licensed under the MIT License.

