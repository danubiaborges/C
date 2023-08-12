/* Fazer um programa para converter uma dada temperatura de graus Celsius para graus Fahrenheit. */

#include <stdio.h>

int main(){
  float c;
  float f;

  printf("Digite a temperatura em Celsius:\n");
  scanf("%f", &c);

  f = (c * 1.8) + 32;
  printf("Temperatura em Fahrenheit: %.2f", f);
  
  return 0;
}