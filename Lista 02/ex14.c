/* Fazer um programa que leia o valor de um produto e imprima o valor final com desconto, sabendo que o desconto foi de 12%. */


#include <stdio.h>

int main(){
  float valor;
  float valorFinal;

  printf("Digite o valor do produto:\n");
  scanf("%f", &valor);

  valorFinal = valor - (valor * (12.0 / 100.0));
  printf("Valor final com desconto: R$ %.2f", valorFinal);
  
  return 0;
}