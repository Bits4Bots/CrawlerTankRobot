# CrawlerTankRobot
Crawler Tank Robot using various microcontrollers.

# TT04 Robot Tank Chassis Project

This repository contains the code and setup details for a **TT04 Intelligent Robot Tank Chassis Kit** integrated with the **Seeed Studio XIAO SAMD21 microcontroller**. The tank chassis serves as a great platform for **robotics learning, STEAM education**, and **DIY robotics projects**. With its modular design and robust metal frame, this kit is ideal for beginners, students, and makers.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Product Parameters](#product-parameters)
  - [Metal Frame](#metal-frame-parameters)
  - [TT DC Motors](#tt-dc-motor-parameters)
- [Hardware Components](#hardware-components)
- [Software Requirements](#software-requirements)
- [Setup Instructions](#setup-instructions)
- [Code Overview](#code-overview)
- [Project Gallery](#project-gallery)
- [Future Improvements](#future-improvements)
- [IR remote and line follower to come]
- [License](#license)

## Introduction
The **TT04 Robot Tank Chassis** is an educational platform designed for:
- **DIY makers**
- **School students** for STEAM education
- **Robotics enthusiasts** for competitions or teaching
- **Beginners** looking to improve logical thinking, mechanical design, and programming skills

This project demonstrates how to integrate the TT04 chassis with a **Seeed Studio XIAO SAMD21** microcontroller to create a smart tracked robot.

---

## Features
- **Durable metal frame:** Provides a sturdy platform for mounting components.
- **TT DC Motors:** Equipped with encoders for precise control.
- **Detachable tracks:** Engineering plastic tracks that are wear-resistant and customizable in length.
- **Compact design:** Small size makes it suitable for indoor and outdoor use.
- **Scalable:** Add sensors, cameras, or other components for advanced functionality.

---

## Product Parameters

### Chassis Specifications
- **Size:** 193mm x 163mm x 60mm (7.6" x 6.4" x 2.4")
- **Crawler material:** Wear-resistant engineering plastic
- **Carrying capacity:** Up to 3kg
- **Motor type:** TT DC motor (4pcs)

### Metal Frame Parameters
- **Material:** Sturdy metal
- **Size:** 135mm x 75mm x 35mm (5.31" x 2.95" x 1.38")

### TT DC Motor Parameters
- **Voltage:** 5V-9V (9V recommended)
- **Reduction ratio:** 48:1
- **No-load current:** ≤250mA at 6V
- **Speed:** 240±10% RPM at 6V, 110±10% RPM at 3V
- **Features:** Strong magnetic band, anti-interference design

---

## Hardware Components
The following components are included in the TT04 Robot Tank Kit:
- **1x Metal panel**
- **2x Plastic driving wheels**
- **2x Plastic bearing wheels**
- **2x Engineering plastic tracks**
- **4x TT DC motors with encoders**
- **1x Screw kit**

Additional components used in this project:
- **Microcontroller:** Seeed Studio XIAO SAMD21
- **Motor power:** 9V power supply
- **Microcontroller power:** 3.3V LiPo power supply
- **USB Type C Pigtail 2 wire left right direction:** 22AWG 5V 3A with quick wire cable connector
- **Sensors:** Ultrasonic sensor (e.g., HC-SR04)
- **Read and Black wire:** Male to female (connects to TT04 motors)

---

## Software Requirements
To run the robot, you will need:
- **Arduino IDE** (version 1.8.19 or higher)
- **Seeed XIAO SAMD21 Board Package** (install via Arduino Boards Manager)
- **Motor control libraries** (e.g., `AccelStepper`, `Encoder`, or other custom libraries)
- **Ultrasonic sensor library** (e.g., `NewPing`)

---

## Setup Instructions
1. **Assemble the Chassis:**
   - Attach the motors, tracks, and metal panel as per the instruction manual.
   - Securely connect the motor encoders and the battery pack.
2. **Connect the Microcontroller:**
   - Mount the **Seeed Studio XIAO SAMD21** on the metal panel.
   - Connect motor driver pins (e.g., L9110S or other) to the corresponding motor pins.
   - Wire the ultrasonic sensor for obstacle detection:
     - **VCC**: 3.3V
     - **GND**: Ground
     - **Trig**: Pin 10
     - **Echo**: Pin 9
3. **Upload the Code:**
   - Open the Arduino IDE, load the provided sketch, and upload it to the XIAO SAMD21.
4. **Power Up:**
   - Turn on the power supply and observe the robot's movement and obstacle avoidance.

---

## Code Overview
The included code performs the following functions:
- **Motor control:** Moves the robot forward or backward using the TT motors.
- **Obstacle avoidance:** Uses the HC-SR04 ultrasonic sensor to detect obstacles and stop or change direction.
- **Debugging:** Outputs real-time distance measurements to the Serial Monitor.

---

## Project Gallery
![Assembled Robot Chassis] <img width="540" alt="Crawler Tank Robot" src="https://github.com/user-attachments/assets/5e87f4af-6951-4efb-a721-8e36f26982c8">

![Robot in Action] Find it on IG @bits4bots

---

## Future Improvements
- Add support for more sensors (e.g., IR sensors, light sensors).
- Implement advanced motor control with PID or trajectory planning.
- Add wireless control using Bluetooth or Wi-Fi.
- Expand functionality to include line-following or object tracking.

---

## License
This project is open-source and distributed under the [MIT License](LICENSE). Feel free to modify and improve the code and hardware design.

---

### Acknowledgments
This project is based on the **TT04 Intelligent Robot Tank Chassis Kit** from **SmaringWing**. Special thanks to the open-source community for providing inspiration and support for robotics projects.
