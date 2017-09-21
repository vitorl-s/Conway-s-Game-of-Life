#include "matriz.hpp"
#include "block.hpp"
#include "glider.hpp"
#include "blinker.hpp"
#include "gosper_glider_gun.hpp"
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char ** argv){

  int i= 0;
  Matriz matriz1,memoria;
  Block block;
  Glider glider;
  Blinker blinker;
  Gosper_glider gosper_glider;

  matriz1.menu();
  matriz1.setJogo();
  matriz1.insere_Linhas();
  matriz1.insere_Colunas();

  if (matriz1.getJogo() == 1){
    matriz1 = block;
  }
  else if (matriz1.getJogo() == 2){
    matriz1 = blinker;
  }
  else if (matriz1.getJogo() == 3){
    matriz1 = glider;
  }
  else if (matriz1.getJogo() == 4){
    matriz1 = gosper_glider;
  }
  matriz1.setGeracoes();
  if (matriz1.getJogo() == 5){
    cout << "\nDigite a matriz jogo desejada:\n"
         << "Digite 'o' para celula viva e digite ' - ' para celula morta\n";
         matriz1.cria_Matriz();
  }

  while(i<matriz1.getGeracoes()){
    matriz1.nova_geracao();
    usleep(210000);
    system("clear");
    matriz1.imprime_matriz();
    i++;
  }
  return 0;
}
