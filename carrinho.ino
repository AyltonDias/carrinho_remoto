#include <IRremote.h>

int led = 1;
int buz = 2;
int D1 = 4;
int D2 = 5;
int E1 = 7;
int E2 = 6;
float Codigo;
IRrecv irrecv(10);
decode_results results;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buz, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  irrecv.enableIRIn();
  Serial.begin(9600);
}

void loop() {
  // cerifica se o senso IR recebeu algum código
  if (irrecv.decode(&results))
  {
    Serial.print("Código HEX: ");
    Serial.println(results.value, HEX);
    Serial.print("Código DEC: ");
    Serial.println(results.value);
    Serial.println("");
    Codigo = (results.value);
    // executa uma fução deacorso com o código lido

    Serial.println(Codigo);
    
    // Adicione  o codigo do controle no condicional do if
    if (Codigo == /*codigo aqui*/) {
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(E1, HIGH);
      digitalWrite(E2, LOW);
      delay(500);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      Serial.println("Carro andou para frente");

    // Adicione  o codigo do controle no condicional do if
    } else if (Codigo == /*codigo aqui*/) {
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      digitalWrite(E1, LOW);
      digitalWrite(E2, HIGH);
      delay(500);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      Serial.println("Carro andou para Tras");

    // Adicione  o codigo do controle no condicional do if
    } else if (Codigo == /*codigo aqui*/) {
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      delay(500);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      Serial.println("Carro virou para esquerda");

    // Adicione  o codigo do controle no condicional do if
    } else if (Codigo == /*codigo aqui*/) {
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(E1, HIGH);
      digitalWrite(E2, LOW;
      delay(500);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      Serial.println("Carro virou para direita");

    // Adicione  o codigo do controle no condicional do if
    } else if (Codigo == /*codigo aqui*/) {
      digitalWrite(led, HIGH);
      delay(3000);
      digitalWrite(led, LOW);
      Serial.println("Carro igou farol");
      
    // Adicione  o codigo do controle no condicional do if
    } else if (Codigo == ) {
      digitalWrite(buz, HIGH);
      delay(500);
      digitalWrite(buz, LOW);
      delay(500);
      digitalWrite(buz, HIGH);
      delay(500);
      digitalWrite(buz, LOW);
      Serial.println("Carro ligou buzina");
    }
    irrecv.resume();
  }
  delay(100);
}
