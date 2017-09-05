#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
using namespace std;

class Matriz{

  private:
    char matriz[0][0];
    int quantidade_linhas;
    int quantidade_colunas;
  public:
    Matriz();

    void insere_Linhas();
    int  getLinhas();
    void insere_Colunas();
    int getColunas();
    void cria_Matriz();


};
#endif
