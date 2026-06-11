const int BTN_1 = D0; 
const int BTN_2 = D1; 
const int BTN_3 = D2; 
const int BTN_4 = D6; 
const int BTN_5 = D9; 

const int LED_1 = D3; 
const int LED_2 = D4;
const int LED_3 = D5; 
const int LED_4 = D8; 
const int LED_5 = D7; 

void setup() {
  pinMode(BTN_1, INPUT_PULLUP);
  pinMode(BTN_2, INPUT_PULLUP);
  pinMode(BTN_3, INPUT_PULLUP);
  pinMode(BTN_4, INPUT_PULLUP);
  pinMode(BTN_5, INPUT_PULLUP);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
}

void loop() {
  if (digitalRead(BTN_1) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_1, HIGH);
      delay(200);
      digitalWrite(LED_1, LOW);
      delay(200);
    }
    while (digitalRead(BTN_1) == LOW);
  }

  if (digitalRead(BTN_2) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_2, HIGH);
      delay(200);
      digitalWrite(LED_2, LOW);
      delay(200);
    }
    while (digitalRead(BTN_2) == LOW);
  }

  if (digitalRead(BTN_3) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_3, HIGH);
      delay(200);
      digitalWrite(LED_3, LOW);
      delay(200);
    }
    while (digitalRead(BTN_3) == LOW);
  }

  if (digitalRead(BTN_4) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_4, HIGH);
      delay(200);
      digitalWrite(LED_4, LOW);
      delay(200);
    }
    while (digitalRead(BTN_4) == LOW);
  }

  if (digitalRead(BTN_5) == LOW) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(LED_5, HIGH);
      delay(200);
      digitalWrite(LED_5, LOW);
      delay(200);
    }
    while (digitalRead(BTN_5) == LOW);
  }
}