/* Faça um programa que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
Seu programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include <stdio.h>

int main(){
  int idade;
  int tempoServico;

  printf("Insira sua idade:\n");
  scanf("%d", &idade);

  printf("Tempo de carteira assinada:\n");
  scanf("%d",&tempoServico);

  if(idade >= 65){
    printf("Sim.");
  }
  else if(tempoServico >= 30){
    printf("Sim.");
  }
  else if(idade >= 60 && tempoServico >= 25){
    printf("Sim.");
  }
  else{
    printf("Não");
  }
  
  return 0;
}