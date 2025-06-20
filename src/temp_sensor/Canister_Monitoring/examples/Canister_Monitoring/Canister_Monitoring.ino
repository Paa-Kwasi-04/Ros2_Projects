#include "Canister_Monitoring.h"

// Define which ports have sensors connected
std::vector<uint8_t> sensorPorts = {0, 2, 5};
CanisterMonitoring canisterSensors(sensorPorts);

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for Serial to initialize

    if (canisterSensors.begin()) {
        Serial.println("Sensors initialized successfully.");
    } else {
        Serial.println("Sensor initialization failed!");
        while (1); // Halt if initialization fails
    }
}

void loop() {
    for (uint8_t i = 0; i < canisterSensors.getNumSensors(); ++i) {
        float temp, hum;
        if (canisterSensors.readSensor(i, temp, hum)) {
            Serial.print("Sensor on port ");
            Serial.print(sensorPorts[i]);
            Serial.print(": Temp = ");
            Serial.print(temp, 1);
            Serial.print(" C, Humidity = ");
            Serial.print(hum, 1);
            Serial.println(" %");
        } else {
            Serial.print("Failed to read sensor on port ");
            Serial.println(sensorPorts[i]);
        }
    }
    delay(2000); // Wait 2 seconds before next read
}
