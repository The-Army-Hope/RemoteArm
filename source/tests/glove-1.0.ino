// A very early WIP of the project to understand how it works without the Wi-FI connection; simple code by @Matte549, @turkiz-jpg

// Declaring the servos' library
#include <Servo.h>

// Digital pins for the servos' attachments on the Arduino board
#define PINgomito 7
#define PINpollice 8
#define PINpalmo 9
#define PINindice 10
#define PINdita 11

// Analogic pins for the potentiometers' connections
#define CTgomito A0
#define CTpollice A1
#define CTpalmo A2
#define CTindice A3
#define CTdita A4

// Servos declaration
Servo gomito;
Servo pollice;
Servo palmo;
Servo indice;
Servo dita;


void setup() {
  // Attaching the servos to the defined pins
  gomito.attach(PINgomito);
  pollice.attach(PINpollice);
  palmo.attach(PINpalmo);
  indice.attach(PINindice);
  dita.attach(PINdita);
}

void loop() {
  int VALgomito = analogRead(CTgomito); // Variable storing the potentiometer values
  int ANGgomito = map(VALgomito, 0, 1023, 0, 179); // Variable converting the potentiometer values to angle so that the servo can move
  gomito.write(ANGgomito);

  int VALpollice = analogRead(CTpollice); // Variable storing the potentiometer values
  int ANGpollice = map(VALpollice, 0, 1023, 0, 179); // Variable converting the potentiometer values to angle so that the servo can move
  pollice.write(ANGpollice);

  int VALpalmo = analogRead(CTpalmo); // Variable storing the potentiometer values
  int ANGpalmo = map(VALpalmo, 0, 1023, 0, 179); // Variable converting the potentiometer values to angle so that the servo can move
  palmo.write(ANGpalmo);

  int VALindice = analogRead(CTindice); // Variable storing the potentiometer values
  int ANGindice = map(VALindice, 0, 1023, 0, 179); // Variable converting the potentiometer values to angle so that the servo can move
  indice.write(ANGindice);

  int VALdita = analogRead(CTdita); // Variable storing the potentiometer values
  int ANGdita = map(VALdita, 0, 1023, 0, 179); // Variable converting the potentiometer values to angle so that the servo can move
  dita.write(ANGdita);
}
