# Power_Measurement_System

An electronics project using an Arduino Uno and INA219 sensor to measure and analyse voltage, current, and power consumption of electrical loads.

## Objective

The objective of this project is to develop a practical power measurement system that can monitor the electrical behavior of electronic circuits in real time. By integrating the INA219 sensor with an Arduino microcontroller, the system measures key electrical parameters and processes the readings through software. The project will gradually evolve from basic sensor measurements into a more complete monitoring device, incorporating a display, testing different loads, and improving measurement reliability. Through this process, the project aims to strengthen my understanding of electronics, sensor interfacing, embedded programming, and experimental testing.

## Components (For Version 1)

- Arduino Uno
- INA219 current and power sensor
- Breadboard and jumper wires
- LED and resistor (test load)
  (More components according to the requirements may be added as the version of the project advances)

### Planned Versions and integrations

## Planned Development

- **Version 2 — LCD Integration:** Display voltage, current, and power readings on an I²C LCD.
- **Version 3 — Measurement Validation:** Compare INA219 readings against a multimeter and investigate electrical behavior under different loads.
- **Version 4 — Data Acquisition and Python Analysis:** Transfer Arduino measurements to a computer, store them in CSV format, and use NumPy, Pandas, and Matplotlib for data analysis and visualization.
- **Version 5 — Solar Cell Characterization:** Collect measurements under varying load conditions and generate current–voltage (I–V) and power–voltage (P–V) curves.
- **Version 6 — Solar Cell Analysis and Optimization:** Compare experimental results with theoretical solar-cell models, analyze measurement errors, and investigate maximum power point tracking (MPPT).

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


## A project by-

Ritiz Shrestha
Ronish Bikram Shah

*This project is under active development. Features will be documented as new versions are completed.*
