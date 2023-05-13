int BIT_A = 2;
int BIT_B = 3;
int BIT_C = 4;
int BIT_D = 5;

int LE_1 = 6;
int LE_2 = 7;
int LE_3 = 8;

int BT_1 = 9;
int BT_2 = 10;

// Número 0 em binário
void carrega_0(){
  digitalWrite(BIT_A, 0);
  digitalWrite(BIT_B, 0);
  digitalWrite(BIT_C, 0);
  digitalWrite(BIT_D, 0);
}

// Número 1 em binário
void carrega_1(){
  digitalWrite(BIT_A, 1);
  digitalWrite(BIT_B, 0);
  digitalWrite(BIT_C, 0);
  digitalWrite(BIT_D, 0);
}

// Número 2 em binário
void carrega_2(){
  digitalWrite(BIT_A, 0);
  digitalWrite(BIT_B, 1);
  digitalWrite(BIT_C, 0);
  digitalWrite(BIT_D, 0);
}

void setup()
{
  pinMode(BIT_A, OUTPUT);
  pinMode(BIT_B, OUTPUT);
  pinMode(BIT_C, OUTPUT);
  pinMode(BIT_D, OUTPUT);
  
  pinMode(LE_1, OUTPUT);
  pinMode(LE_2, OUTPUT);
  pinMode(LE_3, OUTPUT);
  
  pinMode(BT_1, INPUT_PULLUP);
  pinMode(BT_2, INPUT_PULLUP);
  
  carrega_0();
  digitalWrite(LE_1, 0);
  digitalWrite(LE_2, 0);
  digitalWrite(LE_3, 0);
  digitalWrite(LE_1, 1);
  digitalWrite(LE_2, 1);
  digitalWrite(LE_3, 1);
  
}

void loop()
{
  if (digitalRead(BT_1) == 0){
    carrega_1();
    digitalWrite(LE_1, 0);
    digitalWrite(LE_1, 1);
    while(digitalRead(BT_1) == 0){}
    delay(50);
  }
  
  if (digitalRead(BT_2) == 0){
    carrega_2();
    digitalWrite(LE_1, 0);
    digitalWrite(LE_1, 1);
    while(digitalRead(BT_2) == 0){}
    delay(50);
  }
    
}
