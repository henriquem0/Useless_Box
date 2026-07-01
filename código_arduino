#include <VarSpeedServo.h>

VarSpeedServo mao;
VarSpeedServo tampa;

int alavanca = 8;
int reacao = 1;
int angulo = 0;

// Ajuste esse tempo (em milissegundos) para controlar o quanto a mão avança antes de voltar
int tempoSubida = 400; 

void setup() {
  pinMode(alavanca, INPUT_PULLUP);
  
  mao.attach(3);   // Ajuste para o pino que você está usando (3 ou 9)
  tampa.attach(5); // Ajuste para o pino que você está usando (5 ou 10)
  
  mao.write(90);   // Nos servos 360, 90 significa PARADO
  tampa.write(90); // Tampa começa fechada
}

void loop() {
  if (digitalRead(alavanca) == LOW) {
    if (reacao > 7) {
      reacao = 1;
    }
    if      (reacao == 1) reacao1();
    else if (reacao == 2) reacao2();
    else if (reacao == 3) reacao3();
    else if (reacao == 4) reacao4();
    else if (reacao == 5) reacao5();
    else if (reacao == 6) reacao6();
    else if (reacao == 7) reacao7();
    reacao += 1;

    while (digitalRead(alavanca) == LOW) {
      delay(10);
    }
    delay(200);
  }
}

// Função padrão para mover a mão 360° (Gira, espera o tempo, inverte, espera e para)
void moverMao360() {
  mao.write(0);             // Começa a girar para empurrar a alavanca
  delay(tempoSubida);       // Tempo que ela leva para alcançar a alavanca
  mao.write(180);           // Inverte a rotação para recolher a mão
  delay(tempoSubida + 50);  // Tempo para voltar para dentro da caixa
  mao.write(90);            // Garante que o motor PAROU
}

void reacao1() {
  tampa.write(45, 50, true);  delay(1000);
  moverMao360();              delay(1000);
  tampa.write(90, 50, true);  delay(1000);
}

void reacao2() {
  tampa.write(45, 30, true);  delay(1000);
  moverMao360();              delay(100);
  tampa.write(90);
}

void reacao3() {
  tampa.write(30, 60, true);  delay(200);
  moverMao360();              delay(100);
  tampa.write(90);
}

void reacao4() {
  delay(250);
  tampa.write(20, 60, true);  delay(100);
  moverMao360();              delay(500);
  tampa.write(90);
}

void reacao5() {
  tampa.write(50, 60, true);  delay(500);
  tampa.write(90, 80, true);  delay(1000);
  tampa.write(50, 60, true);  delay(500);
  tampa.write(90, 80, true);  delay(1000);
  tampa.write(50, 60, true);  delay(500);
  tampa.write(90, 80, true);  delay(2500);
  tampa.write(30, 60, true);  delay(100);
  moverMao360();              delay(100);
  tampa.write(90);
}

void reacao6() {
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(250); tampa.write(90, 80, true); delay(250);
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(250); tampa.write(90, 80, true); delay(250);
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(250); tampa.write(90, 80, true); delay(250);
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(100); tampa.write(90);
}

void reacao7() {
  tampa.write(20, 60, true);  delay(300);
  tampa.write(60, 60, true);  delay(200);
  tampa.write(20, 60, true);  delay(200);
  tampa.write(60, 60, true);  delay(200);
  tampa.write(20, 60, true);  delay(200);
  tampa.write(60, 60, true);  delay(200);
  delay(1500);
  tampa.write(35, 30, true);  delay(200);
  moverMao360();              delay(500);
  tampa.write(90);
}#include <VarSpeedServo.h>

VarSpeedServo mao;
VarSpeedServo tampa;

int alavanca = 8;
int reacao = 1;
int angulo = 0;

// Ajuste esse tempo (em milissegundos) para controlar o quanto a mão avança antes de voltar
int tempoSubida = 400; 

void setup() {
  pinMode(alavanca, INPUT_PULLUP);
  
  mao.attach(3);   // Ajuste para o pino que você está usando (3 ou 9)
  tampa.attach(5); // Ajuste para o pino que você está usando (5 ou 10)
  
  mao.write(90);   // Nos servos 360, 90 significa PARADO
  tampa.write(90); // Tampa começa fechada
}

void loop() {
  if (digitalRead(alavanca) == LOW) {
    if (reacao > 7) {
      reacao = 1;
    }
    if      (reacao == 1) reacao1();
    else if (reacao == 2) reacao2();
    else if (reacao == 3) reacao3();
    else if (reacao == 4) reacao4();
    else if (reacao == 5) reacao5();
    else if (reacao == 6) reacao6();
    else if (reacao == 7) reacao7();
    reacao += 1;

    while (digitalRead(alavanca) == LOW) {
      delay(10);
    }
    delay(200);
  }
}

// Função padrão para mover a mão 360° (Gira, espera o tempo, inverte, espera e para)
void moverMao360() {
  mao.write(0);             // Começa a girar para empurrar a alavanca
  delay(tempoSubida);       // Tempo que ela leva para alcançar a alavanca
  mao.write(180);           // Inverte a rotação para recolher a mão
  delay(tempoSubida + 50);  // Tempo para voltar para dentro da caixa
  mao.write(90);            // Garante que o motor PAROU
}

void reacao1() {
  tampa.write(45, 50, true);  delay(1000);
  moverMao360();              delay(1000);
  tampa.write(90, 50, true);  delay(1000);
}

void reacao2() {
  tampa.write(45, 30, true);  delay(1000);
  moverMao360();              delay(100);
  tampa.write(90);
}

void reacao3() {
  tampa.write(30, 60, true);  delay(200);
  moverMao360();              delay(100);
  tampa.write(90);
}

void reacao4() {
  delay(250);
  tampa.write(20, 60, true);  delay(100);
  moverMao360();              delay(500);
  tampa.write(90);
}

void reacao5() {
  tampa.write(50, 60, true);  delay(500);
  tampa.write(90, 80, true);  delay(1000);
  tampa.write(50, 60, true);  delay(500);
  tampa.write(90, 80, true);  delay(1000);
  tampa.write(50, 60, true);  delay(500);
  tampa.write(90, 80, true);  delay(2500);
  tampa.write(30, 60, true);  delay(100);
  moverMao360();              delay(100);
  tampa.write(90);
}

void reacao6() {
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(250); tampa.write(90, 80, true); delay(250);
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(250); tampa.write(90, 80, true); delay(250);
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(250); tampa.write(90, 80, true); delay(250);
  tampa.write(25, 60, true);  delay(100); moverMao360(); delay(100); tampa.write(90);
}

void reacao7() {
  tampa.write(20, 60, true);  delay(300);
  tampa.write(60, 60, true);  delay(200);
  tampa.write(20, 60, true);  delay(200);
  tampa.write(60, 60, true);  delay(200);
  tampa.write(20, 60, true);  delay(200);
  tampa.write(60, 60, true);  delay(200);
  delay(1500);
  tampa.write(35, 30, true);  delay(200);
  moverMao360();              delay(500);
  tampa.write(90);
}
