#define LED_1 12
#define LED_2 10
#define LED_3 9
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_1 ,OUTPUT);
pinMode(LED_2 ,OUTPUT);
pinMode(LED_3 ,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
  int x = Serial.parseInt();
  if (x==1) 
  Serial.println("LED_1 ON");
  digitalWrite(12,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  
  if (x==2) 
  Serial.println("LED_1 OFF");
  digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  
  if (x==3) 
  Serial.println("LED_2 ON");
  digitalWrite(9,HIGH);l̥
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  
  }
  }