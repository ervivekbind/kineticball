// Include the AccelStepper library:
#include <AccelStepper.h>

// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver:
#define dirPin 22
#define stepPin 23
#define dirPin 24
#define stepPin 25
#define dirPin 26
#define stepPin 27
#define dirPin 28
#define stepPin 29
#define dirPin 30
#define stepPin 31
#define dirPin 32
#define stepPin 33
#define dirPin 34
#define stepPin 35
#define dirPin 36
#define stepPin 37
#define dirPin 38
#define stepPin 39
#define dirPin 40
#define stepPin 41
#define dirPin 42
#define stepPin 43
#define dirPin 44
#define stepPin 45
#define motorInterfaceType 1

//Check condition of power failur or off instruction
int Check1 = 12;

// Create a new instance of the AccelStepper class:
AccelStepper Motor1 = AccelStepper(motorInterfaceType, 23, 22);
AccelStepper Motor2 = AccelStepper(motorInterfaceType, 25, 24);
AccelStepper Motor3 = AccelStepper(motorInterfaceType, 27, 26);
AccelStepper Motor4 = AccelStepper(motorInterfaceType, 29, 28);
AccelStepper Motor5 = AccelStepper(motorInterfaceType, 31, 30);
AccelStepper Motor6 = AccelStepper(motorInterfaceType, 33, 32);
AccelStepper Motor7 = AccelStepper(motorInterfaceType, 35, 34);
AccelStepper Motor8 = AccelStepper(motorInterfaceType, 37, 36);
AccelStepper Motor9 = AccelStepper(motorInterfaceType, 39, 38);
AccelStepper Motor10 = AccelStepper(motorInterfaceType, 41, 40);
AccelStepper Motor11 = AccelStepper(motorInterfaceType, 43, 42);
AccelStepper Motor12 = AccelStepper(motorInterfaceType, 45, 44);


void setup() {
  // Set the maximum speed in steps per second:

  Motor1.setMaxSpeed(1000);
  Motor2.setMaxSpeed(1000);
  Motor3.setMaxSpeed(1000);
  Motor4.setMaxSpeed(1000);
  Motor5.setMaxSpeed(1000);
  Motor6.setMaxSpeed(1000);
  Motor7.setMaxSpeed(1000);
  Motor8.setMaxSpeed(1000);
  Motor9.setMaxSpeed(1000);
  Motor10.setMaxSpeed(1000);
  Motor11.setMaxSpeed(1000);
  Motor12.setMaxSpeed(1000);
   


   //pin type as input 
   pinMode(Check1, INPUT); 
   Serial.begin(9600);
 
}

