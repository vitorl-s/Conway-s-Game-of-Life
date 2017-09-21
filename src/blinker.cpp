#include "blinker.hpp"
#include "matriz.hpp"


Blinker::Blinker(){
  setJogo(2);
  insere_Linhas(20);
  insere_Colunas(20);

  insere_jogo(4, 4, 'o');
  insere_jogo(4, 5, 'o');
  insere_jogo(4, 6, 'o');
  insere_jogo(11, 9, 'o');
  insere_jogo(11, 10, 'o');
  insere_jogo(11, 11, 'o');
}

Blinker::~Blinker(){

}
