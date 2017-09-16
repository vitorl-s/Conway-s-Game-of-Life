#include "matriz.hpp"
#include <unistd.h>

int main(int argc, char ** argv){

int i= 0;
Matriz matriz1;

cout<<"Bem-vindo(a) ao Jogo da vida! Selecione um jogo com posicoes pré definidas"
        << " ou configure a sua matriz da forma que quiser!\n\n"
        << "Digite 1 para jogar com Blocks\n"
        << "Digite 2 para jogar com Blinkers\n"
        << "Digite 3 para jogar com Gliders\n"
        << "Digite 4 para jogar com a Gosper Glider Gun\n"
        << "Digite 5 para configurar a sua matriz de forma livre\n";

cin >> matriz1.jogo_desejado;

matriz1.insere_Linhas();
matriz1.insere_Colunas();

cout << "\nQuantas gerações você deseja?: ";
cin >> matriz1.quantidade_geracoes;
cout << "\nDigite a matriz jogo desejada:\n"
      <<"Digite 'o' para celula viva e digite ' - ' para celula morta\n";
matriz1.cria_Matriz();

if(matriz1.jogo_desejado == 4){
  matriz1.cria_Matriz(40,40,4);
}

while(i<matriz1.quantidade_geracoes){
  matriz1.imprime_matriz();
  matriz1.nova_geracao();
  usleep(210000);
  matriz1.imprime_matriz();
  i++;
}
  return 0;
}
