# Arduino UNO R4 WiFi - Warning System

A beginner Arduino project developed using the Arduino UNO R4 WiFi.

The project simulates a simple telemetry monitoring system that checks:

- Temperature
- Battery voltage
- Signal strength

If one or more values exceed the defined thresholds, the system reports the corresponding warning through the Serial Monitor.

![Arduino Warning System](asset/image1.jpg)

## Features

- Telemetry packet counter
- Temperature monitoring
- Battery voltage monitoring
- Signal strength monitoring
- Automatic system status check
- Multiple simultaneous warnings
- Serial Monitor output

## Warning Conditions

The system generates warnings when:

```text
Temperature > 40.0 °C
Battery Voltage < 7.2 V
Signal Strength < 50.0
