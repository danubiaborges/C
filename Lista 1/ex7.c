/* Fazer um algoritmo para resolver uma equação do primeiro grau */

#include <stdio.h>

int main(){
  int a;
  int b;
  int c;
  int resultado;

  scanf("%d %d %d", &a, &b, &c);

  resultado = a * b + c;
  printf("%d", resultado);
  
  return 0;
}