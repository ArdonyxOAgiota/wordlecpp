#include <cstring>
#include "dict.h"
#include <math.h>
#include <string>
int main(){
	int num = rand() % 39; 
	std::string plvr = dict[num];
	char pala[6];
	char anwser[6];
	std::cin.getline(anwser, 6);
	char *ptr;
	ptr = std::strtok(anwser, " ");
	if(anwser[0] == plvr[0]){
		std::cout << "Primeira letra ✓" << '\n';
	}
	if(anwser[1] == plvr[1]){
		std::cout << "Segunda letra ✓" << '\n';
	}
	if(anwser[2] == plvr[2]) {
		std::cout << "Terceira letra ✓" << '\n';
	}
	if(anwser[3] == plvr[3]) {
		std::cout << "Quarta letra ✓" << '\n';
	}
	if(anwser[4] == plvr[4]) {
		std::cout << "Quinta letra ✓" << '\n';
	}
	else{
		std::cout << "Parece que nenhuma das letras está presente na palavra correta :(" << '\n';
	}
}
