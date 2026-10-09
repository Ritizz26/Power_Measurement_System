# Power_Measurement_System

An electronics project using an Arduino Uno and INA219 sensor to measure and analyse voltage, current, and power consumption of electrical loads.

## Objective

The objective of this project is to develop a practical power measurement system that can monitor the electrical behavior of electronic circuits in real time. By integrating the INA219 sensor with an Arduino microcontroller, the system measures key electrical parameters and processes the readings through software. The project will gradually evolve from basic sensor measurements into a more complete monitoring device, incorporating a display, testing different loads, and improving measurement reliability. Through this process, the project aims to strengthen my understanding of electronics, sensor interfacing, embedded programming, and experimental testing.

## Components (For Version 1)

- Arduino Uno
- INA219 current and power sensor
- Breadboard and jumper wires
- LED and resistor (test load)

### Planned Versions and integrations

- **V2 — LCD Integration:** Display measurements on an I²C LCD.
- **V3 — Load Testing:** Measure and compare readings across different loads.
- **V4 — Software Improvements:** Add averaging and improved measurement presentation.
- **V5 — Validation:** Compare readings with a multimeter and document measurement errors.

## Version History

### V1 — Basic Power Measurement

Implemented I²C communication with the INA219 and measured bus voltage, shunt voltage, current, and power. Readings are displayed through the Arduino Serial Monitor.

**Example output:**
```text
Bus Voltage: 4.26 V
Shunt Voltage: 0.31 mV
Current: 3.40 mA
Power: 14.00 mW
```


## Authors

Ritiz Shrestha
Ronish Bir Bikram Shah

*This project is under active development. Features will be documented as new versions are completed.*