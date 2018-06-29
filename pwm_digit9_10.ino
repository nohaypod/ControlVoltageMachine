void setup() {
 // configuración de atmega32p para generar PWM
 // 

 TCCR1A = 0b10110010;  //Timer Counter Control Register 1A |COM1A1| COM1A0| COM1B1| COM1B0 | xxx  | xxx | WGM11 |WGM10
 TCCR1B = 0B00011001;  //Timer Counter Control Register 1B |ICNC1 | ICES1 | xxxx  |  WGM13 |WGM12 |CS12 | CS11 |CS10 
 pinMode(9, OUTPUT);   // enable the PWM output (PWM signal on digital pin 9 arduino|Output Compare pin OC1A)
 pinMode(10, OUTPUT);  // enable the PWM output (PWM signal on digital pin 10 arduino|Output Compare pin OC1B)
}

void loop() {
 ICR1=40;
 OCR1A=20;
 OCR1B=20;
}
