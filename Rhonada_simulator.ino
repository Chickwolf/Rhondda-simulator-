// Rhondda simultator
// Atlas AV - V1.0

  void extractorOn(){digitalWrite(2,HIGH);}
  void extractorOff(){digitalWrite(2,LOW);}

void setup() 
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}
  String inBuffer = "";
void loop() 
{
    while (Serial.available()){
    char c = Serial.read();
    inBuffer += c;
    }
      byte incomingByte = Serial.read();
      if (inBuffer == "extractorOn")
      {
        extractorOn();
        Serial.println("On");
      }
      else if (inBuffer == "extractorOff")
      {
        extractorOff();
        Serial.println("Off");         
      }
  inBuffer = "";
}
