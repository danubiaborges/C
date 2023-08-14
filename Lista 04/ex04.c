/* Faça um programa que receba um número inteiro e informe se este número é par ou ímpar. Imprima apenas as palavras “par” ou “impar” em sua resposta */ 

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  if(n % 2 == 0){
    printf("Par");
  }
  else{
    printf("Ímpar");
  }

  return 0;
}