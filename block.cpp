#include "block.hpp"

void Block::setPosicao(){
  cria_Matriz();

   matriz[4][4] = 'o';
   matriz[4][5] = 'o';
   matriz[5][4] = 'o';
   matriz[5][5] = 'o';

   matriz[10][10] = 'o';
   matriz[10][11] = 'o';
   matriz[11][10] = 'o';
   matriz[11][11] = 'o';
}
