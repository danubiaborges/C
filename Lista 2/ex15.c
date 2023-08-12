/* Fazer um programa que leia a distância (km) percorrida por um veículo e o tempo gasto (h), mostrando como resposta a sua velocidade média. */

#include <stdio.h>

int main(){
  float km;
  int h;
  float vm;

  printf("Digite a distância em km:\n");
  scanf("%f", &km);

  printf("Digite o tempo em horas:\n");
  scanf("%d", &h);

  vm = km / h;
  printf("Velocidade média: %.2f km/h", vm);

  return 0;
}