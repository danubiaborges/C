/*  Faça um programa que leia um inteiro positivo N e imprima todos os números naturais de 0 até N, em ordem crescente.
Imprima os números em uma única linha, separados entre si por um único espaço.
Não deixe o usuário inserir um valor negativo. Se um valor negativo for inserido, continue lendo N. */

#include <stdio.h>

int main(){
  int n, i;

  do{
  scanf("%d", &n);
  } while(n < 0);
  
  for(i = 0; i <= n; i++){
    printf("%d ", i);
  }
  
  return 0;
}