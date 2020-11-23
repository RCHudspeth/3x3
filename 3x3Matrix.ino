
int bits [49][6] = 
{
  {0,0,1,0,0,0},
  {0,0,1,0,0,1},
  {0,0,1,0,1,0},
  {0,0,1,0,1,1},
  {0,0,1,1,0,0},
  {0,0,1,1,0,1},
  {0,0,1,1,1,0},
  {0,1,0,0,0,0},
  {0,1,0,0,0,1},
  {0,1,0,0,1,0},
  {0,1,0,0,1,1},
  {0,1,0,1,0,0},
  {0,1,0,1,0,1},
  {0,1,0,1,1,0},
  {0,1,1,0,0,0},
  {0,1,1,0,0,1},
  {0,1,1,0,1,0},
  {0,1,1,0,1,1},
  {0,1,1,1,0,0},
  {0,1,1,1,0,1},
  {0,1,1,1,1,0},
  {1,0,0,0,0,0},
  {1,0,0,0,0,1},
  {1,0,0,0,1,0},
  {1,0,0,0,1,1},
  {1,0,0,1,0,0},
  {1,0,0,1,0,1},
  {1,0,0,1,1,0},
  {1,0,1,0,0,0},
  {1,0,1,0,0,1},
  {1,0,1,0,1,0},
  {1,0,1,0,1,1},
  {1,0,1,1,0,0},
  {1,0,1,1,0,1},
  {1,0,1,1,1,0},
  {1,1,0,0,0,0},
  {1,1,0,0,0,1},
  {1,1,0,0,1,0},
  {1,1,0,0,1,1},
  {1,1,0,1,0,0},
  {1,1,0,1,0,1},
  {1,1,0,1,1,0},
  {1,1,1,0,0,0},
  {1,1,1,0,0,1},
  {1,1,1,0,1,0},
  {1,1,1,0,1,1},
  {1,1,1,1,0,0},
  {1,1,1,1,0,1},
  {1,1,1,1,1,0},
};

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int k = random(0,49);
  
  for (int j = 0; j<=6; j++)
  {
     
     if (j == 6)
     {
        Serial.println();
     }
     else 
     {
      Serial.print(bits[k][j]);
     }
  }
  
  Serial.println();
  digitalWrite(13, bits[k][0]);
  digitalWrite(12, bits[k][1]);
  digitalWrite(11, bits[k][2]);

  digitalWrite(7, bits[k][3]);
  digitalWrite(6, bits[k][4]);
  digitalWrite(5, bits[k][5]);

  digitalWrite(LED_BUILTIN, HIGH);

  delay(500);

  

}
