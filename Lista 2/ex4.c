/*  Fazer um programa que receba um número real e imprima o quadrado e o cubo do valor lido. */

#include <stdio.h>
#include <math.h>

int main(){
  float n;
  float quadrado;
  float cubo;

  scanf("%f", &n);

  quadrado = pow(n, 2);
  printf("%.2f\n", quadrado);

  cubo = pow(n, 3);
  printf("%.2f", cubo);
  
  return 0;
}