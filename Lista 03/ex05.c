/* Faça um programa que leia um número inteiro e mostre, como resposta, a soma de sua raiz cúbica com sua raiz quarta. Mostre o resultado usando duas casas decimais. */

#include <stdio.h>
#include <math.h>

int main(){
  int n;
  float raizCubica;
  float raizQuarta;
  float soma;

  printf("Digite um número inteiro:\n");
  scanf("%d", &n);

  raizCubica = pow(n, 1.0/3.0);
  raizQuarta = pow(n, 1.0/4.0);
  
  soma = raizCubica + raizQuarta;
  printf("A soma da raiz cúbica e da raiz quarta do número é: %.2f", soma);
  
  return 0;
}