/* Fazer um programa para calcular a área de um trapézio. */

#include <stdio.h>

int main(){
  int a;
  int b;
  int h;
  float area;

  printf("Digite os valores das bases menor e maior:\n");
  scanf("%d %d", &a, &b);

  printf("Digite o valor da altura:\n");
  scanf("%d", &h);

  area = ((a + b) * h) / 2;
  printf("Área do trapézio: %.2f", area);
  
  return 0;
}