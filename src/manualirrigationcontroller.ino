const int relay = 6;
const int btn = 7;
const int LED_PIN = 13;
unsigned long stop;

bool current_state = HIGH;


unsigned long time;


void setup() {
  // 
  pinMode(relay,OUTPUT);
  pinMode(btn,INPUT_PULLUP);
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(relay,LOW);
  digitalWrite(btn,HIGH);
  Serial.begin(9600);
  Serial.println("initialized irrigation system(v0.1):");


  



}
void loop(){
  bool pressed = digitalRead(btn);
  if (pressed == HIGH){
  

   digitalWrite(relay,LOW);
   digitalWrite(LED_PIN,LOW);
    
  }else{
  
    digitalWrite(relay,HIGH);
    time=millis()/1000;
    Serial.print("valve is ON at:");
    
    Serial.print(time);
    Serial.println(" SECONDS");
    digitalWrite(LED_PIN,HIGH);
    delay(5000);
     long stop = millis()/1000;
     Serial.print("valve is OFF at:");
    Serial.print(stop);
    Serial.println(" SECONDS");
    
    
    }


    
    
  
  
  }
  
  
