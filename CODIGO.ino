// =======================================================================================
//   USELESS BOX ARDUINO - VERSÃO ATUALIZADA (SEM BANDEIRA)
//   Adaptado para Servo da Mão com Rotação Contínua (360°) e controle de tempo independente
// =======================================================================================

#include <VarSpeedServo.h>

VarSpeedServo mao;
VarSpeedServo tampa;

// ---------------------------------------------------------------------------------------
// 🎛️ SEÇÃO DE AJUSTES E CALIBRAÇÃO DE TEMPO DA MÃOZINHA (360°)
// ---------------------------------------------------------------------------------------
// Se a mão não alcançar o interruptor, aumente o 'tempoSubida'.
// Se a mão voltar demais e bater no fundo da caixa, diminua o 'tempoDescida'.
int tempoSubida  = 260;  // <-- AJUSTE AQUI: Tempo (em ms) girando para FORA
int tempoDescida = 275;  // <-- AJUSTE AQUI: Tempo (em ms) girando para DENTRO

int alavanca = 8;
int reacao = 1;
int angulo = 0;

void setup() {
  pinMode(alavanca, INPUT_PULLUP);
  
  // Se houver qualquer conflito de movimento nos pinos 3 e 5, 
  // mude os fios e os números aqui para 9 e 10.
  mao.attach(3);   
  tampa.attach(5); 
  
  mao.write(90);   // Nos servos 360°, o valor 90 significa TOTALMENTE PARADO
  tampa.write(90); // Posição da tampa fechada
}

void loop() {
  if (digitalRead(alavanca) == LOW) {
    if (reacao > 7) {
      reacao = 1;
    }
    
    // Executa a reação correspondente da rodada
    if      (reacao == 1) reacao1();
    else if (reacao == 2) reacao2();
    else if (reacao == 3) reacao3();
    else if (reacao == 4) reacao4();
    else if (reacao == 5) reacao5();
    else if (reacao == 6) reacao6();
    else if (reacao == 7) reacao7();
    
    reacao += 1;

    // Trava de segurança antiloop: Espera a alavanca voltar fisicamente para o estado inicial
    while (digitalRead(alavanca) == LOW) {
      delay(10);
    }
    delay(200);
  }
}

// ---------------------------------------------------------------------------------------
// 🦾 FUNÇÃO PADRÃO DE MOVIMENTAÇÃO DA MÃO 360°
// ---------------------------------------------------------------------------------------
void moverMao360() {
  mao.write(0);             // Gira para empurrar a alavanca para fora
  delay(tempoSubida);       // Aguarda o tempo programado de subida
  mao.write(180);           // Inverte totalmente o sentido para recolher
  delay(tempoDescida);      // Aguarda o tempo programado de descida
  mao.write(90);            // Comando de freio: Para o motor completamente
}

// ---------------------------------------------------------------------------------------
// 🎭 REAÇÕES E COMPORTAMENTOS (PERSONALIDADE)
// ---------------------------------------------------------------------------------------

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
