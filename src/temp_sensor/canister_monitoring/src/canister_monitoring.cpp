/** @file canister_monitoring.cpp
 * @brief Implementation of the canister_monitoring library
 */

#include "canister_monitoring.h"

CanisterMonitoring::CanisterMonitoring(const std::vector<uint8_t>& ports) {
    // Filter out invalid ports (>7) and store valid ones
    for (uint8_t port : ports) {
        if (port <= 7) {
            sensorPorts.push_back(port);
        }
    }
    
    // Ensure at least one valid port
    if (sensorPorts.empty()) {
        sensorPorts.push_back(0);
    }
    
    sensorStatus.resize(sensorPorts.size(), false);
}

bool CanisterMonitoring::begin(uint8_t i2cAddr, TwoWire &wire) {
    this->muxAddr = i2cAddr;
    this->wire = &wire;

    // Initialize the multiplexer
    wire.begin();

    // Initialize each sensor on specified ports
    for (size_t i = 0; i < sensorPorts.size(); ++i) {
        if (!selectPort(sensorPorts[i])) {
            return false; // Failed to select port
        }
        
        if (!aht.begin()) {
            return false; // Sensor initialization failed
        }
        sensorStatus[i] = true; // Mark sensor as initialized
    }
    
    initialized = true;
    return true;
}

bool CanisterMonitoring::readSensor(uint8_t sensor_index, float &temperature, float &humidity) {
    if (sensor_index >= sensorPorts.size() || !initialized || !sensorStatus[sensor_index]) {
        return false; // Invalid sensor index or not initialized
    }

    // Select the appropriate port for the sensor
    if (!selectPort(sensorPorts[sensor_index])) {
        return false; // Failed to select port
    }

    // Read temperature and humidity from the sensor
    sensors_event_t humidityEvent, tempEvent;
    aht.getEvent(&humidityEvent, &tempEvent);

    temperature = tempEvent.temperature;
    humidity = humidityEvent.relative_humidity;

    return true;
}

bool CanisterMonitoring::selectPort(uint8_t port) {
    if (port > 7) {  // Valid ports are 0-7
        return false;
    }

    wire->beginTransmission(muxAddr);
    wire->write(1 << port);
    return (wire->endTransmission() == 0);
}