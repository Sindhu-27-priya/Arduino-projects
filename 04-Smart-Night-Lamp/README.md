# Smart Night Lamp

An automated, energy-efficient night light project built using Arduino and Wokwi simulator. The lamp automatically turns on when ambient light drops below a specific threshold (darkness) and turns off when light is detected.

## 🚀 Live Simulation
You can view and test the live circuit simulation here:
[Wokwi Project Simulation](https://wokwi.com/projects/472583388791938049)

## 🛠️ Components Used
* **Arduino Uno** (Microcontroller)
* **LDR (Light Dependent Resistor / Photoresistor)** (Light sensor)
* **Resistors**
* **LED / Lamp**
* **Connecting Wires**

## 💡 How It Works
1. The **LDR sensor** reads the intensity of ambient light in the surroundings.
2. The **Arduino** processes the analog signal coming from the LDR sensor.
3. If the sensor detects darkness (analog value goes above/below the specified threshold), the Arduino sends a signal to turn the **LED ON**.
4. When room light is restored, the Arduino automatically turns the **LED OFF**.

## 📌 Circuit Setup
* **LDR Pin:** Connected to Analog Input pin (e.g., `A0`) with a pull-down/pull-up resistor network directly to the board.
* **LED Pin:** Connected to Digital Output pin (e.g., Pin `13` or `9`).

## 📜 How to Run
1. Open the project in the [Wokwi Simulator](https://wokwi.com/projects/472583388791938049).
2. Click the **Play** button to start the simulation.
3. Click on the LDR sensor during simulation to adjust the light intensity slider and test the auto-on/off behavior.
