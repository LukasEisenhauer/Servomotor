# Servo Motor Controller

## Einleitung

Dieses Repository enthält den Code zur Steuerung eines kleinen Servo-Motors. Das Projekt wurde entwickelt, um grundlegende Kenntnisse über Servo-Motoren und ihre Steuerung mit PWM-Signalen (Pulsweitenmodulation) zu vermitteln.
Er hat drei Anschlüsse:

- **Rot:** Stromversorgung (5V)
- **Schwarz/Braun:** Masse (GND)
- **Gelb/Orange:** Signal (PWM-Pin)

## Funktionsweise

Der Servo erhält **PWM-Signale** vom Mikrocontroller, die bestimmen, in welche Position er sich dreht.

- Ein **1,5 ms langer Puls** bewegt den Servo auf **90° (Mittelstellung)**
- Kürzere oder längere Pulse steuern die Drehung in beide Richtungen (0-180)

- Standardwerte:
  - 1 ms → Minimalposition
  - 1,5 ms → Mittelposition
  - 2 ms → Maximalposition

## Benötigte Hardware

- **Microcontroller (Arduino, platform = espressif32, board = nodemcu-32s)**
- **SG90 Servomotor**
- **Stromversorgung/ Verbindungsleitungen**

## Benötigte Software

- **VS-Code (Erweiterung: PlatformIO IDE)**
- **Servo-Bibliothek (ESP32Servo)**

## Anwendungsbereiche

- Robotik
- Automatisierungstechnik
- Bildungsprojekte

## Installation

1. **Repository klonen:**

   ```bash
   git clone https://github.com/LukasEisenhauer/Servomotor.git
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

## Ersteller

- **Name:** Lukas Eisenhauer, Jonas Geißendörfer
