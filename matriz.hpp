#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Matriz{

  private:
    char matriz[80][80];
    char prox_geracao[80][80];
    int quantidade_linhas;
    int quantidade_colunas;
    int geracoes;
    bool cel_viva;
    bool cel_morta;


  public:
    Matriz();

    char jogo_desejado;
    int quantidade_geracoes;


    int escolher_forma();
    void insere_Linhas();
    int  getLinhas();
    void insere_Colunas();
    int getColunas();
    void cria_Matriz();
    int conta_vizinhos(int i , int j);
    void inserir_celula(int i , int j , char estado);
    void nova_geracao();
    void copia_matriz(char matriz1[80][80], char matriz2[80][80]);
    void imprime_matriz();

};
#endif
