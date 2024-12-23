#include <Servo.h>

Servo Pollice;      //1
Servo Palmo;        //2
Servo Polso;        //3
Servo Indice;       //4
Servo TreDita;      //5

// Pin del flex sensor e range
const int flexPinPollice = A0;  // Pin analogico collegato al flex sensor       1
const int flexPinPalmo = A2;  // Pin analogico collegato al flex sensor         2
const int flexPinPolso = A3;  // Pin analogico collegato al flex sensor         3
const int flexPinIndice = A4;  // Pin analogico collegato al flex sensor        4
const int flexPinTreDita = A5;  // Pin analogico collegato al flex sensor       5

const int PinPollice = 8;  // Pin digitale per il pollice collegato al servo motore          1
const int PinPalmo = 9;  // Pin digitale per il palmo collegato al servo motore              2
const int PinPolso = 10;  // Pin digitale per il polso collegato al servo motore             3
const int PinIndice = 11;  // Pin digitale per l'indice collegato al servo motore            4
const int PinTreDita = 12;  // Pin digitale per le 3 dita unite collegate al servo motore    5


void setup() 
{
  // Configurazione del pin del servo
  Pollice.attach(PinPollice);         //1
  Palmo.attach(PinPalmo);             //2
  Polso.attach(PinPolso);             //3
  Indice.attach(PinIndice);           //4
  TreDita.attach(PinTreDita);         //5
  
  // Configurazione del monitor seriale per debug
  Serial.begin(9600);
}

void loop() 
{
  // Lettura dei valori analogico dal flex sensor
  int flexValuePollice = analogRead(flexPinPollice);          //1
  int flexValuePalmo = analogRead(flexPinPalmo);              //2
  int flexValuePolso = analogRead(flexPinPolso);              //3
  int flexValueIndice = analogRead(flexPinIndice);            //4
  int flexValueTreDita = analogRead(flexPinTreDita);          //5
  
  // Mappatura del valore del flex sensor al range del servo (0-180 gradi)
  int PolliceAngle = map(flexValuePollice, 0, 1023, 0, 180); // Adatta i valori min e max del flex        1
  int PalmoAngle = map(flexValuePalmo, 0, 1023, 0, 180); // Adatta i valori min e max del flex            2
  int PolsoAngle = map(flexValuePolso, 0, 1023, 0, 180); // Adatta i valori min e max del flex            3
  int IndiceAngle = map(flexValueIndice, 0, 1023, 0, 180); // Adatta i valori min e max del flex          4
  int TreDitaAngle = map(flexValueTreDita, 0, 1023, 0, 180); // Adatta i valori min e max del flex        5

  // Muove i servo all'angolo calcolato
  Pollice.write(PolliceAngle);       //1
  Palmo.write(PalmoAngle);           //2
  Polso.write(PolsoAngle);           //3
  Indice.write(IndiceAngle);         //4
  TreDita.write(TreDitaAngle);       //5


  // Debug: stampa i valori sul monitor seriale
  Serial.println("Valori letti dai Flex Sensor:");
//1
  Serial.print("Pollice -->");
  Serial.print("Valore Servo: ");
  Serial.print(PolliceAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValuePollice);
  
  delay(1000);

//2
  Serial.print("Palmo -->");
  Serial.print("Valore Servo: ");
  Serial.print(PalmoAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValuePalmo);

  delay(1000);

//3
  Serial.print("Polso -->");
  Serial.print("Valore Servo: ");
  Serial.print(PolsoAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValuePolso);

  delay(1000);

//4
  Serial.print("Indice -->");
  Serial.print("Valore Servo: ");
  Serial.print(IndiceAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValueIndice);

  delay(1000);

//5
  Serial.print("TreDita -->");
  Serial.print("Valore Servo: ");
  Serial.print(TreDitaAngle);
  Serial.print(" | Valore Flex: ");
  Serial.println(flexValueTreDita);

  delay(1000);

  Serial.println(); // Riga vuota per separare letture successive

  // Ritardo per una lettura stabile
  delay(1000);
}
