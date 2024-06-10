/*
    Project name : Distance Sharp IR Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-distance-sharp-ir-sensor
*/

#define SENSOR_PIN A0  // Analog pin connected to the sensor
#define VOLTAGE_REF 5.0 // Voltage reference of the Arduino

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the analog voltage from the sensor
  int sensorValue = analogRead(SENSOR_PIN);

  // Convert the analog value to voltage
  float voltage = sensorValue * (VOLTAGE_REF / 1023.0);

  // Calculate distance using the sensor's characteristic curve
  float distance = 13 * pow(voltage, -1);

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Adjust delay as needed
}
