#include "matriz.hpp"
#include <iostream>

Matriz::Matriz(){
   quantidade_linhas= 1 ;
   quantidade_colunas= 1 ;
   quantidade_geracoes = 1;

   for(int i=0 ; i<80 ; i++){
     for(int j=0; j<80 ; j++){
       matriz[i][j] = '-' ;
     }
   }

}
void Matriz::menu(){
  cout<<"Bem-vindo(a) ao Jogo da vida! Selecione um jogo com posicoes pré definidas"
      << " ou configure a sua matriz da forma que quiser!\n\n"
      << "Digite 1 para jogar com Blocks\n"
      << "Digite 2 para jogar com Blinkers\n"
      << "Digite 3 para jogar com Gliders\n"
      << "Digite 4 para jogar com a Gosper Glider Gun\n"
      << "Digite 5 para configurar a sua matriz de forma completamente livre\n";
}

int Matriz::getLinhas(){
  return quantidade_linhas;
}

void Matriz::insere_Linhas(){
  if(jogo_desejado == 5){
  cout << "Digite a quantidade de linhas desejadas: ";
  cin >> quantidade_linhas;
  this -> quantidade_linhas= quantidade_linhas;
  }
}

void Matriz::insere_Linhas(int quantidade_linhas){
  this -> quantidade_linhas = quantidade_linhas ;
}

int Matriz::getColunas(){
  return quantidade_colunas;
}

void Matriz::insere_Colunas(){
  if(jogo_desejado == 5){
  cout << "Digite a quantidade de colunas desejadas: ";
  cin >> quantidade_colunas;
  this -> quantidade_colunas = quantidade_colunas;
  }
}

void Matriz::insere_Colunas(int quantidade_colunas){
  this -> quantidade_colunas = quantidade_colunas;
}

int Matriz::getJogo(){
  return jogo_desejado;
}

void Matriz::setJogo(){
  cin >> jogo_desejado;
  this -> jogo_desejado = jogo_desejado;
}

void Matriz::setJogo(int jogo_desejado){
  this -> jogo_desejado = jogo_desejado;
}

int Matriz::getGeracoes(){
  return quantidade_geracoes;
}

void Matriz::setGeracoes(){
  cout << "\nQuantas gerações você deseja?: ";
  cin >> quantidade_geracoes;
  this -> quantidade_geracoes = quantidade_geracoes;
}

void Matriz::cria_Matriz(){

  if(getJogo() == 5){
    int linhas = getLinhas();
    int colunas = getColunas();

    for(int i=0 ; i<linhas ; i++){
      for(int j=0; j<colunas ; j++){
        cin >> matriz[i][j] ;
      }
    }
  }
}

void Matriz::imprime_matriz(){

  int linhas = getLinhas();
  int colunas = getColunas();

  if(jogo_desejado != 5){
    linhas = 20;
    colunas = 20;
  } if(jogo_desejado == 4){
    linhas = 27;
    colunas = 40;
  }
  cout << "\n";

  for(int i=0 ; i<linhas ; i++){
    for(int j=0; j<colunas ; j++){
      cout << prox_geracao[i][j] ;
      cout << " ";
    }
    cout << "\n";
  }
}

int Matriz::conta_vizinhos(int i, int j){

 int vizinhos = 0;

 if (matriz[i-1][j-1] == 'o')
   vizinhos++;
 if (matriz[i-1][j] == 'o')
   vizinhos++;
 if (matriz[i-1][j+1] == 'o')
   vizinhos++;
 if (matriz[i][j-1] == 'o')
   vizinhos++;
 if (matriz[i][j+1] == 'o')
   vizinhos++;
 if (matriz[i+1][j-1] == 'o')
   vizinhos++;
 if (matriz[i+1][j] == 'o')
   vizinhos++;
 if (matriz[i+1][j+1] == 'o')
   vizinhos++;

  return vizinhos;
}

void Matriz::inserir_celula(int i , int j , char estado){

  if(estado == 'o')
    prox_geracao[i][j] = 'o';
  else
    prox_geracao[i][j] = '-';
}

void Matriz::nova_geracao(){
  int linhas = getLinhas();
  int colunas = getColunas();
  int j= 0;
  int i= 0;

copia_matriz(matriz,prox_geracao);
  for(i=0;i<linhas;i++){
    for(j=0;j<colunas;j++){
      if(matriz[i][j] == 'o'){
        if (conta_vizinhos(i,j) < 2)
          inserir_celula(i,j,'-');
        else if (conta_vizinhos(i,j) > 3)
          inserir_celula(i,j,'-');
        else
          inserir_celula(i,j,'o');
        }
        else{
          if (conta_vizinhos(i,j) == 3)
            inserir_celula(i,j,'o');
          else
            inserir_celula(i,j,'-');
        }
    }
  }
 copia_matriz(prox_geracao,matriz);
}

void Matriz::copia_matriz(char matriz1[80][80], char matriz2[80][80]){
  int i,j = 0;

    for(i=0;i<80;i++){
      for(j=0;j<80;j++){
        matriz2[i][j] = matriz1[i][j];
      }
    }
}

void Matriz::insere_jogo(int i,int j , char estado){
    matriz[i][j] = estado;
}
