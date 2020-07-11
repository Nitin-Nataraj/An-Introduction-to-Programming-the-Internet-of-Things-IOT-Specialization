void setup()
{  
  pinMode(LED_BUILTIN,OUTPUT);  
  Serial.begin(9600);
}

void loop()
{ 
  if(Serial.available() > 0)      
    {      
      char data = Serial.read();                     
      if(data == '0') digitalWrite(LED_BUILTIN,0);        
      else if (data == '1') digitalWrite(LED_BUILTIN,1); 
    }
} 
