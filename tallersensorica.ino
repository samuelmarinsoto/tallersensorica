int puerto = A0;

void setup() {
    Serial.begin(9600);  // Start Serial communication
}

void loop() {
    unsigned long timestamp = millis();  // Get time since Arduino started (ms)
    int sensor_output = analogRead(puerto);  // Read KY-018 light sensor (0-1023)

	float tension = sensor_output * (5.0/1023) * 1000; // desdigitalizar?
	float resistance = 10000 * ( tension / ( 5000.0 - tension) ); // divisor de tension en reversa

    // Print in CSV format: timestamp,sensor_output,resistance
    Serial.print(timestamp); // milisegundos
    Serial.print(",");
    Serial.print(sensor_output); // milivolts
    Serial.print(",");
	Serial.println(resistance); // Ohm
	
    delay(100);  // milliseconds
}
