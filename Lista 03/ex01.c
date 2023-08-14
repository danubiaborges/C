/* Faça um programa que leia um valor dado em reais (R$) e a cotação do dólar (US$). A seguir, mostre o valor em reais convertido para dólares. */

#include <stdio.h>

int main(){
  float reais;
  float dol;

  printf("Digite um valor em reais:\n");
  scanf("%f", &reais);

  dol = reais * 4.95;

  printf("O valor em dólares é: R$ %.2f", dol);

  return 0;
}