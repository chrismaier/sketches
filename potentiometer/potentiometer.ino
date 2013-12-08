
const int POT = 0;
int datain = 0;


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  datain = analogRead(POT);
  Serial.println(datain);
  delay(500);
  

}
