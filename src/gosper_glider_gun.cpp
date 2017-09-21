#include "gosper_glider_gun.hpp"
#include "matriz.hpp"

Gosper_glider::Gosper_glider(){

  setJogo(4);
  insere_Linhas(27);
  insere_Colunas(40);

  insere_jogo(4, 0, 'o');
  insere_jogo(1, 1, 'o');
  insere_jogo(5, 0, 'o');
  insere_jogo(5, 1, 'o');
  insere_jogo(4, 10, 'o');
  insere_jogo(5, 10, 'o');
  insere_jogo(6, 10, 'o');
  insere_jogo(3, 11, 'o');
  insere_jogo(7, 11, 'o');
  insere_jogo(8, 12, 'o');
  insere_jogo(8, 13, 'o');
  insere_jogo(2, 12, 'o');
  insere_jogo(2, 13, 'o');
  insere_jogo(5, 14, 'o');
  insere_jogo(7, 15, 'o');
  insere_jogo(3, 15, 'o');
  insere_jogo(4, 16, 'o');
  insere_jogo(5, 16, 'o');
  insere_jogo(6, 16, 'o');
  insere_jogo(5, 17, 'o');
  insere_jogo(2, 20, 'o');
  insere_jogo(3, 20, 'o');
  insere_jogo(4, 20, 'o');
  insere_jogo(2, 21, 'o');
  insere_jogo(3, 21, 'o');
  insere_jogo(4, 21, 'o');
  insere_jogo(1, 22, 'o');
  insere_jogo(5, 22, 'o');
  insere_jogo(6, 24, 'o');
  insere_jogo(5, 24, 'o');
  insere_jogo(1, 24, 'o');
  insere_jogo(0, 24, 'o');
  insere_jogo(2, 34, 'o');
  insere_jogo(2, 35, 'o');
  insere_jogo(3, 34, 'o');
  insere_jogo(3, 35, 'o');
}

Gosper_glider::~Gosper_glider(){
}
