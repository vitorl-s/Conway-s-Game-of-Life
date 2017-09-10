#include "matriz.hpp"
#include <iostream>

Matriz::Matriz(){
   matriz[0][0];
   prox_geracao[80][80];
   quantidade_linhas= 0 ;
   quantidade_colunas= 0 ;
   quantidade_geracoes = 0;
   cel_viva = 1;
   cel_morta = 0;
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

  int linhas = getLinhas();
  int colunas = getColunas();

  for(int i=0 ; i<linhas ; i++){
    for(int j=0; j<colunas ; j++){
      cin >> matriz[i][j] ;
    }
  }

}

void Matriz::imprime_matriz(){
  int linhas = getLinhas();
  int colunas = getColunas();

cout << "\n";


  for(int i=0 ; i<linhas ; i++){
    for(int j=0; j<colunas ; j++){
      cout << prox_geracao[i][j] ;
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
  int i=0;
  int j=0;

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
