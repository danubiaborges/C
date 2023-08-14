/* Cada estado da região sudeste possui uma taxa de imposto distinta sobre o valor dos produtos nele comercializados. Faça um programa que leia o preço de um produto e o estado (use 1 = MG; 2 = SP; 3 = RJ; e 4 = ES), e mostre o preço final acrescido do imposto, de acordo com as seguintes taxas: MG = 12%; SP = 7%; RJ = 15%; ES = 8%. */

#include <stdio.h>
#include <stdlib.h>

int main(){
  float produto;
  int estado;
  float preco;
  scanf("%f %d", &produto, &estado);

  if(estado == 1){
    preco = produto + (produto * 0.12);
    printf("O preço final do produto acrescido de impostos é de: R$ %.2f", preco);
  }
  else if(estado == 2){
    preco = produto + (produto * 0.07);
    printf("O preço final do produto acrescido de impostos é de: R$ %.2f", preco);
  }
  else if(estado == 3){
    preco = produto + (produto * 0.15);
    printf("O preço final do produto acrescido de impostos é de: R$ %.2f", preco);
  }
  else if(estado == 4){
    preco = produto + (produto * 0.08);
    printf("O preço final do produto acrescido de impostos é de: R$ %.2f", preco);
  }
  else{
    exit(1);
  }
  
  return 0;
}