/* Fazer um programa que receba três números e mostre como resposta o quadrado da soma desses
números. */

#include <stdio.h>
#include <math.h>

int main(){
  int x;
  int y;
  int z;
  int soma;
  int quadSoma;

  printf("Digite três valores:\n");
  scanf("%d %d %d", &x, &y, &z);

  soma = x + y + z;
  quadSoma = pow(soma, 2);
  printf("O quadrado da soma é %d", quadSoma);
  
  return 0;
}