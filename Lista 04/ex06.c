/* Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% de seu salário, mostre a mensagem: “emprestimo nao concedido”. Caso contrário, mostre a mensagem: “emprestimo concedido”. */

#include <stdio.h>

int main(){
  float sal;
  float prestacao;
  scanf("%f %f", &sal, &prestacao);

  if(prestacao > (0.2 * sal)){
    printf("Empréstimo não concedido.");
  }
  else{
    printf("Empréstimo concedido");
  }

  return 0;
}