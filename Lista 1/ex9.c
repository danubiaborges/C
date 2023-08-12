/*  Fazer um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual (dois valores de entrada). A seguir, calcular e mostrar: a) a idade da pessoa em anos. b) a idade da pessoa em meses. c) a idade da pessoa em dias. */

#include <stdio.h>

int main(){
  int nasc;
  int anoAtual;
  int idade;
  int idadeMeses;
  int idadeDias;

  scanf("%d %d", &nasc, &anoAtual);

  idade = anoAtual - nasc;
  printf("%d\n", idade);

  idadeMeses = idade * 12;
  printf("%d\n", idadeMeses);

  idadeDias = idade * 365;
  printf("%d", idadeDias);
  
  return 0;
}