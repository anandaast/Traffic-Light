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
