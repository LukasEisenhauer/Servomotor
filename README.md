# Servo Motor Controller

Dieses Repository enthält den Code zur Steuerung eines kleinen Servo-Motors. Das Projekt wurde entwickelt, um grundlegende Kenntnisse über Servo-Motoren und ihre Steuerung mit PWM-Signalen (Pulsweitenmodulation) zu vermitteln.

## Funktionen

- **Präzise Steuerung:**
  - Bewegen des Servo-Motors zu spezifischen Positionen.
- **PWM-Signalsteuerung:**
  - Implementierung der Pulsweitenmodulation zur Positionskontrolle.
- **Anpassbare Parameter:**
  - Einfaches Ändern von Zielposition und Timing.

## Anforderungen

- **Hardware:**
  - Microcontroller (z. B. Arduino, ESP32 oder Raspberry Pi).
  - Servo-Motor (z. B. SG90 oder MG996R).
  - Stromversorgung (abhängig vom Servo-Motor).
  - Verbindungsleitungen.

- **Software:**
  - Arduino IDE (bei Verwendung eines Arduino).
  - Oder eine andere Entwicklungsumgebung für Ihren Microcontroller.

## Installation

1. **Repository klonen:**
   ```bash
   git clone https://github.com/username/servo-motor-controller.git
   ```

2. **Code öffnen:**
   - Öffnen Sie den Code in Ihrer bevorzugten IDE.

3. **Anschließen des Servo-Motors:**
   - Verbinden Sie den Servo-Motor mit dem Microcontroller:
     - Signalpin → PWM-Pin des Controllers.
     - VCC → 5V/3.3V (je nach Servo).
     - GND → GND des Controllers.

4. **Code hochladen:**
   - Laden Sie den Code auf Ihren Microcontroller hoch.

## Verzeichnisstruktur

```
servo-motor-controller/
├── src/               # Quellcode
├── examples/          # Beispielprojekte
├── docs/              # Dokumentation
└── README.md          # Dieses Dokument
```

## Verwendung

1. **PWM-Steuersignal:**
   - Der Servo-Motor wird mit PWM angesteuert. Standardwerte:
     - 1 ms → Minimalposition
     - 1,5 ms → Mittelposition
     - 2 ms → Maximalposition

2. **Beispielcode:**
   ```c
   #include <Servo.h>

   Servo myServo;

   void setup() {
       myServo.attach(9); // PWM-Pin 9
   }

   void loop() {
       myServo.write(0);   // Minimalposition
       delay(1000);
       myServo.write(90);  // Mittelposition
       delay(1000);
       myServo.write(180); // Maximalposition
       delay(1000);
   }
   ```

## Anwendungsbereiche

- Robotik
- RC-Modelle
- Automatisierungstechnik
- Bildungsprojekte

## Lizenz

Dieses Projekt steht unter der **MIT-Lizenz**. Weitere Informationen finden Sie in der Datei `LICENSE`.

## Kontakt

- **Name:** [Ihr Name]
- **E-Mail:** [Ihre E-Mail-Adresse]
- **GitHub:** [Ihr GitHub-Profil]

