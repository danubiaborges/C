/* Fazer um algoritmo para calcular a média aritmética entre duas notas de um aluno e apresentar a sua situação (aprovado / reprovado), considerando que o mínimo para a aprovação seja 6.0 pontos. */

#include <stdio.h>

int main(){
  float n1;
  float n2;
  float n;
  float media =  6.0;

  scanf("%f %f", &n1, &n2);

  n = (n1 + n2) / 2;

  if (n >= media){
    printf("%.2f\n", n);
    printf("Aluno aprovado!");
  }
  else{
    printf("%.2f\n", n);
    printf("Aluno reprovado!");
  }
  return 0;
}