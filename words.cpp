#include "dict.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

unsigned short int cont = 0;

// Gera o numero aleatorio
int random_num()
{
  int len = sizeof(dict)/sizeof(dict[0]);
  std::srand(time(0));
  int num = rand() % len;
  return num;
}
// Retorna uma palavra aleatória do dicionário baseada no numero aleatório
std::string palavra(int num)
{
  std::string word = dict[num];
  return word;
}

int main(){
  int tentativas, tmax;
  tmax = 5;
  tentativas = 0;
  string resposta, word;
  word = palavra(random_num());
	cout << "Olá, tente adivinhar qual é a palavra certa. Dica: A palavra tem 5 caracteres" << '\n';
	cout << ">> ";
	cin >> resposta;
	
	if( resposta.size() > 5 ){
		cout << "A resposta só tem 5 caracteres" << '\n';
	}
	else{
	  if( resposta !=  word){
		cout << "Resposta errada! Pontuação: " << cont << '\n';
		tentativas++;
		cout << tentativas << '\n';
		}
		else{
                        cont++;
			cout << "Resposta correta! Pontuação: "<< cont << '\n';
		}
	}
	while(tentativas < tmax){
	printf(">> ");
	cin >> resposta;
		if(resposta != word){
		printf("Resposta errada!\n");
		tentativas++;
		}
	}
	if(tentativas >= tmax){
	cout << "GAME OVER" << '\n';
	int resp;
	cout << "1- Reiniciar jogo" << '\n';
	cout << "2- Sair do jogo" << '\n';
	cout << ">> ";
	cin >> resp;
	if(resp = 2){
		abort();
		}
	else if(resp = 1){

		}
	}
	return 0;
}
