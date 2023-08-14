/* Um grupo de amigos pretende alugar um carro por um certo número de dias. Consultadas duas agências, a primeira cobra R$ 62,00 pela diária e mais R$ 1,40 por km rodado. A segunda agência cobra diária de R$ 80,00 e mais R$ 1,20 por km rodado. Escreva um programa que leia a quantidade de km a serem percorridos e a quantidade de dias de aluguel do carro. A seguir, mostre, como resposta, uma única linha contendo o valor cobrado pela primeira agência separado do valor cobrado pela segunda agência por um único espaço. */

#include <stdio.h>

int main(){
  float km;
  int dias;
  float valor1;
  float valor2;

  printf("Insira a quantidade de km a serem percorridos:\n");
  scanf("%f", &km);

  printf("Insira a quantidade de dias de aluguel do carro:\n");
  scanf("%d", &dias);

  valor1 = (62.00 * dias) + (1.4 * km);
  valor2 = (80.00 * dias) + (1.2 * km);

  printf("Valor cobrado na agência 1 será de: R$ %.2f e o valor cobrado na segunda agência será de: R$ %.2f", valor1, valor2);

  return 0;
}