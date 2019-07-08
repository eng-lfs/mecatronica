/*///###############################################################################
  *
  * This Code was written all in portuguese
  * Jogo da Forca
  * Criado por: Lucas Felipe - lucas.fstos95@gmail.com
  * Data: 08/07/2019
  *
*///###############################################################################
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>
#include <time.h>

using namespace std;

//FUNÇÃO LIMPA TELA DE EXECUÇÃO DO PROGRAMA
void LimpaTela(){
  system("CLS");
}
//FUNÇÃO PAUSA A EXECUÇÃO DO CÓDIGO
void PausaTela(){
  system("pause");
}
//FUNÇÃO RETORNA UMA PALAVRA ALEATORIA PARA O JOGO
string PalavraAleatoria(){
  //palavras que participam do jogo
  string bancoPalavras[3] = {"abacaxi", "manga", "morango"};
  //indice aleatorios de 0 a 2
  int indice = rand()%3;

  return bancoPalavras[indice];
}
//FUNÇÃO JOGO SOLO
void JogarSozinho(){
  string palavra = PalavraAleatoria();
  cout << "Palavra selecionada: " << palavra;
}
//FUNÇÃO EXIBIÇÃO DO MENU INICIAL
void MenuInicial(){
    //opção selecionada pelo usuario
  int opcao = 0;

  //menu
  while(opcao<1 || opcao>3){
    //limpa tela antes da impressão
    LimpaTela();
    cout << "===== Bem-vindo ao jogo =====" << endl;
    cout << "1) Jogar" << endl;
    cout << "2) Sobre" << endl;
    cout << "3) Sair" << endl;
    cout << "\nDigite uma opcao e aperte ENTER: ";
    cin >> opcao;

    switch(opcao){
      case 1:
        cout << "Jogo iniciado!" << endl;
        JogarSozinho();
        break;
      case 2:
        cout << "Sobre o jogo!" << endl;
        break;
      case 3:
        cout << "Sair do jogo!" <<endl;
        break;
      default:
        //JogarSozinho();
        break;
    }
  }
}


int main(){
  //função gera numeros aleatorios para função rand()
  srand((unsigned)time(NULL));

  MenuInicial();

  return 0;
}
