#include <Servo.h>
Servo servo;
int angle = 0;
int angleStart = 90; // 130
int angleEnd = 167;
void setup() {
  servo.attach(8);
  servo.write(0);
  // servo.write(angleStart); 
  // delay(1000);
}
void loop() 
{ 
 // scan from 0 to 180 degrees
                   
  for(angle = angleStart; angle < angleEnd; angle++)  
  {                                  
    servo.write(angle);               
      
    if(angle < 140 && angle > 0) 
    {
    delay(10);  
    }
    else if(angle < angleEnd && angle > angleEnd-3)
    {
      delay(300);
    }
    else {
    delay(100);
    }
  } 
  
  // now scan back from 180 to 0 degrees
  for(angle = angleEnd; angle > angleStart; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
  delay(2000);
}