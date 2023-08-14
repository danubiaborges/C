/* Uma das fórmulas alternativas para se calcular a área de um triângulo é a Fórmula de Herão, que dá o valor da área em função da medida dos três lados do triângulo. A fórmula é dada por 𝐴 = √𝑝(𝑝 − 𝑎)(𝑝 − 𝑏)(𝑝 − 𝑐), onde a, b e c são as medidas dos lados e p é o semiperímetro (metade do perímetro). Faça um programa que leia as medidas dos lados do triângulo e mostre o valor de sua área, com uma única casa decimal. */

#include <stdio.h>
#include <math.h>

int main(){
  int a;
  int b;
  int c;
  float p;
  float area;

  printf("Insira as medidas dos 3 lados do triângulo:\n");
  scanf("%d %d %d", &a, &b, &c);

  p = (a + b + c) / 2.0;

  area = sqrt(p * (p - a) * (p - b) * (p - c));

  printf("A área do triângulo pela fórmula de Herão é: %.2f", area);
  
  return 0;
}