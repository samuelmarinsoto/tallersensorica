int puerto = A0;

void setup() {
    Serial.begin(9600);  // Start Serial communication
}

void loop() {
    unsigned long timestamp = millis();  // Get time since Arduino started (ms)
    int sensorValue = analogRead(puerto);  // Read KY-018 light sensor (0-1023)

    // Print in CSV format: timestamp,sensor_value
    Serial.print(timestamp);
    Serial.print(",");
    Serial.println(sensorValue);

    delay(1000);  // Log every second
}
