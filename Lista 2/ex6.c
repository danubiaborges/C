/* Fazer um programa para calcular a área de um triângulo. */

#include <stdio.h>

int main(){
  float area;
  float b;
  float h;

  printf("Digite os valores da base e da altura:\n");
  scanf("%f %f", &b, &h);

  area = (b * h) / 2;
  printf("%.2f", area);
  
  return 0;
}