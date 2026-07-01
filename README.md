# Useless Box Arduino (Caixa Inútil com Personalidade) 🤖📦

Este projeto consiste na montagem e programação de uma **Useless Box** (Caixa Inútil) utilizando a plataforma Arduino. A proposta divertida do projeto é uma caixa que possui um interruptor (chave alavanca) e, toda vez que uma pessoa tenta ligá-la, um braço mecânico interno (mãozinha) sai de dentro da caixa e desliga o interruptor sozinho.

Esta versão foi baseada no kit em MDF da *Usinainfo*, mas conta com **otimizações exclusivas de software e hardware** para tornar o funcionamento mais robusto e simplificado.

> O Código utilizado no arduino UNO se encontra na pasta "CODIGO"
---

## 🚀 Diferenciais desta Versão

* **Sem Terceiro Motor (Versão Compacta):** O projeto original utilizava um terceiro motor para erguer uma bandeira. Esta versão foi simplificada para utilizar apenas **2 servos motores** (Mão e Tampa), economizando espaço interno e simplificando a fiação.
* **7 Reações com Personalidade:** A caixa conta com 7 comportamentos diferentes programados passo a passo (ataques rápidos, hesitações, pausas dramáticas e "tremidas" na tampa).

---

## 🛠️ Componentes Utilizados

|Quantidade|Componente|Valor Unitário|
|:---------|:---------|:-------------|
| 1 | Caixinha MDF da useless box | R$30,00 |
| 1 |  Micro Servo 9g Tower Pro MG90S 180° | R$19,00 |
| 1 | Arduino Uno R3  | Emprestao |
| 1 | Micro Servo Motor 9g SG90 180° | R$68,00 |
| 1 | Protoboard 170 Pontos | R$6,90 |
| 10 | Jumper Premium para Protoboard Macho-Mach | R$7,00 |
| 1 | Chave Alavanca MTS-102 3T 2 Posições | R$9,30 |
| 1 | Jack P4 Plástico | R$5,00 |
| 1 | Fonte de Alimentação Chaveada | R$40,00 |

> Total Gasto: R$185,20

---

## 🔌 Esquema de Ligação (Pinagem)

| Componente | Pino no Arduino | Conexão de Energia |
| :--- | :--- | :--- |
| **Servo da Mão** | Digital 3 (PWM) | Positivo e Negativo na Fonte Externa (6V) |
| **Servo da Tampa**| Digital 5 (PWM) | Positivo e Negativo na Fonte Externa (6V) |
| **Chave Alavanca**| Digital 8 | Pino central no GND / Extremidade no Pino 8 |

> ⚠️ **IMPORTANTE:** O pino GND do Arduino **deve** estar interligado ao pino Negativo (GND) da fonte externa de 6V para garantir o funcionamento correto dos sinais PWM dos servos.

### TinkerCad do Projeto
<img width="768" height="491" alt="caixa-inutil-esquema-de-ligacaoV2-768x491" src="https://github.com/user-attachments/assets/557d12f7-0873-42ac-8926-faf3f6595959" />

---

## 💾 Bibliotecas Necessárias

Para o controle suave de velocidade dos servos motores, este projeto utiliza a biblioteca:
* **[VarSpeedServo](https://github.com/netinvent/VarSpeedServo)** (Necessário instalação manual via arquivo .ZIP na IDE do Arduino).

---

## Como Rodar o Projeto

1. Faça o download ou clone este repositório.
2. Instale a biblioteca `VarSpeedServo` na sua IDE do Arduino.
3. Abra o arquivo `.ino` na IDE e faça o upload para o seu Arduino Uno.
4. Conecte a alimentação externa de 6V para os motores e divirta-se!

---
Desenvolvido para fins de estudo em robótica e lógica de programação com Arduino.
