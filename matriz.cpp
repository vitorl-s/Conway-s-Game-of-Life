#include "matriz.hpp"
#include <iostream>

Matriz::Matriz(){
   matriz[0][0];
   quantidade_linhas=0 ;
   quantidade_colunas=0 ;
   geracoes = 0;
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
      cout << matriz[i][j] ;
    }
    cout << "\n";
  }

}

void Matriz::verifica_regras(){
  int linhas = getLinhas();
  int colunas = getColunas();
  int vizinhos =0;

  for(int i=0;i<linhas;i++){
    for(int j=0;j<colunas;j++){
      for(int k=0;k<3;k++){
        for(int l=0; l<3; l++){
          if(matriz[i+k][j+l] == 'o'){
            vizinhos++;
          }
        }
      }
        if(vizinhos < 2){
          matriz[i][j] = '-';
        }
        if(vizinhos > 3){
          matriz[i][j] = '-';
        }
        if(vizinhos == 3 && matriz[i][j] == '-' ){
          matriz[i][j] = 'o';
        }
        if((vizinhos == 2 || vizinhos == 3) && matriz[i][j] == 'o'){
          matriz[i][j] = 'o';
        }
        vizinhos =0;
    }
  }

}
