void setup() {
  Serial.begin(9600);
}

void loop() {
  float meas_r = analogRead(A0); // Read the analog input value (value from 0.0 to 1.0 = full ADC conversion range)
  float meas_v = meas_r * 3300; // Converts value in the 0V-3.3V range
        
  // Display values
  Serial.print("measure = ");
  Serial.print(meas_r);
  Serial.print(" = ");
  Serial.print(meas_v);
  Serial.print("mV");
  Serial.print('\n');

  //some delay for more impressive result :-D
  delay(1000);
}
