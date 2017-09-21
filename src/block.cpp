#include "block.hpp"
#include "matriz.hpp"


Block::Block(){
  setJogo(1);
  insere_Linhas(20);
  insere_Colunas(20);

  insere_jogo(4, 4, 'o');
  insere_jogo(4, 5, 'o');
  insere_jogo(5, 4, 'o');
  insere_jogo(5, 5, 'o');
  insere_jogo(10, 10,'o');
  insere_jogo(10, 11,'o');
  insere_jogo(11, 10,'o');
  insere_jogo(11, 11,'o');
}

Block::~Block(){
}
