# Automatic Gas Leak Detection and Alarm System using Arduino UNO

This project is an **Automatic Gas Leak Detection and Alarm System** using an Arduino UNO and various other components. The system detects the presence of gas leaks and triggers an alarm while automatically shutting off the gas valve.

## Components Used
- **Arduino UNO**
- **MQ-5 Gas Sensor**: Detects the presence of gases like LPG, propane, and methane.
- **Servo Motor**: Used to automatically turn off the gas regulator.
- **Buzzer**: Provides an audible alarm in case of gas detection.
- **IRF540N MOSFET**: Controls the CPU cooling fan.
- **CPU Cooling Fan**: Activated to disperse any detected gas.
- **PG Gas Regulator**
- **Jumper Wires**
- **Breadboard**

## Circuit Diagram
![Circuit Diagram](https://github.com/fenicXs/Automatic-Gas-leak-detection-and-alarm-system-using-Arduino-UNO/blob/main/circuit%20diagram.jpg?raw=true)

## Features
- **Gas Detection**: Detects gases like LPG, propane, and methane.
- **Automatic Gas Shutoff**: A servo motor is triggered to turn off the gas regulator when gas is detected.
- **Audible Alarm**: A buzzer is activated to alert nearby individuals of the gas leak.
- **Cooling Fan Activation**: A fan is triggered to disperse the leaked gas to prevent any further accumulation.

## How It Works
1. The **MQ-2 sensor** continuously monitors the environment for gas leaks.
2. When gas is detected above a certain threshold, the **servo motor** automatically rotates to shut off the **PG gas regulator**.
3. Simultaneously, a **buzzer** sounds to alert people nearby.
4. The **cooling fan** is activated through the **IRF540N MOSFET** to disperse the gas and reduce its concentration.

## Installation and Setup
1. **Hardware Setup**:
   - Connect the MQ-5 sensor to the Arduino according to the circuit diagram.
   - Connect the servo motor, buzzer, fan, and MOSFET as per the schematic.
   - Ensure the gas regulator can be controlled via the servo motor.

2. **Software**:
   - Upload the provided Arduino sketch to the Arduino UNO using the Arduino IDE.
   - The code handles gas detection, alarm triggering, and automatic gas shutoff.

## Results
**Before Smoke:**
![Before Smoke](https://github.com/fenicXs/Automatic-Gas-leak-detection-and-alarm-system-using-Arduino-UNO/blob/main/1.jpg?raw=true)
**After Smoke:**
![After Smoke](https://github.com/fenicXs/Automatic-Gas-leak-detection-and-alarm-system-using-Arduino-UNO/blob/main/2.jpg?raw=true)
