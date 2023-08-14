/* O volume de um cilindro é dado pela seguinte fórmula: V = πr^2h, onde r é o valor raio, h é a sua altura e π é uma constante matemática. Faça um programa que leia os valores de r e h e calcule o volume do cilindro correspondente, com duas casas decimais. Represente π com todas as suas casas decimais. */

#include <stdio.h>
#include <math.h>

int main(){
  float r;
  float h;
  float volume;

  printf("Insira os valores do raio e da altura do cilindro:\n");
  scanf("%f %f", &r, &h);

  volume = M_PI * pow(r, 2) * h;

  printf("O volume do cilindro é: %.2f", volume);
  
  return 0;
}