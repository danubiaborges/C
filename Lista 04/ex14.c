/* Faça um programa que receba a altura (valor real) e o sexo (m ou f) de uma pessoa e
calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7 */

#include <stdio.h>

int main(){
  float h, pesoM, pesoF;
  char sexo;

  scanf("%f %c", &h, &sexo);

  pesoM = (72.7 * h) - 58;
  pesoF = (62.1 * h) - 44.7;

  if(sexo == 'm'){
    printf("%.2f", pesoM);
  }
  else if(sexo == 'f'){
    printf("%.2f", pesoF);
  }
  else{
    printf("carectere invalido");
    return 0;
  }
  
  return 0;
}