#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

int irPin = 2;
int sensorState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(irPin, INPUT);
    Serial.println("IR Sensor System Initialized");

}

void loop() {
    sensorState = digitalRead(irPin);

}
