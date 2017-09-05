#include "matriz.hpp"


int main(int argc, char ** argv){

Matriz matriz1;

matriz1.insere_Linhas();
matriz1.insere_Colunas();
matriz1.cria_Matriz();

for(int i=0 ; i < matriz1.getLinhas();i++){
  cout << i;
  for(int j=0; j < matriz1.getColunas();j++){
    cout << "2";
  }
  cout << "\n";
}



  return 0;
}
