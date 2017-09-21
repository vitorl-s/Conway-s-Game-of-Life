#include "glider.hpp"
#include "matriz.hpp"

Glider::Glider(){
  setJogo(3);
  insere_Linhas(20);
  insere_Colunas(20);

  insere_jogo(4, 4, 'o');
  insere_jogo(5, 5, 'o');
  insere_jogo(5, 6, 'o');
  insere_jogo(6, 4, 'o');
  insere_jogo(6, 5, 'o');
}

Glider::~Glider(){
}
