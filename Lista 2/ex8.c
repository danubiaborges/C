/* Fazer um programa para calcular a área de um círculo. */

#include <stdio.h>
#include <math.h>

int main(){
  float pi = 3.14;
  float r;
  float area;

  printf("Digite o valor do raio:\n");
  scanf("%f", &r);

  area = pi * (pow(r, 2));
  printf("Área do círculo: %f", area);
  
  return 0;
}