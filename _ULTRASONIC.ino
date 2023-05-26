
const int TRIG_PIN=6;
const int ECHO_PIN=7;
const int LED_PIN=12;
const int LED_PIN1=11;
const int LED_PIN2=9;

const int t1=10;
const int t2=20;
const int t3=30;

float duration_us,distance_cm;
void setup(){
  Serial.begin(9600);
  pinMode(ECHO_PIN, INPUT);  
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}
   void loop(){
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

   duration_us=pulseIn(ECHO_PIN,INPUT);
   distance_cm = 0.017 * duration_us;
    
    if(distance_cm<t1){
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    }
  else{
      digitalWrite(LED_PIN, LOW);
  }
    if(distance_cm <= t2 and distance_cm >= t1){
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN, LOW);
    digitalWrite(LED_PIN2, LOW);
    }
  else{
    digitalWrite(LED_PIN1, LOW);
  }
    if(distance_cm<=t3  and distance_cm>=t2){
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN, LOW);
    digitalWrite(LED_PIN1, LOW);
    }
    else{
    digitalWrite(LED_PIN2, LOW);
    }




  }

