void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int button=digitalRead(7);
Serial.println(button);
if(button==HIGH)
{
  digitalWrite(8,HIGH);//LED
      
}
else{
  digitalWrite(8,LOW);
}
}
