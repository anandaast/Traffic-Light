# 📌 Tugas Praktik Io

## 🚦Traffic Light Simulation with ESP32

This project simulates a traffic light system using an ESP32 and the Wokwi Simulator. The simulation displays red, yellow, and green LEDs that turn on sequentially, following Indonesian traffic light regulations.


## 🔧 Features  
✅ Uses ESP32 as the main microcontroller 
✅ Three LEDs representing traffic lights (Red, Yellow, Green) 
✅ Runs on Wokwi Simulator without physical hardware 
✅ Light durations follow standard traffic light rules

## 🖥️ Wokwi Diagram
Below is the circuit diagram in JSON format, ready to use in Wokwi Simulator. 

## 💡 How It Works  
1. The **red** light turns on for **30 seconds** ⏳  
2. Then, the **yellow** light turns on for **5 seconds** ⚠️  
3. Finally, the **green** light turns on for **20 seconds** ✅  
4. The cycle repeats infinitely ♻️

## 📜 ESP32 Code 
```cpp
#include <Arduino.h>

int Merah_LED = 21;  
int Kuning_LED = 19;  
int Hijau_LED = 18;  

void setup() {
  Serial.begin(115200);   
  pinMode(Merah_LED, OUTPUT);
  pinMode(Kuning_LED, OUTPUT);
  pinMode(Hijau_LED, OUTPUT);
}

void loop() {
  // 🔴 Lampu Merah 30 detik
  Serial.println("Lampu Merah Menyala");
  digitalWrite(Merah_LED, HIGH);
  delay(30000);
  digitalWrite(Merah_LED, LOW);

  // 🟡 Lampu Kuning 5 detik
  Serial.println("Lampu Kuning Menyala");
  digitalWrite(Kuning_LED, HIGH);
  delay(5000);
  digitalWrite(Kuning_LED, LOW);

  // 🟢 Lampu Hijau 20 detik
  Serial.println("Lampu Hijau Menyala");
  digitalWrite(Hijau_LED, HIGH);
  delay(20000);
  digitalWrite(Hijau_LED, LOW);
}

## 🚀 How to Run in Wokwi
1. Open Wokwi ESP32 Simulator
2. Create a new project and select ESP32
3. Copy and paste the JSON diagram into diagram.json
4. Copy and paste the C++ code into main.cpp
5. Click the RUN ▶️ button to start the simulation 

## 📌 Conclusion

This project demonstrates how to simulate a traffic light system using ESP32 without physical hardware. Thanks to the Wokwi Simulator, we can visualize how red, yellow, and green lights operate in a traffic system interactively! 🚦 
