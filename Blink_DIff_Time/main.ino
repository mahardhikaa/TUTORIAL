int L1 = 13;
int L2 = 10;
int j;

void setup(){
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
}

void loop(){
  
  digitalWrite(L2, HIGH);
  for(j=0; j<1000; j++){
    digitalWrite(L1, HIGH);
    delay(1);
  }
  for(j=0; j<1000; j++){
    digitalWrite(L1, LOW);
    delay(1);
  }
  
  digitalWrite(L2, LOW);
  for(j=0; j<1000; j++){
    digitalWrite(L1, HIGH);
    delay(1);
  }
  for(j=0; j<1000; j++){
    digitalWrite(L1, LOW);
    delay(1);
  }
  
}