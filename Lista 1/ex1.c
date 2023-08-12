/* Fazer um algoritmo para calcular a área de um triângulo. Sabe-se que a área do triângulo é dada pelo produto da base pela altura, dividido por 2. */

#include <stdio.h>

int main(){
  float base;
  float altura;
  float area = 0;

  scanf("%f %f", &altura, &base);
  
  area = (base * altura) / 2;
  printf("%.2f", area);
  
return 0;
}