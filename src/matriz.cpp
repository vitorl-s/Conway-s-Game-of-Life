#include "matriz.hpp"
#include <iostream>

Matriz::Matriz(){
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
  if(jogo_desejado == 5){
  cout << "Digite a quantidade de linhas desejadas: ";
  cin >> quantidade_linhas;
  this -> quantidade_linhas= quantidade_linhas;
  }
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

void Matriz::cria_Matriz(){

  if(jogo_desejado == 5){


    int linhas = getLinhas();
    int colunas = getColunas();

    for(int i=0 ; i<linhas ; i++){
      for(int j=0; j<colunas ; j++){
        cin >> matriz[i][j] ;
      }
    }
  }
}

void Matriz::cria_Matriz(int linhas, int colunas , int jogo_desejado){

    for(int i=0 ; i<linhas ; i++){
      for(int j=0; j<colunas ; j++){
        matriz[i][j] = '-' ;
      }
    }

    if(jogo_desejado == 1){
      matriz[4][4] = 'o';
      matriz[4][5] = 'o';
      matriz[5][4] = 'o';
      matriz[5][5] = 'o';

      matriz[10][10] = 'o';
      matriz[10][11] = 'o';
      matriz[11][10] = 'o';
      matriz[11][11] = 'o';
  }
  else if(jogo_desejado == 2){
    matriz[4][4] = 'o';
    matriz[4][5] = 'o';
    matriz[4][6] = 'o';

    matriz[11][9] = 'o';
    matriz[11][10] = 'o';
    matriz[11][11] = 'o';
  }
  else if(jogo_desejado == 3){
    matriz[4][4] = 'o';
    matriz[5][5] = 'o';
    matriz[5][6] = 'o';
    matriz[6][4] = 'o';
    matriz[6][5] = 'o';

  }
  else if(jogo_desejado == 4){
    matriz[5][4] = 'o';
    matriz[5][5] = 'o';
    matriz[6][4] = 'o';
    matriz[6][5] = 'o';
    matriz[4][10] = 'o';
    matriz[5][10] = 'o';
    matriz[6][10] = 'o';
    matriz[3][11] = 'o';
    matriz[7][11] = 'o';
    matriz[8][12] = 'o';
    matriz[8][13] = 'o';
    matriz[2][12] = 'o';
    matriz[2][13] = 'o';
    matriz[5][14] = 'o';
    matriz[7][15] = 'o';
    matriz[3][15] = 'o';
    matriz[4][16] = 'o';
    matriz[5][16] = 'o';
    matriz[6][16] = 'o';
    matriz[5][17] = 'o';
    matriz[2][20] = 'o';
    matriz[3][20] = 'o';
    matriz[4][20] = 'o';
    matriz[2][21] = 'o';
    matriz[3][21] = 'o';
    matriz[4][21] = 'o';
    matriz[1][22] = 'o';
    matriz[5][22] = 'o';
    matriz[6][24] = 'o';
    matriz[5][24] = 'o';
    matriz[1][24] = 'o';
    matriz[0][24] = 'o';
    matriz[2][34] = 'o';
    matriz[2][35] = 'o';
    matriz[3][34] = 'o';
    matriz[3][35] = 'o';


  }

}


void Matriz::imprime_matriz(){

  int linhas = getLinhas();
  int colunas = getColunas();

  if(jogo_desejado != 5){
    linhas = 40;
    colunas = 40;
  }

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

  if(jogo_desejado != 5){
    linhas = 40;
    colunas = 40;
  }

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

  if(jogo_desejado != 5){
    i = 40;
    j = 40;
  }

  for(i=0;i<80;i++){
    for(j=0;j<80;j++){
      matriz2[i][j] = matriz1[i][j];
    }
  }
}
