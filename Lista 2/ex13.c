/* Fazer um programa que receba o ano de nascimento de uma pessoa e o ano atual. A seguir, o algoritmo deve calcular e mostrar: a) a idade da pessoa em anos. b) a idade da pessoa em meses. c) a idade da pessoa em dias. */


#include <stdio.h>

int main(){
  int nasc;
  int anoAtual;
  int idade;

  printf("Digite o ano de nascimento da pessoa:\n");
  scanf("%d", &nasc);

  printf("Digite o ano em que estamos:\n");
  scanf("%d", &anoAtual);

  idade = anoAtual - nasc;

  printf("Idade em anos: %d anos\n", idade);
  printf("Idade em meses: %d meses\n", idade * 12);
  printf("Idade em dias: %d dias\n", idade * 365);
  
  return 0;
}