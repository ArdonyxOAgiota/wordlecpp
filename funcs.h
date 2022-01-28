#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

unsigned short int cont = 0;
int tentativas, tmax, resp;
std::string resposta, word;

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

void loop()
{
        word = palavra(random_num());
        std::cout << "Olá, tente adivinhar qual é a palavra certa. Dica: A palavra tem 5 caracteres" << '\n';
        std::cout << ">> ";
        std::cin >> resposta;
        tmax = 5;
        tentativas = 0;
        if( resposta.size() > 5 ){
                std::cout << "A resposta só tem 5 caracteres" << '\n';
        }
        else{
                if( resposta !=  word){
                        std::cout << "Resposta errada! Pontuação: " << cont << '\n';
                        tentativas++;
                        std::cout << tentativas << '\n';
                }
                else{
                        cont++;
                        std::cout << "Resposta correta! Pontuação: "<< cont << '\n';
                }
        }
        while(tentativas < tmax){
                printf(">> ");
                std::cin >> resposta;
                if(resposta != word){
                        printf("Resposta errada!\n");
                        tentativas++;
                }
        }
}
