#include "matriz.hpp"
#include "block.hpp"
#include "glider.hpp"
#include "blinker.hpp"
#include "gosper_glider_gun.hpp"
#include <unistd.h>

int main(int argc, char ** argv){

  int i= 0;
  Matriz matriz1;
  Block block;
  Glider glider;
  Blinker blinker;
  Gosper_glider gosper_glider;

  matriz1.menu();
  matriz1.setJogo();
  matriz1.insere_Linhas();
  matriz1.insere_Colunas();
  matriz1.setGeracoes();

  if (matriz1.getJogo() == 5){
    cout << "\nDigite a matriz jogo desejada:\n"
         << "Digite 'o' para celula viva e digite ' - ' para celula morta\n";
         matriz1.cria_Matriz();
  }
  matriz1.cria_Matriz(matriz1.getJogo());

  while(i<matriz1.getGeracoes()){
    matriz1.nova_geracao();
    usleep(210000);
    matriz1.imprime_matriz();
    i++;
  }
  return 0;
}
