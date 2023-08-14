/* Fazer um algoritmo para converter um ângulo de graus para radianos. A fórmula de conversão é: rad = graus * π / 180, onde π = 3.14. */

#include <stdio.h>

int main(){
  float rad;
  float graus;
  float pi = 3.14;

  scanf("%f", &graus);

  rad = (graus * pi) / 180;
  printf("%.2f", rad);
  
  return 0;
}