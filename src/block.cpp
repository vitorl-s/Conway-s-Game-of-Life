#include "block.hpp"
#include "matriz.hpp"


Block::Block(){
  inserir_celula(4, 4, 'o');
  inserir_celula(4, 5, 'o');
  inserir_celula(5, 4, 'o');
  inserir_celula(5, 5, 'o');
  inserir_celula(10, 10,'o');
  inserir_celula(10, 11,'o');
  inserir_celula(11, 10,'o');
  inserir_celula(11, 11,'o');
}

Block::~Block(){
}
