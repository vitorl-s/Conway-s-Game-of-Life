#include "matriz.hpp"

Matriz::Matriz(){
  char matriz[0][0] ;
  int quantidade_linhas=0 ;
  int quantidade_colunas=0 ;
}

int Matriz::getLinhas(){
  return quantidade_linhas;
}

void Matriz::insere_Linhas(){
  cout << "Digite a quantidade de linhas desejadas: ";
  cin >> quantidade_linhas;
  this -> quantidade_linhas= quantidade_linhas;
}

int Matriz::getColunas(){
  return quantidade_colunas;
}

void Matriz::insere_Colunas(){
  cout << "Digite a quantidade de colunas desejadas: ";
  cin >> quantidade_colunas;
  this -> quantidade_colunas = quantidade_colunas;
}

void Matriz::cria_Matriz(){
  matriz [quantidade_linhas][quantidade_colunas];
}
