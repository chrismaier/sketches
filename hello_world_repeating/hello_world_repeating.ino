#include <EEPROM.h>

int address = 0;
byte value;
int i = 0;


void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
    while (!Serial) {
      ;
    }


}

void loop() {
  // put your main code here, to run repeatedly:
value = EEPROM.read(address);

if(i > 15)
{
  i = 0;
}
i++;
 
 /*
  Serial.print(address);
  Serial.print("\t");
  Serial.print(value, DEC);
  Serial.println();
 
  // advance to the next address of the EEPROM
  address = address + 1;
 
  // there are only 512 bytes of EEPROM, from 0 to 511, so if we're
  // on address 512, wrap around to address 0
  if (address == 512)
    address = 0;
*/
  Serial.print("Hello world number: ");
  Serial.print(i, DEC);
  Serial.println();
  delay(500);

}
