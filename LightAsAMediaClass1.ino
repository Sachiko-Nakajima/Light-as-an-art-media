/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int LED_BUILTIN1 = 8;
int LED_BUILTIN2 = 10;
int LED_BUILTIN3 = 12;
int LED_BUILTIN4 = 6;
int LED_BUILTIN5 = 2;
int switch_Button = A0;
int slime;
int beattime = 200;
int lucky = 0;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  pinMode(LED_BUILTIN3, OUTPUT);
  pinMode(LED_BUILTIN4, OUTPUT);
  pinMode(LED_BUILTIN5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  lucky = floor(random(9));
  Serial.println(lucky*100);
  if(lucky < 2){
  slime = analogRead(switch_Button);
  Serial.println(slime);
  if(slime >100){
  digitalWrite(LED_BUILTIN1, HIGH);   
  digitalWrite(LED_BUILTIN2, HIGH);   
  digitalWrite(LED_BUILTIN3, HIGH);   
  digitalWrite(LED_BUILTIN4, HIGH);   
  digitalWrite(LED_BUILTIN5, HIGH);   
  delay(beattime*16);                      
  digitalWrite(LED_BUILTIN1, LOW);   
  digitalWrite(LED_BUILTIN2, LOW);   
  digitalWrite(LED_BUILTIN3, LOW);   
  digitalWrite(LED_BUILTIN4, LOW);   
  digitalWrite(LED_BUILTIN5, LOW);   
   } 
  }
  if(lucky > 1){
  slime = analogRead(switch_Button);
  Serial.println(slime);
  
  if(slime >100){
  digitalWrite(LED_BUILTIN5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  
  digitalWrite(LED_BUILTIN5, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  
  digitalWrite(LED_BUILTIN1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  
  digitalWrite(LED_BUILTIN2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  }  
//the second bar
  slime = analogRead(switch_Button);
  Serial.println(slime);
  if(slime >100){
  digitalWrite(LED_BUILTIN5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  
  digitalWrite(LED_BUILTIN5, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
 
  digitalWrite(LED_BUILTIN2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN3, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(beattime);                       
  digitalWrite(LED_BUILTIN3, LOW);    // turn the LED off by making the voltage LOW
      }
    }
  }
