#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
using namespace std;

class Matriz{

  private:
    char matriz[80][80];
    int quantidade_linhas;
    int quantidade_colunas;
    int geracoes;
    bool cel_viva;
    bool cel_morta;


  public:
    Matriz();

    char jogo_desejado;
    int escolher_forma();
    void insere_Linhas();
    int  getLinhas();
    void insere_Colunas();
    int getColunas();
    void cria_Matriz();
    void cria_Matriz(int quantidade_linhas, int quantidade_colunas);
    void verifica_regras();
    void atualiza_matriz();
    void imprime_matriz();

};
#endif
