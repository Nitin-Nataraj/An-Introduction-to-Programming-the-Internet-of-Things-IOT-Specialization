#include <EEPROM.h>

int add = 0;
int val;

void setup(void)
{
    Serial.begin(9600);
}

void loop(void)
{
    String str = "";
    str = Serial.readString();

    if(str.startsWith("read")){
        add = str.substring(str.indexOf(' ') + 1).toInt();
        Serial.println();
  Serial.print("Data Address: ");
        Serial.print(add);
        Serial.print(" Value:");
        Serial.print(EEPROM.read(add));
    }
    else if(str.startsWith("write")){
        add = str.substring(6, 7).toInt();
        val = str.substring(8, str.length()).toInt();
        Serial.print("Address: ");
        Serial.print(add);
        Serial.print(" Data Write: ");
        Serial.println(val);
        EEPROM.write(add, val);
    }
}
