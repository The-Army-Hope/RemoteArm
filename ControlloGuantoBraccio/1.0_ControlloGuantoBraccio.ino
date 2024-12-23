#include <Servo.h>

Servo Pollice;
Servo Indice;
Servo TreDita;
Servo Polso;

// Pin del flex sensor e range
const int flexPinPollice = A0;  // Pin analogico collegato al flex sensor
const int flexPinIndice = A1;  // Pin analogico collegato al flex sensor
const int flexPinTreDita = A2;  // Pin analogico collegato al flex sensor
const int flexPinPolso = A3;  // Pin analogico collegato al flex sensor
const int PinPollice = 11;  // Pin digitale per il pollice collegato al servo motore
const int PinIndice = 10;  // Pin digitale per l'indice collegato al servo motore
const int PinTreDita = 9;  // Pin digitale per le 3 dita unite collegate al servo motore
const int PinPolso = 8;  // Pin digitale per il polso collegato al servo motore

void setup() 
{
  // Configurazione del pin del servo
  Pollice.attach(PinPollice);
  Indice.attach(PinIndice);
  TreDita.attach(PinTreDita);
  Polso.attach(PinPolso);
  
  // Configurazione del monitor seriale per debug
  Serial.begin(9600);
}

void loop() 
{
  // Lettura dei valori analogico dal flex sensor
  int flexValuePollice = analogRead(flexPinPollice);
  int flexValueIndice = analogRead(flexPinIndice);
  int flexValueTreDita = analogRead(flexPinTreDita);
  int flexValuePolso = analogRead(flexPinPolso);
  
  // Mappatura del valore del flex sensor al range del servo (0-180 gradi)
  int PolliceAngle = map(flexValuePollice, 500, 1000, 0, 180); // Adatta i valori min e max del flex
  int IndiceAngle = map(flexValueIndice, 500, 1000, 0, 180); // Adatta i valori min e max del flex
  int TreDitaAngle = map(flexValueTreDita, 500, 1000, 0, 180); // Adatta i valori min e max del flex
  int PolsoAngle = map(flexValuePolso, 500, 1000, 0, 180); // Adatta i valori min e max del flex
  
  // Limitazione dell'angolo tra 0 e 180 gradi
  PolliceAngle = constrain(PolliceAngle, 0, 180);
  IndiceAngle = constrain(IndiceAngle, 0, 180);
  TreDitaAngle = constrain(TreDitaAngle, 0, 180);
  PolsoAngle = constrain(PolsoAngle, 0, 180);
  
  // Muove i servo all'angolo calcolato
  Pollice.write(PolliceAngle);
  Indice.write(IndiceAngle);
  TreDita.write(TreDitaAngle);
  Polso.write(PolsoAngle);

  // Debug: stampa i valori sul monitor seriale
  Serial.println("Valori letti dai Flex Sensor:");

  Serial.print("Pollice -->");
  Serial.print("Valore Servo: ");
  Serial.print(PolliceAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValuePollice);

  Serial.print("Indice -->");
  Serial.print("Valore Servo: ");
  Serial.print(IndiceAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValueIndice);

  Serial.print("TreDita -->");
  Serial.print("Valore Servo: ");
  Serial.print(TreDitaAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValueTreDita);

  Serial.print("Polso -->");
  Serial.print("Valore Servo: ");
  Serial.print(PolsoAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValuePolso);

  Serial.println(); // Riga vuota per separare letture successive


  // Ritardo per una lettura stabile
  delay(50);
}
