void setup()
{
 // configure hardware timer2 to generate a fast PWM on OC2B (Arduino digital pin 3)
 // set pin high on overflow, clear on compare match with OCR2B
 TCCR2A = 0x23;
 TCCR2B = 0x09;  // select timer2 clock as unscaled 16 MHz I/O clock
 OCR2A = 159;  // top/overflow value is 159 => produces a 100 kHz PWM
 pinMode(3, OUTPUT);  // enable the PWM output (you now have a PWM signal on digital pin 3)
}

void loop()
{
 OCR2B = 79;  // set the PWM to 50% duty cycle
 //pinMode(3, INPUT);  // turn off the PWM
 pinMode(3, OUTPUT);  // turn the PWM back on
 
}
