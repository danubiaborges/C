/* Faça um programa que leia um valor inteiro e informe se o valor lido é ou não é um múltiplo de 11. Seu programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  if(n % 11 == 0){
    printf("Sim");
  }
  else{
    printf("Não");
  }

  return 0;
}