#include <LiquidCrystal.h>  //Vključitev knjižnice

const int trig = 10;
const int echo = 9;
const int rs = 12;
const int en = 11;
const int D4 = 5;
const int D5 = 4;
const int D6 = 3;
const int D7 = 2;            //definicija pin številk za ultrazvočni senzor in LCD zaslon

LiquidCrystal lcd(rs, en, D4, D5, D6, D7);

float razdalja, t;           //spremenljivke za čas in razdaljo

void setup() {               // setup pomeni da je to začetna funkcija, ki nastavi začetne pogoje
  pinMode(trig, OUTPUT);     //izhod
  pinMode(echo, INPUT);      //vhod
  lcd.begin(16, 2);          //priprava lcd zaslona
  Serial.begin(9600);        //pripravi serijsko komunikacijo s hitrostjo 9600
}

void loop() {                // funkcija loop se izvaja neprenehno
  digitalWrite(trig, HIGH);  //pošlje visok signal na pin trig
  delayMicroseconds(10);     //zadrži signal za 0.01 sekundo ali 10 mikro sekund
  digitalWrite(trig, LOW);   //pošlje nizek signal na pin trig
  t = pulseIn(echo, HIGH);   //meri čas trajanja visokega signala na pin echo
  razdalja = t / 58.82;      //izračuna razdaljo glede na čas, 58.82 je pretvorbeni faktor senzorja
  lcd.clear();               //očisti lcd zaslon
  lcd.setCursor(0, 0);       //nastavi kazalec na prvo vrstico in prvi stolpec zaslona
  lcd.print("Razdalja:");    //izpiše "Razdalja:" na lcd zaslon
  lcd.setCursor(0, 1);       //nastavi kazalec na drugo vrstico in prvi stolpec zaslona
  lcd.print(razdalja, 1);    //izpiše izračunano razdaljo z natančnostjo 1 decimalke
  lcd.print(" cm");          //izpiše " cm" na lcd zaslon
  Serial.print("Razdalja: ");//izpiše "Razdalja:" v serijski monitor
  Serial.print(razdalja);    //izpiše izračunano razdaljo v serijski monitor
  Serial.println(" cm");     //izpiše " cm" v serijski monitor
  delay(500);                //zakasni funkcijo za 500milisekund
}
