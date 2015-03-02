 #include<Servo.h>

 Servo myservo;

 int pos = 90; //initialize servo starting position
 int val;
 
 void setup()
 {
    myservo.attach(9); // add servo

    Serial.begin(9600); // connect to serial
 }

 void loop()
 {
    while (!Serial.available()) // do nothing while not conected through serial
    {
    }
    
    val = Serial.read(); // read processing input

    if(val != 0) // accerate/ pull trigger
    {
       pos = 65; 
       myservo.write(pos);
    }

    if(val == 0) // decelerate
    {
    	pos = 90;
    	myservo.write(pos); 
    }
    
 }


