#include "dict.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

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
  string resposta, word;
  word = palavra(random_num());
	cout << "Olá, tente adivinhar qual é a palavra certa. Dica: A palavra tem 5 caracteres" << '\n';
	cout << ">>\t";
	cin >> resposta;
	
	if( resposta.size() > 5 ){
		cout << "A resposta só tem 5 caracteres" << '\n';
	}
	else{
	  if( resposta !=  word){
		cout << "Resposta errada!" << "A resposta certa é: " << word << '\n';
		}
		else{
			cout << "Resposta correta!" << '\n';
		}
	}
	return 0;
}

