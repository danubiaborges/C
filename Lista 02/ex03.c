/*  Fazer um programa que receba três valores, que podem ser inteiros ou reais, e mostre a soma desses valores. */

#include <stdio.h>

int main(){
  float x;
  float y;
  float z;
  float soma;

  scanf("%f %f %f", &x, &y, &z);

  soma = x + y + z;
  printf("%f", soma);
  
  return 0;
}