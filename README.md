# Smart-Traffic-Light
🚦 Traffic Light Simulation using ESP32

This project simulates a traffic light system using an ESP32 microcontroller and three LEDs (red, yellow, green). The program runs in a continuous loop, controlling the LEDs based on typical traffic light sequences.

🔧 Features:
Controls three LEDs to simulate a traffic light system
Uses ESP32 GPIO pins for LED control
Implements time delays to match real traffic light intervals
Can be tested on Wokwi Simulator before running on actual hardware

📌 Components Used:
ESP32 microcontroller
Red, Yellow, and Green LEDs
Resistors (220Ω - 330Ω)
Jumper wires

💻 How It Works:
The red light turns on for 30 seconds ⏳
Then, the yellow light turns on for 5 seconds ⚠️
Finally, the green light turns on for 20 seconds ✅
The cycle repeats infinitely ♻️

📜 Code Overview:
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
  digitalWrite(Merah_LED, HIGH);
  delay(30000);
  digitalWrite(Merah_LED, LOW);

  digitalWrite(Kuning_LED, HIGH);
  delay(5000);
  digitalWrite(Kuning_LED, LOW);

  digitalWrite(Hijau_LED, HIGH);
  delay(20000);
  digitalWrite(Hijau_LED, LOW);
}

🚀 How to Run:
Upload the code to your ESP32 using the Arduino IDE or PlatformIO
Connect LEDs and resistors according to the circuit diagram
Run the program and observe the traffic light sequence!

