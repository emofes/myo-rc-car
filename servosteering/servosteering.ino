 #include<Servo.h>

 Servo myservo;

 int pos = 90; // Data received from the serial port
 int val;
 
 void setup()
 {
    myservo.attach(9); // attach servo

    Serial.begin(9600); // start serial -- 9600 = bitrate
 }

 void loop()
 {
    while (!Serial.available())
    {
    }
    
    val = Serial.read();

    if(val != 0 && pos < 135) // turnleft
    {
       pos += 45;
       myservo.write(pos);
    }

    if(val == 0 && pos > 45) // turn right
    {
    	pos -= 45;
    	myservo.write(pos); 
    }
    
 }


