int pot=0;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(6,OUTPUT);
pinMode(LED_BUILTIN, OUTPUT);
pinMode(A0,INPUT);
}

void loop() {
 // code for the potentiometer
  pot=analogRead(A0);
  int led=map(pot,0,1023,0,255);
  analogWrite(6,led);
  // code for the blinking led
   digitalWrite(12, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000);                      // wait for a second
  digitalWrite(12, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(1000); 
// built in blink code
  digitalWrite(LED_BUILTIN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(1000);                  

}
