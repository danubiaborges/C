/*  Fazer um programa para converter uma dada temperatura de graus Fahrenheit para graus Celsius. */

#include <stdio.h>

int main(){
  float f;
  float c;

  printf("Digite a temperatura em Fahrenheit:\n");
  scanf("%f", &f);

  c = (f - 32) / 1.8;
  printf("Temperatura em Celsius: %.2f", c);

  return 0;
}