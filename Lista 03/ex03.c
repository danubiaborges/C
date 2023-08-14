/* A bula de um remédio pediátrico recomenda a seguinte dosagem: 5 gotas para cada 2kg de peso da criança. Faça um programa que leia o peso da criança e mostre a quantidade de gotas a ser ministrada */

#include <stdio.h>

int main(){
  float peso;
  int gotas;

  printf("Insira o peso da criança:\n");
  scanf("%f", &peso);

  gotas = (peso / 2) * 5;
  printf("A quantidade de gotas a ser tomada é de: %d", gotas);
  
  return 0;
}