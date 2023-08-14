/* Faça um programa que leia o valor de ângulo, dado em graus, e mostre, com duas casas decimais, os valores de seno, cosseno e tangente do ângulo lido, em uma única linha, separados por um único espaço. */

#include <stdio.h>
#include <math.h>

int main(){
  float graus;
  float rad;
  float seno;
  float cosseno;
  float tangente;

  printf("Digite o valor do ângulo:\n");
  scanf("%f", &graus);

  rad = graus * (M_PI / 180.0);
  seno = sin(rad);
  cosseno = cos(rad);
  tangente = tan(rad);

  printf("%f %f %f", seno, cosseno, tangente);
  
  return 0;
}