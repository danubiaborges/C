/*  Fazer um programa para converter um ângulo de graus para radianos. */

#include <stdio.h>

int main(){
  float graus;
  float rad;
  float pi = 3.14;

  printf("Digite o valor do ângulo em graus:\n");
  scanf("%f", &graus);

  rad = graus * (pi / 180);
  printf("Ângulo em radianos: %f", rad);

  return 0;
}