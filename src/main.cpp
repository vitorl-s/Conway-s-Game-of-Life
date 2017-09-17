#include "matriz.hpp"
#include <unistd.h>

int main(int argc, char ** argv){

  int i= 0;
  Matriz matriz1;

  matriz1.menu();
  matriz1.setJogo();
  matriz1.insere_Linhas();
  matriz1.insere_Colunas();
  matriz1.setGeracoes();

  cout << "\nDigite a matriz jogo desejada:\n"
       << "Digite 'o' para celula viva e digite ' - ' para celula morta\n";
  matriz1.cria_Matriz();
  matriz1.cria_Matriz(matriz1.getJogo());

  while(i<matriz1.getGeracoes()){
    matriz1.nova_geracao();
    usleep(200000);
    matriz1.imprime_matriz();
    i++;
  }
  return 0;
}
