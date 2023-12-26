# Smart Home Automation System

## Overview
Welcome to our Smart Home Automation System project! This repository contains the Arduino code for a cutting-edge smart home solution designed to optimize energy use, enhance security, and ensure safety. Our system leverages a range of sensors and actuators including RFID, PIR (motion sensors), flame sensors, relays, buzzers, LEDs, DC motors, and servo motors.

We have integrated IoT capabilities into our system, allowing for remote monitoring and control over various home functions. Additionally, we have utilized Bluetooth technology for wireless communication and control within the home.

## IoT and Bluetooth Integration
Our Smart Home System uses IoT technology for remote access and control. This feature enables users to monitor home conditions and manage devices through the internet. The integration of Bluetooth provides a convenient and efficient way to control the smart home system locally. Users can interact with the system using a smartphone or other Bluetooth-enabled devices to control lighting, security features, and other automated systems in real-time.

## Circuit Designs
Here are the Proteus simulation designs for each section of our smart home system:

### Energy Optimization
![Energy Optimization Proteus Design](https://github.com/solonso/SmartGuardian-HomeSystem/assets/63534670/e29520dd-daca-403f-8beb-fa5b384cd58f)![Automated lightening](https://github.com/solonso/SmartGuardian-HomeSystem/assets/63534670/b426ff28-daf4-46ef-b3a3-8f8632e1534f)
This design shows how various components like LEDs, relays, and sensors are used for optimizing energy usage.

### Security
![RFID-based access control](https://github.com/solonso/SmartGuardian-HomeSystem/assets/63534670/361f2df5-957a-435d-a722-d1e97888cc70)

This section of the design focuses on the security aspects, featuring RFID reader and door control mechanisms.

### Safety
![Safety Proteus Design](https://github.com/solonso/SmartGuardian-HomeSystem/assets/63534670/4a0383e2-4847-4d47-b08c-a23c8c89c987) ![Flame dectation](https://github.com/solonso/SmartGuardian-HomeSystem/assets/63534670/1c5f1518-e281-47e9-a2d0-3f32f0caedf0)


The safety design illustrates the flame sensors and alarms set up for fire detection and prevention.

## Features
- **Energy Optimization:** Automated control of lighting and appliances for efficient energy use.
- **Security:** RFID-based access control and motion detection for enhanced home security.
- **Safety:** Flame detection and alerts to prevent fire hazards.
- **IoT Integration:** Remote monitoring and control of the home via internet connectivity.
- **Bluetooth Connectivity:** Local control and monitoring of the system through Bluetooth-enabled devices.

## Hardware Components
- Arduino Board
- RFID Reader (MFRC522)
- PIR Motion Sensors
- Flame Sensors
- Servo Motor
- DC Motor
- Relays, LEDs, Buzzer
- DHT11 Temperature and Humidity Sensor

## Setup and Installation
1. **Hardware Setup:** Connect all the components according to the schematics provided in the `schematics` folder.
2. **Software Requirements:** Upload the provided Arduino sketch to your Arduino board.
3. **Configuration:** Adjust the threshold values and settings in the code to suit your environment.

## Usage
- The system automatically detects motion, temperature changes, and flame presence to control various elements like fans, lights, and alarms.
- RFID reader is used for secure access control.
- Real-time monitoring and automation for efficient energy use and enhanced safety.

## Code Structure
- `setup()`: Initializes the sensors and actuators.
- `loop()`: Main loop handling RFID reading, motion detection, and flame detection.
- Helper functions like `automation()`, `safety()`, and `temperatureControl()` for modular code structure.

## Contributing
We welcome contributions and suggestions to improve this project. Please read `CONTRIBUTING.md` for details on our code of conduct, and the process for submitting pull requests.

## License
This project is licensed under the MIT License - see the `LICENSE.md` file for details.

## Acknowledgments
- Special thanks to the team members and contributors who have made this project possible.
- Community support and feedback.
