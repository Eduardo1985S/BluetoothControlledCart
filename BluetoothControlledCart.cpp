//PROGRAMA BASE CARRINHO BLUETOOTH

//USAR PINOS CONFORME ENDEREÇAMENTO ABAIXO

//Definição do uso dos pinos do Arduino
#define pinMotor1A     2 //vd
#define pinMotor1B     3 //az
#define pinMotor2A     5 //br
#define pinMotor2B     4 //cz

#define pinBtRx        6  //vd
#define pinBtTx        7  //az

//Biblioteca para comunicação com módulo Bluetooth
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(pinBtRx, pinBtTx); // RX, TX

//Declaração das variaveis para Controle do Motor
int velocidade = 0;
bool sentido = 1;
int estado = 0;

//Configuração do projeto no Arduino
void setup() {
  //Configura o estado das portas do Arduino
  pinMode(pinMotor1A, OUTPUT);
  pinMode(pinMotor1B, OUTPUT);
  pinMode(pinMotor2A, OUTPUT);
  pinMode(pinMotor2B, OUTPUT);
  


  //Inicia a comunicação serial para monitorar o que está acontecendo pelo monitor serial
  Serial.begin(9600);

  //Inicia a cominicação serial com o módulo bluetooth
  bluetooth.begin(9600);


}

void loop() {
char recebido;

  //Teste do Bluetooth
  if (bluetooth.available()) {
    recebido = bluetooth.read();
    Serial.write(recebido);
    Serial.println("- ");
     } 
          if (recebido == 'F') {   // MOVIMENTO PARA FRENTE 
     
       digitalWrite(pinMotor1A, HIGH);
       digitalWrite(pinMotor1B, LOW);
       digitalWrite(pinMotor2A, HIGH);
       digitalWrite(pinMotor2B, LOW);
    }

     else if (recebido == 'B') {   // MOVIMENTO PARA TRÁS (RÉ)
     
       digitalWrite(pinMotor1A, LOW);
       digitalWrite(pinMotor1B, HIGH);
       digitalWrite(pinMotor2A, LOW);
       digitalWrite(pinMotor2B, HIGH);

     }else if (recebido == 'L') {   // MOVIMENTO PARA ESQUERDA
     
       digitalWrite(pinMotor1A, LOW);
       digitalWrite(pinMotor1B, LOW);
       digitalWrite(pinMotor2A, HIGH);
       digitalWrite(pinMotor2B, LOW);

     }  else if (recebido == 'R') {   // MOVIMENTO PARA DIREITA 
     
       digitalWrite(pinMotor1A, HIGH);
       digitalWrite(pinMotor1B, LOW);
       digitalWrite(pinMotor2A, LOW);
       digitalWrite(pinMotor2B, LOW);
    
    } 

    else if (recebido == 'S') {   // PARADO
     
       digitalWrite(pinMotor1A, LOW);
       digitalWrite(pinMotor1B, LOW);
       digitalWrite(pinMotor2A, LOW);
       digitalWrite(pinMotor2B, LOW);
    
    } 
    
}
  
