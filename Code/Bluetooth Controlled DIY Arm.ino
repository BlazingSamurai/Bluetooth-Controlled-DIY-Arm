
#include<Servo.h>
#include<SoftwareSerial.h>
Servo servo1;
Servo servo2;
Servo servo3;

int servo1_angle;
int servo2_angle;
int servo3_angle;
int x=2;
int y=120;
int z=2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  pinMode(13,OUTPUT);
  servo1.write(x);
  servo3.write(y);
  servo2.write(z);
}


void loop() {
  while(Serial.available()>0){
    char input = Serial.read();
    
    if(input=='F'){
      if (x >= 2 && x < 178)
      {
        x=x+1;
        servo1.write(x);
      }
    }
    if(input=='B'){
      if (x >= 2 && x < 178)
      {
        x=x-1;
        servo1.write(x);
      }
    }

    if(input=='L'){
      if (y >= 2 && y < 178)
      {
        y=y+1;
        servo2.write(y);
      }
    }
    if(input=='R'){
      if (y >= 2 && y < 178)
      {
        y=y-1;
        servo2.write(y);
      }
    }

    if(input=='G'){
      if (z >= 2 && z < 178)
      {
        z=z+1;
        servo3.write(z);
      }
    }
    if(input=='I'){
      if (z >= 2 && z < 178)
      {
        z=z-1;
        servo3.write(z);
      }
    }
  }
}

    
