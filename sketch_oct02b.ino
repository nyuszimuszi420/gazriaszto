int val;            
int piros = 4;
int zold = 5;
void setup() {
  Serial.begin(9600);
  pinMode(piros,OUTPUT);
  pinMode(zold,OUTPUT);
  
}

void loop() {
  val=analogRead(0);
  Serial.println(val,DEC);
  if(val>350){
    digitalWrite(zold,LOW);
    digitalWrite(piros,HIGH);
    tone(7,255);
    delay(200);
    noTone(7);
    digitalWrite(piros,LOW);
    delay(200);
  }else{
    digitalWrite(piros,LOW);
    noTone(7);
    digitalWrite(zold,HIGH);
  }
}