void loop() { 
   
    
    
    //Pattern2:StairCase
    
  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }

  for(int repeat = 1; repeat <= 3; repeat++)  
   {

       // Set the current position to 0:
  Motor1.setCurrentPosition(0);
  Motor2.setCurrentPosition(0);
  Motor3.setCurrentPosition(0);
  Motor4.setCurrentPosition(0);
  Motor5.setCurrentPosition(0);
  Motor6.setCurrentPosition(0);
  Motor7.setCurrentPosition(0);
  Motor8.setCurrentPosition(0);
  Motor9.setCurrentPosition(0);
  Motor10.setCurrentPosition(0);
  Motor11.setCurrentPosition(0);
  Motor12.setCurrentPosition(0);

  
    while(Motor1.currentPosition() != 3000 || Motor4.currentPosition() != 3000 || Motor7.currentPosition() != 3000 || Motor10.currentPosition() != 3000 )                                  
    { 
  
    Motor1.setSpeed(1000);
    Motor1.runSpeed();

    Motor4.setSpeed(1000);
    Motor4.runSpeed();
   
    Motor7.setSpeed(1000);
    Motor7.runSpeed();

    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    
    
    if(Motor1.currentPosition() == 2000 || Motor4.currentPosition() == 2000 || Motor7.currentPosition() == 2000 || Motor10.currentPosition() == 2000)
    break;

   }

   delay(1000);

      
  while(Motor2.currentPosition() != 3000 || Motor5.currentPosition() != 3000 || Motor8.currentPosition() != 3000 || Motor11.currentPosition() != 3000 )                                  
   { 
  
    Motor2.setSpeed(1000);
    Motor2.runSpeed();

    Motor5.setSpeed(1000);
    Motor5.runSpeed();
   
    Motor8.setSpeed(1000);
    Motor8.runSpeed();

    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    
    
    if(Motor2.currentPosition() == 2000 || Motor5.currentPosition() == 2000 || Motor8.currentPosition() == 2000 || Motor11.currentPosition() == 2000)
    break;

   }

  delay(1000); 

      
  while(Motor3.currentPosition() != 3000 || Motor6.currentPosition() != 3000 || Motor9.currentPosition() != 3000 || Motor12.currentPosition() != 3000 )                                  
   { 
  
    Motor3.setSpeed(1000);
    Motor3.runSpeed();

    Motor6.setSpeed(1000);
    Motor6.runSpeed();
   
    Motor9.setSpeed(1000);
    Motor9.runSpeed();

    Motor12.setSpeed(1000);
    Motor12.runSpeed();
    
    
    
    if(Motor3.currentPosition() == 2000 || Motor6.currentPosition() == 2000 || Motor9.currentPosition() == 2000 || Motor12.currentPosition() == 2000)
    break;

     }  delay(1000);
  } 
   
   delay(2000);

 for(int repeat = 1; repeat <= 3; repeat++)  
   {

       // Set the current position to 0:
  Motor1.setCurrentPosition(0);
  Motor2.setCurrentPosition(0);
  Motor3.setCurrentPosition(0);
  Motor4.setCurrentPosition(0);
  Motor5.setCurrentPosition(0);
  Motor6.setCurrentPosition(0);
  Motor7.setCurrentPosition(0);
  Motor8.setCurrentPosition(0);
  Motor9.setCurrentPosition(0);
  Motor10.setCurrentPosition(0);
  Motor11.setCurrentPosition(0);
  Motor12.setCurrentPosition(0);



  while(Motor3.currentPosition() != -3000 || Motor6.currentPosition() != -3000 || Motor9.currentPosition() != -3000 || Motor12.currentPosition() != -3000 )                                  
   { 
  
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();

    Motor6.setSpeed(-1000);
    Motor6.runSpeed();
   
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();

    Motor12.setSpeed(-1000);
    Motor12.runSpeed();
    
    
    
    if(Motor3.currentPosition() == -2000 || Motor6.currentPosition() == -2000 || Motor9.currentPosition() == -2000 || Motor12.currentPosition() == -2000)
    break;

   } 
    
 
   delay(1000);

      
  while(Motor2.currentPosition() != -3000 || Motor5.currentPosition() != -3000 || Motor8.currentPosition() != -3000 || Motor11.currentPosition() != -3000 )                                  
   { 
  
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();

    Motor5.setSpeed(-1000);
    Motor5.runSpeed();
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();

    Motor11.setSpeed(-1000);
    Motor11.runSpeed();
    
    
    
    if(Motor2.currentPosition() == -2000 || Motor5.currentPosition() == -2000 || Motor8.currentPosition() == -2000 || Motor11.currentPosition() == -2000)
    break;

   }

  delay(1000); 

   while(Motor1.currentPosition() != -3000 || Motor4.currentPosition() != -3000 || Motor7.currentPosition() != 3000 || Motor10.currentPosition() != -3000 )                                  
   { 
  
    Motor1.setSpeed(-1000);
    Motor1.runSpeed();

    Motor4.setSpeed(-1000);
    Motor4.runSpeed();
   
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();

    Motor10.setSpeed(-1000);
    Motor10.runSpeed();
    
    
    
    if(Motor1.currentPosition() == -2000 || Motor4.currentPosition() == -2000 || Motor7.currentPosition() == -2000 || Motor10.currentPosition() == -2000)
    break;

   }

  delay(1000);
   
   }
    delay(2000);
}
