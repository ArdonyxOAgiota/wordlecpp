#include <cstdlib>
#include <cstring>
#include "dict.h"
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>

int main(){
	srand ( time(NULL) );
	int num = rand() % 39; 
	std::string plvr = dict[num];
	char pala[6];
	char anwser[6];
	char *ptr;
	int tentativas = 0;
	bool aumento = true;
	std::vector<int> letras = {0, 0, 0, 0, 0};
	std::cout << plvr << '\n';
	while(tentativas < 4){
		aumento = true;
		//Jogo em si
		std::cin.getline(anwser, 6);
		ptr = std::strtok(anwser, " ");
		if(anwser[0] == plvr[0]){
			std::cout << "Primeira letra ✓" << '\n';
			letras[0] = 1;
		}
		if(anwser[1] == plvr[1]){
			std::cout << "Segunda letra ✓" << '\n';
			letras[1] = 1;
		}
		if(anwser[2] == plvr[2]) {
			std::cout << "Terceira letra ✓" << '\n';
			letras[2] = 1;
		}
		if(anwser[3] == plvr[3]) {
			std::cout << "Quarta letra ✓" << '\n';
			letras[3] = 1;
		}
		if(anwser[4] == plvr[4]) {
			std::cout << "Quinta letra ✓" << '\n';
			letras[4] = 1;
		}
		else if(std::all_of(letras.begin(), letras.end(), [](int x){return x == 0;})){
			std::cout << "Parece que nenhuma das letras está presente na palavra correta :(" << '\n';
		}

		//Sistema de tentativas
		if(std::all_of(letras.begin(), letras.end(), [](int x){return x == 1;})){
			std::cout << "Parabéns! Você acertou" << '\n';
			abort();
		}
		else{
			if(aumento == true)
				tentativas++;
		}
	}
	std::cout << "Tentativas: " << tentativas << '\n';
}
