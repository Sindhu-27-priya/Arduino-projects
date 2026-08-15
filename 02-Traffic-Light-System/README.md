# 🚦 Traffic Light System

An Arduino-based embedded systems project that simulates a standard automated traffic signal sequence using LED indicators and controlled time-delay logic.

---

## 📌 Overview
This project models real-world traffic management systems by driving three LEDs (Red, Yellow, Green) through a continuous, cyclic state sequence:

* **Red Light (STOP):** Active for **5 seconds**
* **Yellow Light (READY / CAUTION):** Active for **2 seconds**
* **Green Light (GO):** Active for **5 seconds**

---

## ⚡ Live Simulation
You can test and run this project online without hardware using Wokwi:
👉 **[Run Wokwi Traffic Light Simulation](https://wokwi.com/projects/472391088301380609)**

---

## 🛠️ Hardware Requirements

| Component | Quantity | Specifications |
| :--- | :--- | :--- |
| **Microcontroller** | 1 | Arduino Uno R3 (or compatible) |
| **Red LED** | 1 | Standard 5mm LED |
| **Yellow LED** | 1 | Standard 5mm LED |
| **Green LED** | 1 | Standard 5mm LED |
| **Resistors** | 3 | 220Ω (Current limiting) |
| **Breadboard** | 1 | Standard Solderless Breadboard |
| **Jumper Wires** | Several | Male-to-Male |

---

## 🔌 Circuit & Pin Connections

| LED Color | Arduino Digital Pin | Resistor | Terminal Connection |
| :--- | :--- | :--- | :--- |
| 🔴 **Red LED** | `Pin 13` | 220Ω | Anode (+) |
| 🟡 **Yellow LED** | `Pin 12` | 220Ω | Anode (+) |
| 🟢 **Green LED** | `Pin 11` | 220Ω | Anode (+) |
| ⬛ **Ground** | `GND` | — | Common Cathode (-) |

---

## ⚙️ How to Run

### Option 1: Live Simulation
Click the [Wokwi Simulation link](https://wokwi.com/projects/472391088301380609) to run the simulation directly in your browser.

### Option 2: Physical Arduino Board
1. Open `sketch.ino` in the [Arduino IDE](https://www.arduino.cc/en/software).
2. Connect your Arduino board via USB.
3. Select your board type: **Tools > Board > Arduino AVR Boards > Arduino Uno**.
4. Select the corresponding serial port: **Tools > Port**.
5. Click **Upload** to flash the program onto the micro-controller.

---

## 📄 License
This repository is released under the [MIT License](LICENSE).
