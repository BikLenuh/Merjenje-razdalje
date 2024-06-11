#include <LiquidCrystal.h>

const int trig = 10;
const int echo = 9;
const int rs = 12;
const int en = 11;
const int D4 = 5;
const int D5 = 4;
const int D6 = 3;
const int D7 = 2;

LiquidCrystal lcd(rs, en, D4, D5, D6, D7);

float distance, t;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  t = pulseIn(echo, HIGH);
  distance = t / 58.82;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Razdalja:");
  lcd.setCursor(0, 1);
  lcd.print(distance, 1);
  lcd.print(" cm");
  Serial.print("Razdalja: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
}