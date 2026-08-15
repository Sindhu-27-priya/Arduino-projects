# 🚦 Traffic Light System

An Arduino-based embedded systems project that simulates a standard automated traffic signal sequence using LED indicators and precise time-delay control logic.

---

## 📌 Project Overview
This project models real-world traffic management systems by driving three LEDs (Red, Yellow, Green) through a continuous, cyclic state sequence:

* **Red Light (STOP):** Active for **5 seconds**
* **Yellow Light (READY/CAUTION):** Active for **2 seconds**
* **Green Light (GO):** Active for **5 seconds**

---

## 🛠️ Hardware Requirements

| Component | Quantity | Description |
| :--- | :--- | :--- |
| **Microcontroller** | 1 | Arduino Uno R3 (or compatible board) |
| **Red LED** | 1 | High-brightness 5mm LED |
| **Yellow LED** | 1 | High-brightness 5mm LED |
| **Green LED** | 1 | High-brightness 5mm LED |
| **Resistors** | 3 | 220Ω (Current limiting) |
| **Interconnects** | Several | Male-to-Male Jumper Wires |

---
## 🔌 Circuit & Wiring Setup

Connect the components according to the pin mapping below:
[Arduino Pin 13] ---> [Resistor 220Ω] ---> [Red LED Anode (+)]
[Arduino Pin 12] ---> [Resistor 220Ω] ---> [Yellow LED Anode (+)]
[Arduino Pin 11] ---> [Resistor 220Ω] ---> [Green LED Anode (+)]
[Arduino GND]    ------------------------> [All LED Cathodes (-)]

### Pin Mapping

| LED Color | Arduino Digital Pin | Resistor | Connection Type |
| :--- | :--- | :--- | :--- |
| 🔴 **Red** | `Pin 13` | 220Ω | Anode (+) |
| 🟡 **Yellow** | `Pin 12` | 220Ω | Anode (+) |
| 🟢 **Green** | `Pin 11` | 220Ω | Anode (+) |
| ⬛ **Common Ground** | `GND` | N/A | Cathodes (-) |

---
