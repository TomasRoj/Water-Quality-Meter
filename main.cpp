int main()
{
    float meas_r;
    float meas_v;
    
    printf("\nAnalogIn example\n");

    while(1) {

        meas_r = analog_value.read(); // Read the analog input value (value from 0.0 to 1.0 = full ADC conversion range)
        meas_v = meas_r * 3300; // Converts value in the 0V-3.3V range
        
        // Display values
        printf("measure = %f = %.0f mV\r\n", meas_r, meas_v);

        // LED is ON is the value is below 1V
        if (meas_v < 1000) {
            led = 1; // LED ON
        } else {
            led = 0; // LED OFF
        }

        wait(1.0); // 1 second
    }
}