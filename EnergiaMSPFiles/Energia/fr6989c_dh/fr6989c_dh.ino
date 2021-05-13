
char data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);     // COM PORT TO PC
  Serial1.begin(115200);    // COM PORT TO NRF52833
  pinMode(PUSH2,INPUT_PULLUP);
  Serial.print("Waiting For Button");
  Serial.println();

}

void loop() {
{
  while(digitalRead(PUSH2)==1){
    if(Serial1.available()>0){
      //Serial.print("Reading A");
      //Serial.println();
      data = Serial1.read();
      Serial.print(data);
      //Serial.println();
      }
    }    

  while(digitalRead(PUSH2) == 0){
      Serial1.println("a");
      Serial.print("Wrote A");
      Serial.println();
      delay(200);
      }
    }
  }   
