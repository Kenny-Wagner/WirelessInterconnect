char data;
char command;

int POTPIN = P8_4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial1.begin(115200);
}


void loop() {
  // put your main code here, to run repeatedly: 

  while(Serial1.available()){
    //command = Serial1.read();
    command = 'a';
    if(command == 'a'){
      data = 't';
      Serial1.write(data);
      Serial1.write('\n');
    }
  }
  
}
