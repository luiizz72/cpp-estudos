#include <iostream>
using namespace std;

int main() {

    cout << "**************************************" << endl;
    cout << "* Bem Vindo ao Jogo da Adivinhacao! *" << endl;
    cout << "**************************************" << endl;

    cout << "Qual o nivel de dificuldade?" << endl;
    cout << "1 - Facil (1 a 100)" << endl;
    cout << "2 - Medio (1 a 30)" << endl;
    cout << "3 - Dificil (1 a 5)" << endl;
    cout << "Escolha: ";

  char dificuldade;
  cin >> dificuldade;

  int tentativa_Limite;

  if (dificuldade == 'F') {
    tentativa_Limite = 100;
  } else if (dificuldade == 'M') {
    tentativa_Limite = 30;
  } else {
    tentativa_Limite = 5;
  }


    const int NUMERO_SECRETO = 42;

    bool nao_acerto = true;
    int tentativas = 0;

   double pontos = 1000.0;

   for (tentativas = 1; tentativas <= tentativa_Limite; tentativas++) {
    

  while (nao_acerto) {  
     int chute;
     cout << "Tentativa " << tentativas << endl;
  cout << "Qual e o seu chute? ";
  cin >> chute;

 double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
 pontos = pontos - pontos_perdidos;

  cout << "O numero chutado foi " << chute << endl;
 

  bool acertou = chute == NUMERO_SECRETO;
  bool Maior = chute > NUMERO_SECRETO;
  
  if (acertou) {
    cout << "Parabens! Voce acertou!" << endl;
    nao_acerto = false;
  } else if (Maior) {
    cout << "Seu chute foi maior que o numero secreto!" << endl;
  } else {
    cout << "Seu chute foi menor que o numero secreto!" << endl;
  }
  }

  cout << "Fim de jogo!" << endl;
  if (nao_acerto) {
    cout << "Voce perdeu!" << endl;
  } else {
  cout << "Voce acertou em " << tentativas << " tentativas!" <<endl;
  cout.precision(2);
  cout << fixed;
  cout << "Sua pontuacao final foi de " << pontos << " pontos!" << endl;
}
 }
}