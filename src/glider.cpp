#include "glider.hpp"
#include "matriz.hpp"

Glider::Glider(){
  inserir_celula(4, 4, 'o');
  inserir_celula(5, 5, 'o');
  inserir_celula(5, 6, 'o');
  inserir_celula(6, 4, 'o');
  inserir_celula(6, 5, 'o');
}

Glider::~Glider(){
}
