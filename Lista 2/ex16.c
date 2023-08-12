/* Fazer um programa que receba três números e mostre como resposta a soma dos quadrados desses
números. */

#include <stdio.h>
#include <math.h>

int main(){
  int x;
  int y;
  int z;
  int soma;

  printf("Digite três valores:\n");
  scanf("%d %d %d", &x, &y, &z);

  soma = (pow(x, 2) + pow(y, 2) + pow(z, 2));
  printf("A soma dos seus quadrados é: %d", soma);
  
  return 0;
}