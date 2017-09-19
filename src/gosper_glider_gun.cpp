#include "gosper_glider_gun.hpp"
#include "matriz.hpp"

Gosper_glider::Gosper_glider(){
  inserir_celula(4, 0, 'o');
  inserir_celula(1, 1, 'o');
  inserir_celula(5, 0, 'o');
  inserir_celula(5, 1, 'o');
  inserir_celula(4, 10, 'o');
  inserir_celula(5, 10, 'o');
  inserir_celula(6, 10, 'o');
  inserir_celula(3, 11, 'o');
  inserir_celula(7, 11, 'o');
  inserir_celula(8, 12, 'o');
  inserir_celula(8, 13, 'o');
  inserir_celula(2, 12, 'o');
  inserir_celula(2, 13, 'o');
  inserir_celula(5, 14, 'o');
  inserir_celula(7, 15, 'o');
  inserir_celula(3, 15, 'o');
  inserir_celula(4, 16, 'o');
  inserir_celula(5, 16, 'o');
  inserir_celula(6, 16, 'o');
  inserir_celula(5, 17, 'o');
  inserir_celula(2, 20, 'o');
  inserir_celula(3, 20, 'o');
  inserir_celula(4, 20, 'o');
  inserir_celula(2, 21, 'o');
  inserir_celula(3, 21, 'o');
  inserir_celula(4, 21, 'o');
  inserir_celula(1, 22, 'o');
  inserir_celula(5, 22, 'o');
  inserir_celula(6, 24, 'o');
  inserir_celula(5, 24, 'o');
  inserir_celula(1, 24, 'o');
  inserir_celula(0, 24, 'o');
  inserir_celula(2, 34, 'o');
  inserir_celula(2, 35, 'o');
  inserir_celula(3, 34, 'o');
  inserir_celula(3, 35, 'o');
}

Gosper_glider::~Gosper_glider(){
}
