/* Faça um programa para calcular o valor de desconto de um produto pago à vista. O programa deve ler o valor do produto e a porcentagem de desconto à vista (valor inteiro). Imprima, como resposta, uma única linha contendo o valor final do produto e o valor do desconto, separados entre si por um único espaço */

#include <stdio.h>

int main(){
  float valorProduto;
  float desconto;
  float descontoFinal;
  float valorFinal;

  printf("Insira o valor do produto:\n");
  scanf("%f", &valorProduto);

  printf("Insira o valor do desconto:\n");
  scanf("%f", &desconto);

  descontoFinal = desconto / 100; 
  
  valorFinal = valorProduto - (valorProduto * descontoFinal);
  printf("O valor final é: R$ %.2f", valorFinal);
  
  return 0;
}