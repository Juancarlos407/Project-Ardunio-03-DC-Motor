//Motor A
int enableA = A1;
int MotorA1 = 6;
int MotorA2 = 9;
 
//Motor B
int enableB = A2;
int MotorB1 = 10;
int MotorB2 = 11;
 
void setup() {
  
  Serial.begin (9600);
  //configure pin modes
  pinMode (enableA, OUTPUT);
  pinMode (MotorA1, OUTPUT);
  pinMode (MotorA2, OUTPUT);  
  
  pinMode (enableB, OUTPUT);
  pinMode (MotorB1, OUTPUT);
  pinMode (MotorB2, OUTPUT);  
  
}
 
void loop() {
  //enabling motor A
  Serial.println ("Enabling Motors");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  delay (1000);
  //do something
 
  Serial.println ("Motion Forward");
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);
 
  digitalWrite (MotorB1, LOW);
  digitalWrite (MotorB2, HIGH);
 
  //3s forward
  delay (3000);
  
  Serial.println ("Motion Backwards");
  //reverse
  digitalWrite (MotorA1,HIGH);
  digitalWrite (MotorA2,LOW);  
  
  digitalWrite (MotorB1,HIGH);
  digitalWrite (MotorB2,LOW);  
 
  //5s backwards
  delay (3000);
 
  Serial.println ("Stoping motors");
  //stop
  digitalWrite (enableA, LOW);
  digitalWrite (enableB, LOW);
  delay (3000);
}
