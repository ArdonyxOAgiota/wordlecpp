#include "dict.h"
#include "funcs.h"
#include <iostream>
using namespace std;


int main(){
        loop();
        if(tentativas >= tmax){
                cout << "GAME OVER" << '\n';
                cout << "1- Reiniciar jogo" << '\n';
                cout << "2- Sair do jogo" << '\n';
                cout << ">> ";
                cin >> resp;
                if(resp == 2){
                        abort();
                }
                else if(resp == 1){
                        loop();
                }
        }
        return 0;
}
