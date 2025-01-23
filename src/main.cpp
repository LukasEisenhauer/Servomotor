#include <Arduino.h>
#include <ESP32Servo.h> // Verwende die ESP32Servo-Bibliothek

#define BUTTON_PIN 13 // Pin für den Taster
#define SERVO_PIN 12  // Pin für den Servo

Servo myServo; // Servo-Objekt erstellen

int pos = 0; // Initiale Position des Servos (0-180 Grad)
bool buttonState = false;
bool lastButtonState = false;

void setup()
{
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP); // Taster an Pin 13, mit internem Pullup-Widerstand

  myServo.attach(SERVO_PIN); // Servo an den angegebenen Pin anschließen
  myServo.write(pos);        // Servo auf Startposition setzen
}

void loop()
{
  buttonState = digitalRead(BUTTON_PIN) == LOW; // Taster betätigt (LOW, da INPUT_PULLUP)

  if (buttonState != lastButtonState)
  {
    if (buttonState == true)
    { // Wenn der Taster gerade gedrückt wurde
      if (pos == 0)
      {
        pos = 90; // Servo auf 90 Grad setzen
      }
      else
      {
        pos = 0; // Servo zurück auf 0 Grad setzen
      }
      myServo.write(pos); // Servo auf neue Position setzen
      delay(500);         // Debounce, um mehrfaches Auslösen zu vermeiden
    }
    lastButtonState = buttonState;
  }
}
