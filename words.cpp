#include <iostream>
using namespace std;

int main(){
	string resposta;
	cout << "Olá, tente adivinhar qual é a palavra certa. Dica: A palavra tem 5 caracteres" << '\n';
	cout << ">> ";
	//Criando um local pro usuario digitar
	cin >> resposta;
	//Checando se a resposta tem mais de 5 caracteres
	if( resposta.size() > 5 ){
		cout << "A resposta só tem 5 caracteres" << '\n';
	}
	else{
		//Checando se a resposta está errada
		if( resposta != "zebra" ){
			cout << "Resposta errada!" << '\n';
		}
		else{
			cout << "Resposta correta!" << '\n';
		}
	}
	cout << resposta << '\n';
	return 0;
}
