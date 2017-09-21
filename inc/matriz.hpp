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
    int jogo_desejado;
    int quantidade_geracoes;
  public:
    Matriz();

    void menu();
    void insere_Linhas();
    void insere_Linhas(int quantidade_linhas);
    int  getLinhas();
    void insere_Colunas();
    void insere_Colunas(int quantidade_colunas);
    int getColunas();
    int getJogo();
    int getMatriz(int i, int j);
    void setJogo();
    void setJogo(int jogo_desejado);
    int getGeracoes();
    void setGeracoes();
    void cria_Matriz();
    void insere_jogo(int i,int j , char estado);
    int conta_vizinhos(int i , int j);
    void inserir_celula(int i , int j , char estado);
    void nova_geracao();
    void copia_matriz(char matriz1[80][80], char matriz2[80][80]);
    void imprime_matriz();

};
#endif
