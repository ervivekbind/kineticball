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
//for wave next again
int i = 0;

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

       
    

    
    //Pattern1:All UP & Down----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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

  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }

  //Speed=Distance/time

  while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
  {
    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

  
  }

  delay(1000);

  // Reset the position to 0:
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


  // Speed=Distance/Time
while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000 )
  {
    Motor1.setSpeed(-1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(-1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(-1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(-1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(-1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(-1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(-1000);
    Motor12.runSpeed();
    
    
  }
  delay(2000);

  //Pattern2:Moving Square------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     
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

  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }
     
  while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 )
    {
      
    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(1000);
    Motor5.runSpeed();

    }

  delay(1000);

    // Reset the position to 0:
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

  while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
    {

      Motor1.setSpeed(-1000);
      Motor1.runSpeed();
    
      Motor2.setSpeed(-1000);
      Motor2.runSpeed();
    
      Motor4.setSpeed(-1000);
      Motor4.runSpeed();
   
      Motor5.setSpeed(-1000);
      Motor5.runSpeed();
    
      Motor8.setSpeed(1000);
      Motor8.runSpeed();
    
      Motor9.setSpeed(1000);
      Motor9.runSpeed();
    
      Motor11.setSpeed(1000);
      Motor11.runSpeed();
    
      Motor12.setSpeed(1000);
      Motor12.runSpeed();
      
    }

  delay(1000);

    // Reset the position to 0:
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

  while(Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 )
    {
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();
    
    Motor11.setSpeed(-1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(-1000);
    Motor12.runSpeed();

    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor5.setSpeed(1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(1000);
    Motor6.runSpeed();

    }

  delay(1000);

    // Reset the position to 0:
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

  while(Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 )
  {
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();

    Motor5.setSpeed(-1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(-1000);
    Motor6.runSpeed();

    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(1000);
    Motor8.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
   }

  delay(1000);

    // Reset the position to 0:
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

  while(Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 )
  {
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();

    
    Motor10.setSpeed(-1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(-1000);
    Motor11.runSpeed(); 

  }

  delay(2000); 

  //Pattern2:Moving Square Fast Not Done Yet!!

  //Pattern3:StairCase----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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


                                                                                                                             
                                                                                                                                 

  //Pattern5:Pyramid-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     
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

  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }

  while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
  {
    
    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

    
    if(Motor1.currentPosition() == 3000 || Motor2.currentPosition() == 3000 || Motor3.currentPosition() == 3000 || Motor4.currentPosition() == 3000 || Motor5.currentPosition() == 3000 || Motor6.currentPosition() == 3000 || Motor7.currentPosition() == 3000 || Motor8.currentPosition() == 3000 || Motor9.currentPosition() == 3000 || Motor10.currentPosition() == 3000 || Motor11.currentPosition() == 3000 || Motor12.currentPosition() == 3000 )                                  
    break;
  } 

  delay(1000);

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

  while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
  {
    
    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
      
    Motor6.setSpeed(1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor9.setSpeed(1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

    
    if(Motor1.currentPosition() == 3000 || Motor2.currentPosition() == 3000 || Motor3.currentPosition() == 3000 || Motor4.currentPosition() == 3000 || Motor6.currentPosition() == 3000 || Motor7.currentPosition() == 3000 ||  Motor9.currentPosition() == 3000 || Motor10.currentPosition() == 3000 || Motor11.currentPosition() == 3000 || Motor12.currentPosition() == 3000 )                                  
    break;
    
  }

  delay(500);

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

  
  while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000 )
  {
    
    Motor1.setSpeed(-1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(-1000);
    Motor4.runSpeed();
      
    Motor6.setSpeed(-1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();
   
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(-1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(-1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(-1000);
    Motor12.runSpeed();

    
    if(Motor1.currentPosition() == -3000 || Motor2.currentPosition() == -3000 || Motor3.currentPosition() == -3000 || Motor4.currentPosition() == -3000 || Motor6.currentPosition() == -3000 || Motor7.currentPosition() == -3000 ||  Motor9.currentPosition() == -3000 || Motor10.currentPosition() == -3000 || Motor11.currentPosition() == -3000 || Motor12.currentPosition() == -3000 )                                  
    break;
    
  }
   delay(500);
 
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


 while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
  {

    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(-1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

    
    if(Motor1.currentPosition() == 3000 || Motor2.currentPosition() == 3000 || Motor3.currentPosition() == 3000 || Motor4.currentPosition() == 3000 || Motor5.currentPosition() == -3000 || Motor6.currentPosition() == 3000 || Motor7.currentPosition() == 3000 || Motor8.currentPosition() == -3000 || Motor9.currentPosition() == 3000 || Motor10.currentPosition() == 3000 || Motor11.currentPosition() == 3000 || Motor12.currentPosition() == 3000 )                                  
    break;
  } 

 delay(500);
 
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


 while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000 )
  {

    Motor1.setSpeed(-1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(-1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(-1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(-1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(-1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(-1000);
    Motor12.runSpeed();
    
  }

 delay(500);

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


 while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
  {

    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(-1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

    
    if(Motor1.currentPosition() == 3000 || Motor2.currentPosition() == 3000 || Motor3.currentPosition() == 3000 || Motor4.currentPosition() == 3000 || Motor5.currentPosition() == -3000 || Motor6.currentPosition() == 3000 || Motor7.currentPosition() == 3000 || Motor8.currentPosition() == -3000 || Motor9.currentPosition() == 3000 || Motor10.currentPosition() == 3000 || Motor11.currentPosition() == 3000 || Motor12.currentPosition() == 3000 )                                  
    break;
  } 

delay(500);
 // Reset the position to 0:
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


  // Speed=Distance/Time
while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000 )
  {
    Motor1.setSpeed(-1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(-1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(-1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(-1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(-1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(-1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(-1000);
    Motor12.runSpeed();

    if(Motor1.currentPosition() == -3000 || Motor2.currentPosition() == -3000 || Motor3.currentPosition() == -3000 || Motor4.currentPosition() == -3000 || Motor5.currentPosition() == -3000 || Motor6.currentPosition() == -3000 || Motor7.currentPosition() == -3000 || Motor8.currentPosition() == -3000 || Motor9.currentPosition() == -3000 || Motor10.currentPosition() == -3000 || Motor11.currentPosition() == -3000 || Motor12.currentPosition() == -3000 )                                  
    break;
    
  }
  delay(2000);   


  //Pattern5A:Snake------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     
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

  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }
//Program5:SnakeMovement
//Speed=Distance/time
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
  while(Motor1.currentPosition() != 6000 )
    {
      Motor1.setSpeed(1000);
      Motor1.runSpeed();
      if(Motor1.currentPosition() == 1000)
       { Motor1.setCurrentPosition(0);     
         while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000)
         {
          Motor1.setSpeed(1000);
          Motor1.runSpeed(); 
          Motor2.setSpeed(1000);
          Motor2.runSpeed();
          if(Motor2.currentPosition() == 1000)
          { Motor1.setCurrentPosition(0);
            Motor2.setCurrentPosition(0);
           while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000)
          { 
            Motor1.setSpeed(1000);
            Motor1.runSpeed(); 
            Motor2.setSpeed(1000);
            Motor2.runSpeed();
            Motor3.setSpeed(1000);
            Motor3.runSpeed();
            if(Motor3.currentPosition() == 1000)
             { Motor1.setCurrentPosition(0);
               Motor2.setCurrentPosition(0);
               Motor3.setCurrentPosition(0);
              while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor6.currentPosition() != 6000)
              { 
               Motor1.setSpeed(1000);
               Motor1.runSpeed(); 
               Motor2.setSpeed(1000);
               Motor2.runSpeed();
               Motor3.setSpeed(1000);
               Motor3.runSpeed();
               Motor6.setSpeed(1000);
               Motor6.runSpeed();
               if(Motor6.currentPosition() == 1000)
               {
                Motor1.setCurrentPosition(0);
                Motor2.setCurrentPosition(0);
                Motor3.setCurrentPosition(0);
                Motor6.setCurrentPosition(0);
               
                 while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor5.currentPosition() != 6000)
                 {
                   Motor1.setSpeed(1000);
                   Motor1.runSpeed(); 
                   Motor2.setSpeed(1000);
                   Motor2.runSpeed();
                   Motor3.setSpeed(1000);
                   Motor3.runSpeed();
                   Motor6.setSpeed(1000);
                   Motor6.runSpeed();
                   Motor5.setSpeed(1000);
                   Motor5.runSpeed();
                   if(Motor5.currentPosition() == 1000)
                    {
                      Motor1.setCurrentPosition(0);
                      Motor2.setCurrentPosition(0);
                      Motor3.setCurrentPosition(0);
                      Motor6.setCurrentPosition(0);
                      Motor5.setCurrentPosition(0);
                    
                      while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor4.currentPosition() != 6000)
                      {
                       Motor1.setSpeed(1000);
                       Motor1.runSpeed(); 
                       Motor2.setSpeed(1000);
                       Motor2.runSpeed();
                       Motor3.setSpeed(1000);
                       Motor3.runSpeed();
                       
                       Motor5.setSpeed(1000);
                       Motor5.runSpeed();
                       Motor6.setSpeed(1000);
                       Motor6.runSpeed();
                       Motor4.setSpeed(1000);
                       Motor4.runSpeed();
                       if(Motor4.currentPosition() == 1000)
                        { Motor1.setCurrentPosition(0);
                          Motor2.setCurrentPosition(0);
                          Motor3.setCurrentPosition(0);
                          Motor4.setCurrentPosition(0);
                          Motor5.setCurrentPosition(0);
                          Motor6.setCurrentPosition(0);
                          while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000)
                          {
                            Motor1.setSpeed(-1000);
                            Motor1.runSpeed(); 
                            Motor2.setSpeed(1000);
                            Motor2.runSpeed();
                            Motor3.setSpeed(1000);
                            Motor3.runSpeed();
                            Motor4.setSpeed(1000);
                            Motor4.runSpeed();
                            Motor5.setSpeed(1000);
                            Motor5.runSpeed();
                            Motor6.setSpeed(1000);
                            Motor6.runSpeed();
                            Motor7.setSpeed(1000);
                            Motor7.runSpeed();
                            if(Motor7.currentPosition() == 1000)
                            { Motor1.setCurrentPosition(0);
                              Motor2.setCurrentPosition(0);
                              Motor3.setCurrentPosition(0);
                              Motor4.setCurrentPosition(0);
                              Motor5.setCurrentPosition(0);
                              Motor6.setCurrentPosition(0);
                              Motor7.setCurrentPosition(0);
                             while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000)
                              {
                               Motor1.setSpeed(-1000);
                               Motor1.runSpeed(); 
                               Motor2.setSpeed(-1000);
                               Motor2.runSpeed();
                               Motor3.setSpeed(1000);
                               Motor3.runSpeed();
                               Motor4.setSpeed(1000);
                               Motor4.runSpeed();
                               Motor5.setSpeed(1000);
                               Motor5.runSpeed();
                               Motor6.setSpeed(1000);
                               Motor6.runSpeed();
                               Motor7.setSpeed(1000);
                               Motor7.runSpeed();
                               Motor8.setSpeed(1000);
                               Motor8.runSpeed();
                               if(Motor8.currentPosition() == 1000)
                                { Motor1.setCurrentPosition(0);
                                  Motor2.setCurrentPosition(0);
                                  Motor3.setCurrentPosition(0);
                                  Motor4.setCurrentPosition(0);
                                  Motor5.setCurrentPosition(0);
                                  Motor6.setCurrentPosition(0);
                                  Motor7.setCurrentPosition(0);
                                  Motor8.setCurrentPosition(0);
                                  while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000)
                                   {
                                     Motor1.setSpeed(-1000);
                                     Motor1.runSpeed(); 
                                     Motor2.setSpeed(-1000);
                                     Motor2.runSpeed();
                                     Motor3.setSpeed(-1000);
                                     Motor3.runSpeed();
                                     Motor4.setSpeed(1000);
                                     Motor4.runSpeed();
                                     Motor5.setSpeed(1000);
                                     Motor5.runSpeed();
                                     Motor6.setSpeed(1000);
                                     Motor6.runSpeed();
                                     Motor7.setSpeed(1000);
                                     Motor7.runSpeed();
                                     Motor8.setSpeed(1000);
                                     Motor8.runSpeed();
                                     Motor9.setSpeed(1000);
                                     Motor9.runSpeed();
                                     if(Motor9.currentPosition() == 1000)
                                      { Motor1.setCurrentPosition(0);
                                        Motor2.setCurrentPosition(0);
                                        Motor3.setCurrentPosition(0);
                                        Motor4.setCurrentPosition(0);
                                        Motor5.setCurrentPosition(0);
                                        Motor6.setCurrentPosition(0);
                                        Motor7.setCurrentPosition(0);
                                        Motor8.setCurrentPosition(0);
                                        Motor9.setCurrentPosition(0);
                                        while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor5.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                         {
                                          Motor1.setSpeed(-1000);
                                          Motor1.runSpeed(); 
                                          Motor2.setSpeed(-1000);
                                          Motor2.runSpeed();
                                          Motor3.setSpeed(-1000);
                                          Motor3.runSpeed();
                                          Motor6.setSpeed(-1000);
                                          Motor6.runSpeed();
                                          Motor5.setSpeed(1000);
                                          Motor5.runSpeed();
                                          Motor4.setSpeed(1000);
                                          Motor4.runSpeed();
                                          Motor7.setSpeed(1000);
                                          Motor7.runSpeed();
                                          Motor8.setSpeed(1000);
                                          Motor8.runSpeed();
                                          Motor9.setSpeed(1000);
                                          Motor9.runSpeed();
                                          Motor12.setSpeed(1000);
                                          Motor12.runSpeed();
                                          if(Motor12.currentPosition() == 1000)
                                            { Motor1.setCurrentPosition(0);
                                              Motor2.setCurrentPosition(0);
                                              Motor3.setCurrentPosition(0);
                                              Motor4.setCurrentPosition(0);
                                              Motor5.setCurrentPosition(0);
                                              Motor6.setCurrentPosition(0);
                                              Motor7.setCurrentPosition(0);
                                              Motor8.setCurrentPosition(0);
                                              Motor9.setCurrentPosition(0);
                                              Motor12.setCurrentPosition(0);
                                              while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor4.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor12.currentPosition() != 6000 || Motor11.currentPosition() != 6000)
                                                {
                                                   Motor1.setSpeed(-1000);
                                                   Motor1.runSpeed(); 
                                                   Motor2.setSpeed(-1000);
                                                   Motor2.runSpeed();
                                                   Motor3.setSpeed(-1000);
                                                   Motor3.runSpeed();
                                                   Motor6.setSpeed(-1000);
                                                   Motor6.runSpeed();
                                                   Motor5.setSpeed(-1000);
                                                   Motor5.runSpeed();
                                                   Motor4.setSpeed(1000);
                                                   Motor4.runSpeed();
                                                   Motor7.setSpeed(1000);
                                                   Motor7.runSpeed();
                                                   Motor8.setSpeed(1000);
                                                   Motor8.runSpeed();
                                                   Motor9.setSpeed(1000);
                                                   Motor9.runSpeed();
                                                   Motor12.setSpeed(1000);
                                                   Motor12.runSpeed();
                                                   Motor11.setSpeed(1000);
                                                   Motor11.runSpeed();
                                                   if(Motor11.currentPosition() == 1000)
                                                   { Motor1.setCurrentPosition(0);
                                                     Motor2.setCurrentPosition(0);
                                                     Motor3.setCurrentPosition(0);
                                                     Motor4.setCurrentPosition(0);
                                                     Motor5.setCurrentPosition(0);
                                                     Motor6.setCurrentPosition(0);
                                                     Motor7.setCurrentPosition(0);
                                                     Motor8.setCurrentPosition(0);
                                                     Motor9.setCurrentPosition(0);
                                                     Motor12.setCurrentPosition(0);
                                                     Motor11.setCurrentPosition(0);
                                                     while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                       {
                                                         Motor1.setSpeed(-1000);
                                                         Motor1.runSpeed(); 
                                                         Motor2.setSpeed(-1000);
                                                         Motor2.runSpeed();
                                                         Motor3.setSpeed(-1000);
                                                         Motor3.runSpeed();
                                                         Motor4.setSpeed(-1000);
                                                         Motor4.runSpeed();
                                                         Motor5.setSpeed(-1000);
                                                         Motor5.runSpeed();
                                                         Motor6.setSpeed(-1000);
                                                         Motor6.runSpeed();
                                                         Motor7.setSpeed(1000);
                                                         Motor7.runSpeed();
                                                         Motor8.setSpeed(1000);
                                                         Motor8.runSpeed();
                                                         Motor9.setSpeed(1000);
                                                         Motor9.runSpeed();
                                                         Motor10.setSpeed(1000);
                                                         Motor10.runSpeed();
                                                         Motor11.setSpeed(1000);
                                                         Motor11.runSpeed();
                                                         Motor12.setSpeed(1000);
                                                         Motor12.runSpeed();
                                                         if(Motor12.currentPosition() == 1000)
                                                          { Motor1.setCurrentPosition(0);
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
                                                            while(Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                            {
                                                            
                                                              Motor2.setSpeed(-1000);
                                                              Motor2.runSpeed();
                                                              Motor3.setSpeed(-1000);
                                                              Motor3.runSpeed();
                                                              Motor4.setSpeed(-1000);
                                                              Motor4.runSpeed();
                                                              Motor5.setSpeed(-1000);
                                                              Motor5.runSpeed();
                                                              Motor6.setSpeed(-1000);
                                                              Motor6.runSpeed();
                                                              Motor7.setSpeed(-1000);
                                                              Motor7.runSpeed();
                                                              Motor8.setSpeed(1000);
                                                              Motor8.runSpeed();
                                                              Motor9.setSpeed(1000);
                                                              Motor9.runSpeed();
                                                              Motor10.setSpeed(1000);
                                                              Motor10.runSpeed();
                                                              Motor11.setSpeed(1000);
                                                              Motor11.runSpeed();
                                                              Motor12.setSpeed(1000);
                                                              Motor12.runSpeed();
                                                              if(Motor12.currentPosition() == 1000)
                                                              { Motor1.setCurrentPosition(0);
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
                                                                while(Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                                 {
                                                                   Motor3.setSpeed(-1000);
                                                                   Motor3.runSpeed();
                                                                   Motor4.setSpeed(-1000);
                                                                   Motor4.runSpeed();
                                                                   Motor5.setSpeed(-1000);
                                                                   Motor5.runSpeed();
                                                                   Motor6.setSpeed(-1000);
                                                                   Motor6.runSpeed();
                                                                   Motor7.setSpeed(-1000);
                                                                   Motor7.runSpeed();
                                                                   Motor8.setSpeed(-1000);
                                                                   Motor8.runSpeed();
                                                                   Motor9.setSpeed(1000);
                                                                   Motor9.runSpeed();
                                                                   Motor10.setSpeed(1000);
                                                                   Motor10.runSpeed();
                                                                   Motor11.setSpeed(1000);
                                                                   Motor11.runSpeed();
                                                                   Motor12.setSpeed(1000);
                                                                   Motor12.runSpeed();
                                                                   if(Motor12.currentPosition() == 1000)
                                                                    { Motor1.setCurrentPosition(0);
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
                                                                      while(Motor6.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                                       {
                                                                         Motor6.setSpeed(-1000);
                                                                         Motor6.runSpeed();
                                                                         Motor5.setSpeed(-1000);
                                                                         Motor5.runSpeed();
                                                                         Motor4.setSpeed(-1000);
                                                                         Motor4.runSpeed();
                                                                         Motor7.setSpeed(-1000);
                                                                         Motor7.runSpeed();
                                                                         Motor8.setSpeed(-1000);
                                                                         Motor8.runSpeed();
                                                                         Motor9.setSpeed(-1000);
                                                                         Motor9.runSpeed();
                                                                         Motor10.setSpeed(1000);
                                                                         Motor10.runSpeed();
                                                                         Motor11.setSpeed(1000);
                                                                         Motor11.runSpeed();
                                                                         Motor12.setSpeed(1000);
                                                                         Motor12.runSpeed();
                                                                         if(Motor12.currentPosition() == 1000)
                                                                         { Motor1.setCurrentPosition(0);
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
                                                                           while(Motor5.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != -6000)
                                                                           {
                                                                             Motor5.setSpeed(-1000);
                                                                             Motor5.runSpeed();
                                                                             Motor4.setSpeed(-1000);
                                                                             Motor4.runSpeed();
                                                                             Motor7.setSpeed(-1000);
                                                                             Motor7.runSpeed();
                                                                             Motor8.setSpeed(-1000);
                                                                             Motor8.runSpeed();
                                                                             Motor9.setSpeed(-1000);
                                                                             Motor9.runSpeed();
                                                                             Motor12.setSpeed(-1000);
                                                                             Motor12.runSpeed();
                                                                             Motor11.setSpeed(1000);
                                                                             Motor11.runSpeed();
                                                                             Motor10.setSpeed(1000);
                                                                             Motor10.runSpeed();
                                                                             if(Motor10.currentPosition() == 1000)
                                                                             { Motor1.setCurrentPosition(0);
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
                                                                               while(Motor4.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != 6000)
                                                                               {
                                                                                 Motor4.setSpeed(-1000);
                                                                                 Motor4.runSpeed();
                                                                                 Motor7.setSpeed(-1000);
                                                                                 Motor7.runSpeed();
                                                                                 Motor8.setSpeed(-1000);
                                                                                 Motor8.runSpeed();
                                                                                 Motor9.setSpeed(-1000);
                                                                                 Motor9.runSpeed();
                                                                                 Motor12.setSpeed(-1000);
                                                                                 Motor12.runSpeed();
                                                                                 Motor11.setSpeed(-1000);
                                                                                 Motor11.runSpeed();
                                                                                 Motor10.setSpeed(1000);
                                                                                 Motor10.runSpeed();
                                                                                 if(Motor10.currentPosition() == 1000)
                                                                                  { Motor1.setCurrentPosition(0);
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
                                                                                    while(Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                     {
                                                                                        Motor7.setSpeed(-1000);
                                                                                        Motor7.runSpeed();
                                                                                        Motor8.setSpeed(-1000);
                                                                                        Motor8.runSpeed();
                                                                                        Motor9.setSpeed(-1000);
                                                                                        Motor9.runSpeed();
                                                                                        Motor10.setSpeed(-1000);
                                                                                        Motor10.runSpeed();
                                                                                        Motor11.setSpeed(-1000);
                                                                                        Motor11.runSpeed();
                                                                                        Motor12.setSpeed(-1000);
                                                                                        Motor12.runSpeed();
                                                                                        if(Motor12.currentPosition() == -1000)
                                                                                         { Motor1.setCurrentPosition(0);
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
                                                                                           while(Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                             {
                                                                                                Motor8.setSpeed(-1000);
                                                                                                Motor8.runSpeed();
                                                                                                Motor9.setSpeed(-1000);
                                                                                                Motor9.runSpeed();
                                                                                                Motor10.setSpeed(-1000);
                                                                                                Motor10.runSpeed();
                                                                                                Motor11.setSpeed(-1000);
                                                                                                Motor11.runSpeed();
                                                                                                Motor12.setSpeed(-1000);
                                                                                                Motor12.runSpeed();
                                                                                                if(Motor12.currentPosition() == -1000)
                                                                                                   { Motor1.setCurrentPosition(0);
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
                                                                                                     while(Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                                       {
                                                                                                          Motor9.setSpeed(-1000);
                                                                                                          Motor9.runSpeed();
                                                                                                          Motor10.setSpeed(-1000);
                                                                                                          Motor10.runSpeed();
                                                                                                          Motor11.setSpeed(-1000);
                                                                                                          Motor11.runSpeed();
                                                                                                          Motor12.setSpeed(-1000);
                                                                                                          Motor12.runSpeed();
                                                                                                          if(Motor12.currentPosition() == -1000)
                                                                                                           { Motor1.setCurrentPosition(0);
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
                                                                                                             while(Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                                               { 
                                                                                                                 Motor10.setSpeed(-1000);
                                                                                                                 Motor10.runSpeed();
                                                                                                                 Motor11.setSpeed(-1000);
                                                                                                                 Motor11.runSpeed();
                                                                                                                 Motor12.setSpeed(-1000);
                                                                                                                 Motor12.runSpeed();
                                                                                                                 if(Motor12.currentPosition() == -1000)
                                                                                                                   { Motor1.setCurrentPosition(0);
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
                                                                                                                     while(Motor11.currentPosition() != -6000 || Motor10.currentPosition() != -6000)
                                                                                                                       { 
                                                                                                                         Motor11.setSpeed(-1000);
                                                                                                                         Motor11.runSpeed();
                                                                                                                         Motor10.setSpeed(-1000);
                                                                                                                         Motor10.runSpeed();
                                                                                                                         if(Motor10.currentPosition() == -1000)
                                                                                                                           { 
                                                                                                                             Motor11.setCurrentPosition(0);
                                                                                                                             Motor10.setCurrentPosition(0);
                                                                                                                             while(Motor10.currentPosition() != -1000)
                                                                                                                               { 
                                                                                                                                 Motor10.setSpeed(-1000);
                                                                                                                                 Motor10.runSpeed();
                                                                                                                                 if(Motor10.currentPosition() == -1000)
                                                                                                                                 { Motor10.setCurrentPosition(0);
                                                                                                                                   goto Again;
                                                                                                                                 }
                                                                                                                             }
                                                                                                                                 
                                                                                                                                 
                                                                                                                                 
                                                                                                                           }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
 Again:
 delay(2000);

 while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }
 //Program5B:Semi-Snake------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 //Speed=Distance/time
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
  while(Motor1.currentPosition() != 6000 )
    {
      Motor1.setSpeed(1000);
      Motor1.runSpeed();
      if(Motor1.currentPosition() == 1000)
       { Motor1.setCurrentPosition(0);     
         while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000)
         {
          Motor1.setSpeed(1000);
          Motor1.runSpeed(); 
          Motor2.setSpeed(1000);
          Motor2.runSpeed();
          if(Motor2.currentPosition() == 1000)
          { Motor1.setCurrentPosition(0);
            Motor2.setCurrentPosition(0);
           while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000)
          { 
            Motor1.setSpeed(1000);
            Motor1.runSpeed(); 
            Motor2.setSpeed(1000);
            Motor2.runSpeed();
            Motor3.setSpeed(1000);
            Motor3.runSpeed();
            if(Motor3.currentPosition() == 1000)
             { Motor1.setCurrentPosition(0);
               Motor2.setCurrentPosition(0);
               Motor3.setCurrentPosition(0);
              while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000)
              { 
               Motor1.setSpeed(1000);
               Motor1.runSpeed(); 
               Motor2.setSpeed(1000);
               Motor2.runSpeed();
               Motor3.setSpeed(1000);
               Motor3.runSpeed();
               Motor4.setSpeed(1000);
               Motor4.runSpeed();
               if(Motor4.currentPosition() == 1000)
               {
                Motor1.setCurrentPosition(0);
                Motor2.setCurrentPosition(0);
                Motor3.setCurrentPosition(0);
                Motor4.setCurrentPosition(0);
               
                 while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000)
                 {
                   Motor1.setSpeed(1000);
                   Motor1.runSpeed(); 
                   Motor2.setSpeed(1000);
                   Motor2.runSpeed();
                   Motor3.setSpeed(1000);
                   Motor3.runSpeed();
                   Motor4.setSpeed(1000);
                   Motor4.runSpeed();
                   Motor5.setSpeed(1000);
                   Motor5.runSpeed();
                   if(Motor5.currentPosition() == 1000)
                    {
                      Motor1.setCurrentPosition(0);
                      Motor2.setCurrentPosition(0);
                      Motor3.setCurrentPosition(0);
                      Motor4.setCurrentPosition(0);
                      Motor5.setCurrentPosition(0);
                    
                      while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000)
                      {
                       Motor1.setSpeed(1000);
                       Motor1.runSpeed(); 
                       Motor2.setSpeed(1000);
                       Motor2.runSpeed();
                       Motor3.setSpeed(1000);
                       Motor3.runSpeed();
                       Motor4.setSpeed(1000);
                       Motor4.runSpeed();
                       Motor5.setSpeed(1000);
                       Motor5.runSpeed();
                       Motor6.setSpeed(1000);
                       Motor6.runSpeed();
                       if(Motor6.currentPosition() == 1000)
                        { Motor1.setCurrentPosition(0);
                          Motor2.setCurrentPosition(0);
                          Motor3.setCurrentPosition(0);
                          Motor4.setCurrentPosition(0);
                          Motor5.setCurrentPosition(0);
                          Motor6.setCurrentPosition(0);
                          while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000)
                          {
                            Motor1.setSpeed(-1000);
                            Motor1.runSpeed(); 
                            Motor2.setSpeed(1000);
                            Motor2.runSpeed();
                            Motor3.setSpeed(1000);
                            Motor3.runSpeed();
                            Motor4.setSpeed(1000);
                            Motor4.runSpeed();
                            Motor5.setSpeed(1000);
                            Motor5.runSpeed();
                            Motor6.setSpeed(1000);
                            Motor6.runSpeed();
                            Motor7.setSpeed(1000);
                            Motor7.runSpeed();
                            if(Motor7.currentPosition() == 1000)
                            { Motor1.setCurrentPosition(0);
                              Motor2.setCurrentPosition(0);
                              Motor3.setCurrentPosition(0);
                              Motor4.setCurrentPosition(0);
                              Motor5.setCurrentPosition(0);
                              Motor6.setCurrentPosition(0);
                              Motor7.setCurrentPosition(0);
                             while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000)
                              {
                               Motor1.setSpeed(-1000);
                               Motor1.runSpeed(); 
                               Motor2.setSpeed(-1000);
                               Motor2.runSpeed();
                               Motor3.setSpeed(1000);
                               Motor3.runSpeed();
                               Motor4.setSpeed(1000);
                               Motor4.runSpeed();
                               Motor5.setSpeed(1000);
                               Motor5.runSpeed();
                               Motor6.setSpeed(1000);
                               Motor6.runSpeed();
                               Motor7.setSpeed(1000);
                               Motor7.runSpeed();
                               Motor8.setSpeed(1000);
                               Motor8.runSpeed();
                               if(Motor8.currentPosition() == 1000)
                                { Motor1.setCurrentPosition(0);
                                  Motor2.setCurrentPosition(0);
                                  Motor3.setCurrentPosition(0);
                                  Motor4.setCurrentPosition(0);
                                  Motor5.setCurrentPosition(0);
                                  Motor6.setCurrentPosition(0);
                                  Motor7.setCurrentPosition(0);
                                  Motor8.setCurrentPosition(0);
                                  while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000)
                                   {
                                     Motor1.setSpeed(-1000);
                                     Motor1.runSpeed(); 
                                     Motor2.setSpeed(-1000);
                                     Motor2.runSpeed();
                                     Motor3.setSpeed(-1000);
                                     Motor3.runSpeed();
                                     Motor4.setSpeed(1000);
                                     Motor4.runSpeed();
                                     Motor5.setSpeed(1000);
                                     Motor5.runSpeed();
                                     Motor6.setSpeed(1000);
                                     Motor6.runSpeed();
                                     Motor7.setSpeed(1000);
                                     Motor7.runSpeed();
                                     Motor8.setSpeed(1000);
                                     Motor8.runSpeed();
                                     Motor9.setSpeed(1000);
                                     Motor9.runSpeed();
                                     if(Motor9.currentPosition() == 1000)
                                      { Motor1.setCurrentPosition(0);
                                        Motor2.setCurrentPosition(0);
                                        Motor3.setCurrentPosition(0);
                                        Motor4.setCurrentPosition(0);
                                        Motor5.setCurrentPosition(0);
                                        Motor6.setCurrentPosition(0);
                                        Motor7.setCurrentPosition(0);
                                        Motor8.setCurrentPosition(0);
                                        Motor9.setCurrentPosition(0);
                                        while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000)
                                         {
                                          Motor1.setSpeed(-1000);
                                          Motor1.runSpeed(); 
                                          Motor2.setSpeed(-1000);
                                          Motor2.runSpeed();
                                          Motor3.setSpeed(-1000);
                                          Motor3.runSpeed();
                                          Motor4.setSpeed(-1000);
                                          Motor4.runSpeed();
                                          Motor5.setSpeed(1000);
                                          Motor5.runSpeed();
                                          Motor6.setSpeed(1000);
                                          Motor6.runSpeed();
                                          Motor7.setSpeed(1000);
                                          Motor7.runSpeed();
                                          Motor8.setSpeed(1000);
                                          Motor8.runSpeed();
                                          Motor9.setSpeed(1000);
                                          Motor9.runSpeed();
                                          Motor10.setSpeed(1000);
                                          Motor10.runSpeed();
                                          if(Motor10.currentPosition() == 1000)
                                            { Motor1.setCurrentPosition(0);
                                              Motor2.setCurrentPosition(0);
                                              Motor3.setCurrentPosition(0);
                                              Motor4.setCurrentPosition(0);
                                              Motor5.setCurrentPosition(0);
                                              Motor6.setCurrentPosition(0);
                                              Motor7.setCurrentPosition(0);
                                              Motor8.setCurrentPosition(0);
                                              Motor9.setCurrentPosition(0);
                                              Motor10.setCurrentPosition(0);
                                              while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000)
                                                {
                                                   Motor1.setSpeed(-1000);
                                                   Motor1.runSpeed(); 
                                                   Motor2.setSpeed(-1000);
                                                   Motor2.runSpeed();
                                                   Motor3.setSpeed(-1000);
                                                   Motor3.runSpeed();
                                                   Motor4.setSpeed(-1000);
                                                   Motor4.runSpeed();
                                                   Motor5.setSpeed(-1000);
                                                   Motor5.runSpeed();
                                                   Motor6.setSpeed(1000);
                                                   Motor6.runSpeed();
                                                   Motor7.setSpeed(1000);
                                                   Motor7.runSpeed();
                                                   Motor8.setSpeed(1000);
                                                   Motor8.runSpeed();
                                                   Motor9.setSpeed(1000);
                                                   Motor9.runSpeed();
                                                   Motor10.setSpeed(1000);
                                                   Motor10.runSpeed();
                                                   Motor11.setSpeed(1000);
                                                   Motor11.runSpeed();
                                                   if(Motor11.currentPosition() == 1000)
                                                   { Motor1.setCurrentPosition(0);
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
                                                     while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                       {
                                                         Motor1.setSpeed(-1000);
                                                         Motor1.runSpeed(); 
                                                         Motor2.setSpeed(-1000);
                                                         Motor2.runSpeed();
                                                         Motor3.setSpeed(-1000);
                                                         Motor3.runSpeed();
                                                         Motor4.setSpeed(-1000);
                                                         Motor4.runSpeed();
                                                         Motor5.setSpeed(-1000);
                                                         Motor5.runSpeed();
                                                         Motor6.setSpeed(-1000);
                                                         Motor6.runSpeed();
                                                         Motor7.setSpeed(1000);
                                                         Motor7.runSpeed();
                                                         Motor8.setSpeed(1000);
                                                         Motor8.runSpeed();
                                                         Motor9.setSpeed(1000);
                                                         Motor9.runSpeed();
                                                         Motor10.setSpeed(1000);
                                                         Motor10.runSpeed();
                                                         Motor11.setSpeed(1000);
                                                         Motor11.runSpeed();
                                                         Motor12.setSpeed(1000);
                                                         Motor12.runSpeed();
                                                         if(Motor12.currentPosition() == 1000)
                                                          { Motor1.setCurrentPosition(0);
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
                                                            while(Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                            {
                                                            
                                                              Motor2.setSpeed(-1000);
                                                              Motor2.runSpeed();
                                                              Motor3.setSpeed(-1000);
                                                              Motor3.runSpeed();
                                                              Motor4.setSpeed(-1000);
                                                              Motor4.runSpeed();
                                                              Motor5.setSpeed(-1000);
                                                              Motor5.runSpeed();
                                                              Motor6.setSpeed(-1000);
                                                              Motor6.runSpeed();
                                                              Motor7.setSpeed(-1000);
                                                              Motor7.runSpeed();
                                                              Motor8.setSpeed(1000);
                                                              Motor8.runSpeed();
                                                              Motor9.setSpeed(1000);
                                                              Motor9.runSpeed();
                                                              Motor10.setSpeed(1000);
                                                              Motor10.runSpeed();
                                                              Motor11.setSpeed(1000);
                                                              Motor11.runSpeed();
                                                              Motor12.setSpeed(1000);
                                                              Motor12.runSpeed();
                                                              if(Motor12.currentPosition() == 1000)
                                                              { Motor1.setCurrentPosition(0);
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
                                                                while(Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                                 {
                                                                   Motor3.setSpeed(-1000);
                                                                   Motor3.runSpeed();
                                                                   Motor4.setSpeed(-1000);
                                                                   Motor4.runSpeed();
                                                                   Motor5.setSpeed(-1000);
                                                                   Motor5.runSpeed();
                                                                   Motor6.setSpeed(-1000);
                                                                   Motor6.runSpeed();
                                                                   Motor7.setSpeed(-1000);
                                                                   Motor7.runSpeed();
                                                                   Motor8.setSpeed(-1000);
                                                                   Motor8.runSpeed();
                                                                   Motor9.setSpeed(1000);
                                                                   Motor9.runSpeed();
                                                                   Motor10.setSpeed(1000);
                                                                   Motor10.runSpeed();
                                                                   Motor11.setSpeed(1000);
                                                                   Motor11.runSpeed();
                                                                   Motor12.setSpeed(1000);
                                                                   Motor12.runSpeed();
                                                                   if(Motor12.currentPosition() == 1000)
                                                                    { Motor1.setCurrentPosition(0);
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
                                                                      while(Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                                       {
                                                                         Motor4.setSpeed(-1000);
                                                                         Motor4.runSpeed();
                                                                         Motor5.setSpeed(-1000);
                                                                         Motor5.runSpeed();
                                                                         Motor6.setSpeed(-1000);
                                                                         Motor6.runSpeed();
                                                                         Motor7.setSpeed(-1000);
                                                                         Motor7.runSpeed();
                                                                         Motor8.setSpeed(-1000);
                                                                         Motor8.runSpeed();
                                                                         Motor9.setSpeed(-1000);
                                                                         Motor9.runSpeed();
                                                                         Motor10.setSpeed(1000);
                                                                         Motor10.runSpeed();
                                                                         Motor11.setSpeed(1000);
                                                                         Motor11.runSpeed();
                                                                         Motor12.setSpeed(1000);
                                                                         Motor12.runSpeed();
                                                                         if(Motor12.currentPosition() == 1000)
                                                                         { Motor1.setCurrentPosition(0);
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
                                                                           while(Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                                                           {
                                                                             Motor5.setSpeed(-1000);
                                                                             Motor5.runSpeed();
                                                                             Motor6.setSpeed(-1000);
                                                                             Motor6.runSpeed();
                                                                             Motor7.setSpeed(-1000);
                                                                             Motor7.runSpeed();
                                                                             Motor8.setSpeed(-1000);
                                                                             Motor8.runSpeed();
                                                                             Motor9.setSpeed(-1000);
                                                                             Motor9.runSpeed();
                                                                             Motor10.setSpeed(-1000);
                                                                             Motor10.runSpeed();
                                                                             Motor11.setSpeed(1000);
                                                                             Motor11.runSpeed();
                                                                             Motor12.setSpeed(1000);
                                                                             Motor12.runSpeed();
                                                                             if(Motor12.currentPosition() == 1000)
                                                                             { Motor1.setCurrentPosition(0);
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
                                                                               while(Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != 6000)
                                                                               {
                                                                                 Motor6.setSpeed(-1000);
                                                                                 Motor6.runSpeed();
                                                                                 Motor7.setSpeed(-1000);
                                                                                 Motor7.runSpeed();
                                                                                 Motor8.setSpeed(-1000);
                                                                                 Motor8.runSpeed();
                                                                                 Motor9.setSpeed(-1000);
                                                                                 Motor9.runSpeed();
                                                                                 Motor10.setSpeed(-1000);
                                                                                 Motor10.runSpeed();
                                                                                 Motor11.setSpeed(-1000);
                                                                                 Motor11.runSpeed();
                                                                                 Motor12.setSpeed(1000);
                                                                                 Motor12.runSpeed();
                                                                                 if(Motor12.currentPosition() == 1000)
                                                                                  { Motor1.setCurrentPosition(0);
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
                                                                                    while(Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                     {
                                                                                        Motor7.setSpeed(-1000);
                                                                                        Motor7.runSpeed();
                                                                                        Motor8.setSpeed(-1000);
                                                                                        Motor8.runSpeed();
                                                                                        Motor9.setSpeed(-1000);
                                                                                        Motor9.runSpeed();
                                                                                        Motor10.setSpeed(-1000);
                                                                                        Motor10.runSpeed();
                                                                                        Motor11.setSpeed(-1000);
                                                                                        Motor11.runSpeed();
                                                                                        Motor12.setSpeed(-1000);
                                                                                        Motor12.runSpeed();
                                                                                        if(Motor12.currentPosition() == -1000)
                                                                                         { Motor1.setCurrentPosition(0);
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
                                                                                           while(Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                             {
                                                                                                Motor8.setSpeed(-1000);
                                                                                                Motor8.runSpeed();
                                                                                                Motor9.setSpeed(-1000);
                                                                                                Motor9.runSpeed();
                                                                                                Motor10.setSpeed(-1000);
                                                                                                Motor10.runSpeed();
                                                                                                Motor11.setSpeed(-1000);
                                                                                                Motor11.runSpeed();
                                                                                                Motor12.setSpeed(-1000);
                                                                                                Motor12.runSpeed();
                                                                                                if(Motor12.currentPosition() == -1000)
                                                                                                   { Motor1.setCurrentPosition(0);
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
                                                                                                     while(Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                                       {
                                                                                                          Motor9.setSpeed(-1000);
                                                                                                          Motor9.runSpeed();
                                                                                                          Motor10.setSpeed(-1000);
                                                                                                          Motor10.runSpeed();
                                                                                                          Motor11.setSpeed(-1000);
                                                                                                          Motor11.runSpeed();
                                                                                                          Motor12.setSpeed(-1000);
                                                                                                          Motor12.runSpeed();
                                                                                                          if(Motor12.currentPosition() == -1000)
                                                                                                           { Motor1.setCurrentPosition(0);
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
                                                                                                             while(Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                                               { 
                                                                                                                 Motor10.setSpeed(-1000);
                                                                                                                 Motor10.runSpeed();
                                                                                                                 Motor11.setSpeed(-1000);
                                                                                                                 Motor11.runSpeed();
                                                                                                                 Motor12.setSpeed(-1000);
                                                                                                                 Motor12.runSpeed();
                                                                                                                 if(Motor12.currentPosition() == -1000)
                                                                                                                   { Motor1.setCurrentPosition(0);
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
                                                                                                                     while(Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                                                                                                       { 
                                                                                                                         Motor11.setSpeed(-1000);
                                                                                                                         Motor11.runSpeed();
                                                                                                                         Motor12.setSpeed(-1000);
                                                                                                                         Motor12.runSpeed();
                                                                                                                         if(Motor12.currentPosition() == -1000)
                                                                                                                           { 
                                                                                                                             Motor11.setCurrentPosition(0);
                                                                                                                             Motor12.setCurrentPosition(0);
                                                                                                                             while(Motor12.currentPosition() != -1000)
                                                                                                                               { 
                                                                                                                                 Motor12.setSpeed(-1000);
                                                                                                                                 Motor12.runSpeed();
                                                                                                                                 if(Motor12.currentPosition() == -1000)
                                                                                                                                 { Motor12.setCurrentPosition(0);
                                                                                                                                   goto Next;
                                                                                                                                 }
                                                                                                                             }
                                                                                                                                 
                                                                                                                                 
                                                                                                                                 
                                                                                                                           }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
 Next:
 delay(2000);

   
    //Program6:Wave------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
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

  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
        }

//Speed=Distance/time
  

  while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
  {
    
    Motor1.setSpeed(1000);
    Motor1.runSpeed();
    
    Motor2.setSpeed(1000);
    Motor2.runSpeed();
    
    Motor3.setSpeed(1000);
    Motor3.runSpeed();
    
    Motor4.setSpeed(1000);
    Motor4.runSpeed();
    
    Motor5.setSpeed(1000);
    Motor5.runSpeed();
    
    Motor6.setSpeed(1000);
    Motor6.runSpeed();
    
    Motor7.setSpeed(1000);
    Motor7.runSpeed();
   
    Motor8.setSpeed(1000);
    Motor8.runSpeed();
    
    Motor9.setSpeed(1000);
    Motor9.runSpeed();
    
    Motor10.setSpeed(1000);
    Motor10.runSpeed();
    
    Motor11.setSpeed(1000);
    Motor11.runSpeed();
    
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

    
    if(Motor1.currentPosition() == 3000 || Motor2.currentPosition() == 3000 || Motor3.currentPosition() == 3000 || Motor4.currentPosition() == 3000 || Motor5.currentPosition() == 3000 || Motor6.currentPosition() == 3000 || Motor7.currentPosition() == 3000 || Motor8.currentPosition() == 3000 || Motor9.currentPosition() == 3000 || Motor10.currentPosition() == 3000 || Motor11.currentPosition() == 3000 || Motor12.currentPosition() == 3000 )                                  
    break;
  } 

  delay(1000);

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

 //Speed=Distance/time
nextagain:
{ i = i+1;
delay(10);
}
 while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000)
          { 
                                     Motor1.setSpeed(-1000);
                                     Motor1.runSpeed(); 
                                     Motor2.setSpeed(-1000);
                                     Motor2.runSpeed();
                                     Motor3.setSpeed(-1000);
                                     Motor3.runSpeed();
                                     
                                     Motor7.setSpeed(1000);
                                     Motor7.runSpeed();
                                     Motor8.setSpeed(1000);
                                     Motor8.runSpeed();
                                     Motor9.setSpeed(1000);
                                     Motor9.runSpeed();
                                    
            if(Motor9.currentPosition() == 3000)
             {   Motor1.setCurrentPosition(0);
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
               while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000 )
                  { 
                                     Motor1.setSpeed(1000);
                                     Motor1.runSpeed(); 
                                     Motor2.setSpeed(1000);
                                     Motor2.runSpeed();
                                     Motor3.setSpeed(1000);
                                     Motor3.runSpeed();
                                     Motor4.setSpeed(-1000);
                                     Motor4.runSpeed();
                                     Motor5.setSpeed(-1000);
                                     Motor5.runSpeed();
                                     Motor6.setSpeed(-1000);
                                     Motor6.runSpeed();
                                     Motor7.setSpeed(-1000);
                                     Motor7.runSpeed();
                                     Motor8.setSpeed(-1000);
                                     Motor8.runSpeed();
                                     Motor9.setSpeed(-1000);
                                     Motor9.runSpeed();
                                     Motor10.setSpeed(1000);
                                     Motor10.runSpeed();
                                     Motor11.setSpeed(1000);
                                     Motor11.runSpeed();
                                     Motor12.setSpeed(1000);
                                     Motor12.runSpeed();
               if(Motor12.currentPosition() == 3000)
               {
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
                 while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                 {
                                     Motor1.setSpeed(1000);
                                     Motor1.runSpeed(); 
                                     Motor2.setSpeed(1000);
                                     Motor2.runSpeed();
                                     Motor3.setSpeed(1000);
                                     Motor3.runSpeed();
                                     Motor4.setSpeed(1000);
                                     Motor4.runSpeed();
                                     Motor5.setSpeed(1000);
                                     Motor5.runSpeed();
                                     Motor6.setSpeed(1000);
                                     Motor6.runSpeed();
                                     Motor7.setSpeed(-1000);
                                     Motor7.runSpeed();
                                     Motor8.setSpeed(-1000);
                                     Motor8.runSpeed();
                                     Motor9.setSpeed(-1000);
                                     Motor9.runSpeed();
                                     Motor10.setSpeed(-1000);
                                     Motor10.runSpeed();
                                     Motor11.setSpeed(-1000);
                                     Motor11.runSpeed();
                                     Motor12.setSpeed(-1000);
                                     Motor12.runSpeed();
                   if(Motor12.currentPosition() == -3000)
                    {
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
                    
                      while(Motor1.currentPosition() != 6000 || Motor2.currentPosition() != 6000 || Motor3.currentPosition() != 6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                      {
                                     Motor1.setSpeed(1000);
                                     Motor1.runSpeed(); 
                                     Motor2.setSpeed(1000);
                                     Motor2.runSpeed();
                                     Motor3.setSpeed(1000);
                                     Motor3.runSpeed();
                                     Motor4.setSpeed(1000);
                                     Motor4.runSpeed();
                                     Motor5.setSpeed(1000);
                                     Motor5.runSpeed();
                                     Motor6.setSpeed(1000);
                                     Motor6.runSpeed();
                                     Motor7.setSpeed(-1000);
                                     Motor7.runSpeed();
                                     Motor8.setSpeed(-1000);
                                     Motor8.runSpeed();
                                     Motor9.setSpeed(-1000);
                                     Motor9.runSpeed();
                                     Motor10.setSpeed(-1000);
                                     Motor10.runSpeed();
                                     Motor11.setSpeed(-1000);
                                     Motor11.runSpeed();
                                     Motor12.setSpeed(-1000);
                                     Motor12.runSpeed();
                       if(Motor12.currentPosition() == -3000)
                        {   Motor1.setCurrentPosition(0);
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
                          while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != 6000 || Motor5.currentPosition() != 6000 || Motor6.currentPosition() != 6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                          {
                                      Motor1.setSpeed(-1000);
                                      Motor1.runSpeed(); 
                                      Motor2.setSpeed(-1000);
                                      Motor2.runSpeed();
                                      Motor3.setSpeed(-1000);
                                      Motor3.runSpeed();
                                      Motor4.setSpeed(1000);
                                      Motor4.runSpeed();
                                      Motor5.setSpeed(1000);
                                      Motor5.runSpeed();
                                      Motor6.setSpeed(1000);
                                      Motor6.runSpeed();
                                      Motor7.setSpeed(1000);
                                      Motor7.runSpeed();
                                      Motor8.setSpeed(1000);
                                      Motor8.runSpeed();
                                      Motor9.setSpeed(1000);
                                      Motor9.runSpeed();
                                      Motor10.setSpeed(-1000);
                                      Motor10.runSpeed();
                                      Motor11.setSpeed(-1000);
                                      Motor11.runSpeed();
                                      Motor12.setSpeed(-1000);
                                      Motor12.runSpeed();
                                      if(Motor12.currentPosition() == -3000)
                                      {   Motor1.setCurrentPosition(0);
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
                                         while(Motor1.currentPosition() != -6000 || Motor2.currentPosition() != -6000 || Motor3.currentPosition() != -6000 || Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor7.currentPosition() != 6000 || Motor8.currentPosition() != 6000 || Motor9.currentPosition() != 6000 || Motor10.currentPosition() != 6000 || Motor11.currentPosition() != 6000 || Motor12.currentPosition() != 6000)
                                            {
                                              Motor1.setSpeed(-1000);
                                              Motor1.runSpeed(); 
                                              Motor2.setSpeed(-1000);
                                              Motor2.runSpeed();
                                              Motor3.setSpeed(-1000);
                                              Motor3.runSpeed();
                                              Motor4.setSpeed(-1000);
                                              Motor4.runSpeed();
                                              Motor5.setSpeed(-1000);
                                              Motor5.runSpeed();
                                              Motor6.setSpeed(-1000);
                                              Motor6.runSpeed();
                                              Motor7.setSpeed(1000);
                                              Motor7.runSpeed();
                                              Motor8.setSpeed(1000);
                                              Motor8.runSpeed();
                                              Motor9.setSpeed(1000);
                                              Motor9.runSpeed();
                                              Motor10.setSpeed(1000);
                                              Motor10.runSpeed();
                                              Motor11.setSpeed(1000);
                                              Motor11.runSpeed();
                                              Motor12.setSpeed(1000);
                                              Motor12.runSpeed();
                               if(Motor12.currentPosition() == 3000)
                                {   Motor1.setCurrentPosition(0);
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


                                 if(i <= 6)
                                 {
                                  goto nextagain;
                                 }
                                 else
                                 { goto nextagain1;}
                                }}}}}}}}}}}} 
                                nextagain1:
                               {          Motor1.setCurrentPosition(0);
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
                                         while(Motor4.currentPosition() != -6000 || Motor5.currentPosition() != -6000 || Motor6.currentPosition() != -6000 || Motor10.currentPosition() != -6000 || Motor11.currentPosition() != -6000 || Motor12.currentPosition() != -6000)
                                            {
                                              
                                              Motor4.setSpeed(-1000);
                                              Motor4.runSpeed();
                                              Motor5.setSpeed(-1000);
                                              Motor5.runSpeed();
                                              Motor6.setSpeed(-1000);
                                              Motor6.runSpeed();
                                              
                                              Motor10.setSpeed(-1000);
                                              Motor10.runSpeed();
                                              Motor11.setSpeed(-1000);
                                              Motor11.runSpeed();
                                              Motor12.setSpeed(-1000);
                                              Motor12.runSpeed();
                                              if(Motor12.currentPosition() == -3000)
                                               while(Motor7.currentPosition() != -6000 || Motor8.currentPosition() != -6000 || Motor9.currentPosition() != -6000 )
                                               {  Motor7.setSpeed(1000);
                                                  Motor7.runSpeed();
                                                  Motor8.setSpeed(1000);
                                                  Motor8.runSpeed();
                                                  Motor9.setSpeed(1000);
                                                  Motor9.runSpeed();
                                                  if(i==7)
                                                  {
                                                    goto nextagain2;
                                                    }
                                                  }

                                               }
                               }
                               nextagain2:
                              while(1)
                               {}
                               delay(2000);
                               


  

 //Pattern7:Rain---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
       }
       
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

  while(digitalRead(Check1) == HIGH)
       {
       Serial.print("Stop  "); 
       }

  
    while(Motor2.currentPosition() != 6000 )                              
    { 
  
    Motor2.setSpeed(1000);
    Motor2.runSpeed();

    }

   delay(100); 

    while(Motor10.currentPosition() != 6000 )                              
    { 
  
    Motor10.setSpeed(1000);
    Motor10.runSpeed();

    }

   delay(100);    
   
   while(Motor9.currentPosition() != 6000 )                              
    { 
  
    Motor9.setSpeed(1000);
    Motor9.runSpeed();

    }

   delay(100);    
   
   while(Motor5.currentPosition() != 6000 )                              
    { 
  
    Motor5.setSpeed(1000);
    Motor5.runSpeed();

    }

   delay(100);   
   
   while(Motor4.currentPosition() != 6000 )                              
    { 
  
    Motor4.setSpeed(1000);
    Motor4.runSpeed();

    }

   delay(100);  
   
   while(Motor6.currentPosition() != 6000 )                              
    { 
  
    Motor6.setSpeed(1000);
    Motor6.runSpeed();

    }

   delay(100);  
   
   while(Motor8.currentPosition() != 6000 )                              
    { 
  
    Motor8.setSpeed(1000);
    Motor8.runSpeed();

    }

   delay(100);  
   
   while(Motor1.currentPosition() != 6000 )                              
    { 
  
    Motor1.setSpeed(1000);
    Motor1.runSpeed();

    }

   delay(100);    
   
   while(Motor12.currentPosition() != 6000 )                              
    { 
  
    Motor12.setSpeed(1000);
    Motor12.runSpeed();

    }

   delay(100);   
   
   while(Motor7.currentPosition() != 6000 )                              
    { 
  
    Motor7.setSpeed(1000);
    Motor7.runSpeed();

    }

   delay(100);  
   
   while(Motor11.currentPosition() != 6000 )                              
    { 
  
    Motor11.setSpeed(1000);
    Motor11.runSpeed();

    }

   delay(100); 
   
   while(Motor3.currentPosition() != 6000 )                              
    { 
  
    Motor3.setSpeed(1000);
    Motor3.runSpeed();

    }

   delay(2000);    


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

  
  while(Motor7.currentPosition() != -6000 )                              
    { 
  
    Motor7.setSpeed(-1000);
    Motor7.runSpeed();

    }

   delay(100);    

while(Motor11.currentPosition() != -6000 )                              
    { 
  
    Motor11.setSpeed(-1000);
    Motor11.runSpeed();

    }

   delay(100);    

while(Motor9.currentPosition() != -6000 )                              
    { 
  
    Motor9.setSpeed(-1000);
    Motor9.runSpeed();

    }

   delay(100);    

while(Motor2.currentPosition() != -6000 )                              
    { 
  
    Motor2.setSpeed(-1000);
    Motor2.runSpeed();

    }

   delay(100);    

while(Motor12.currentPosition() != -6000 )                              
    { 
  
    Motor12.setSpeed(-1000);
    Motor12.runSpeed();

    }

   delay(100);    

while(Motor4.currentPosition() != -6000 )                              
    { 
  
    Motor4.setSpeed(-1000);
    Motor4.runSpeed();

    }

   delay(100);    

while(Motor6.currentPosition() != -6000 )                              
    { 
  
    Motor6.setSpeed(-1000);
    Motor6.runSpeed();

    }

   delay(100);    

while(Motor10.currentPosition() != -6000 )                              
    { 
  
    Motor10.setSpeed(-1000);
    Motor10.runSpeed();

    }

   delay(100);    

while(Motor5.currentPosition() != -6000 )                              
    { 
  
    Motor5.setSpeed(-1000);
    Motor5.runSpeed();

    }

   delay(100);    

while(Motor1.currentPosition() != -6000 )                              
    { 
  
    Motor1.setSpeed(-1000);
    Motor1.runSpeed();

    }

   delay(100);    

while(Motor3.currentPosition() != -6000 )                              
    { 
  
    Motor3.setSpeed(-1000);
    Motor3.runSpeed();

    }

   delay(100);    

while(Motor8.currentPosition() != -6000 )                              
    { 
  
    Motor8.setSpeed(-1000);
    Motor8.runSpeed();

    }

   delay(2000);    
   }
