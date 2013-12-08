
const int POT = 0;
const int BLUELED = 8;
const int REDLED = 9;
const int GREENLED = 10;
int datain = 0;


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode (BLUELED, OUTPUT);
  pinMode (GREENLED, OUTPUT);
  pinMode (REDLED, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  datain = analogRead(POT);
  Serial.println(datain);
  setLed(datain);
  delay(500);
  

}



void setLed(int rgb)
{
  clearAll();
  Serial.println("Setting LEDs");
  
  if (rgb < 256)
  {
    // Set RED on
    digitalWrite(REDLED, HIGH);
    Serial.println("LED value < 256");
    return;
    
  }
  else if (rgb < 512)
  {
    //Set Blue on
    digitalWrite(BLUELED, HIGH);
    Serial.println("LED value < 512");
    return;
  }
  else if (rgb < 768)
  {
    //Set Green on
    digitalWrite(GREENLED, HIGH);
    Serial.println("LED value < 768");    
    return;
  }
  else
  {
    // Set them all off
    clearAll();
    Serial.println("LED value out of range - clearing all");

  }
}

void clearAll()
{
  digitalWrite (BLUELED, LOW);
  digitalWrite (REDLED, LOW);
  digitalWrite (GREENLED, LOW);
}

