#include "matriz.hpp"
#include <unistd.h>


int main(int argc, char ** argv){

int i= 0;
Matriz matriz1;

matriz1.insere_Linhas();
matriz1.insere_Colunas();
cout << "Quantas gerações você deseja?: ";
cin >> matriz1.quantidade_geracoes;
cout << "Digite a matriz jogo desejada:\n";
matriz1.cria_Matriz();

while(i<matriz1.quantidade_geracoes){
  matriz1.nova_geracao();
  usleep(199000);
  matriz1.imprime_matriz();
  i++;
}






  return 0;
}
