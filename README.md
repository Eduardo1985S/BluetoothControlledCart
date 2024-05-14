# Bluetooth-Controlled Arduino Cart

## Overview
This project involves creating a Bluetooth-controlled cart using Arduino. It is designed for hobbyists and students who wish to explore robotics and basic programming. The cart can be maneuvered remotely via a Bluetooth connection, using a custom mobile app available on the Android platform.

## Features
- **Remote Control via Bluetooth**: Control the cart using the RC Bluetooth Controller app.
- **Customizable Speed Settings**: Adjust the speed according to your preference.
- **Error Handling**: Improved error handling for stable operation.
- **LED Lights and Buzzer**: Equipped with headlights, taillights, and a buzzer for a realistic experience.

## Requirements
- **Hardware**:
  - Arduino Uno or similar microcontroller
  - Bluetooth module (HC-05 or HC-06)
  - Motor driver (L298N or similar)
  - 2 DC motors with a 48:1 gearbox
  - Two additional wheels
  - AA battery case
  - AA battery compartment and a set of alkaline AA batteries
  - USB cable to connect the board to the IDE
  - Chassis with wheels and space for mounting electronics
 
- **SoftWare**:
 - Android device to control the cart
 - **Control Options**:
  - RC Bluetooth Controller app
  - Bluetooth RC Car APK

## Installation
1. **Assemble the hardware**:: Follow the assembly instructions to set up the chassis, mount the Arduino, and install other necessary components.
2. **Upload the code**: Connect your Arduino to your computer, open the BluetoothControlledCart.ino file in the Arduino IDE, which utilizes C++, and then upload the script to the microcontroller.
3. **Connect the app**: Pair your mobile device with the Bluetooth module and launch the RC Bluetooth Controller app to begin operating the cart.

## Usage
Turn on the cart and connect through the RC Bluetooth Controller app. Use the on-screen controls to move the cart forward, backward, and turn. Adjust the speed and use additional features like the headlights and buzzer from the app interface.

## Contributing
Contributions are welcome! If you'd like to improve the code, add features, or suggest changes to the documentation, please feel free to create a pull request or open an issue.

## License
This project is released under the MIT License. See the LICENSE file for more details.
