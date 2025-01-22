//dichiaro la libreria per i servo motori
#include <Servo.h>

//pin digitale a cui è attaccato il servo motore
#define PINgomito 7 
#define PINpollice 8
#define PINpalmo 9
#define PINindice 10
#define PINdita 11

//pin analogico a cui è attaccato il potenziometro
#define CTgomito A0
#define CTpollice A1
#define CTpalmo A2
#define CTindice A3
#define CTdita A4

//dichiarazione dei servo
Servo gomito;
Servo pollice;
Servo palmo;
Servo indice;
Servo dita;


void setup() {
  
  //dichiaro che i servo sono attacati ai pin
  gomito.attach(PINgomito);
  pollice.attach(PINpollice);
  palmo.attach(PINpalmo);
  indice.attach(PINindice);
  dita.attach(PINdita);

}

void loop() {
  
  
  int VALgomito = analogRead(CTgomito); //è una variabile nella quale inseriamo i valori del potenziometro
  int ANGgomito = map(VALgomito, 0, 1023, 0, 179); //è una variabile che converte i valori del potenziometro in angolo cosi da poter muovre il servo
  gomito.write(ANGgomito);

  int VALpollice = analogRead(CTpollice); //è una variabile nella quale inseriamo i valori del potenziometro
  int ANGpollice = map(VALpollice, 0, 1023, 0, 179); //è una variabile che converte i valori del potenziometro in angolo cosi da poter muovre il servo
  pollice.write(ANGpollice);

  int VALpalmo = analogRead(CTpalmo); //è una variabile nella quale inseriamo i valori del potenziometro
  int ANGpalmo = map(VALpalmo, 0, 1023, 0, 179); //è una variabile che converte i valori del potenziometro in angolo cosi da poter muovre il servo
  palmo.write(ANGpalmo);

  int VALindice = analogRead(CTindice); //è una variabile nella quale inseriamo i valori del potenziometro
  int ANGindice = map(VALindice, 0, 1023, 0, 179); //è una variabile che converte i valori del potenziometro in angolo cosi da poter muovre il servo
  indice.write(ANGindice);

  int VALdita = analogRead(CTdita); //è una variabile nella quale inseriamo i valori del potenziometro
  int ANGdita = map(VALdita, 0, 1023, 0, 179); //è una variabile che converte i valori del potenziometro in angolo cosi da poter muovre il servo
  dita.write(ANGdita);

  
}
