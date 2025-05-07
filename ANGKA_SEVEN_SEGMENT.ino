// made by : raqhamedia
// seven segment dengan arduino
// https://raqhamedia.xyz

void setup() {
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
}

void loop() {
  // angka 0
  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  delay(500);
  
  // angka 1
  digitalWrite (1, HIGH);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  delay (500);
  
  // angka 2
  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  delay (500);

  // angka 3
  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  delay (500);
    
  // angka 4
  digitalWrite (1, HIGH);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  delay (500);
  
  // angka 5
  digitalWrite (1, LOW);
  digitalWrite (2, HIGH);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  delay (500);
  
  // angka 6
  digitalWrite (1, LOW);
  digitalWrite (2, HIGH);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  delay (500);
  
  // angka 7
  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  delay (500);
  
  // angka 8
  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  delay (500);
  
  // angka 9
  digitalWrite (1, LOW);
  digitalWrite (2, LOW);
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  delay (500);
}
