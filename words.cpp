#include "dict.h"
#include "funcs.h"
#include <iostream>


int main(){
        loop();
        if(tentativas >= tmax){
                std::cout << "A resposta era: " << word << '\n';
                std::cout << "GAME OVER" << '\n';
                std::cout << "1- Reiniciar jogo" << '\n';
                std::cout << "2- Sair do jogo" << '\n';
                std::cout << ">> ";
                std::cin >> resp;
                if(resp == 2){
                        abort();
                }
                else if(resp == 1){
                        loop();
                }
        }
        return 0;
}
