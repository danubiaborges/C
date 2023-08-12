/* Fazer um algoritmo para converter uma temperatura de graus Celsius para graus Fahrenheit. A fórmula de conversão é: F = C * (9 / 5) + 32 */

#include <stdio.h>

int main(){
  float c;
  float f;

  scanf("%f", &c);

  f = c * (9 / 5) + 32;
  printf("%.2f", f);
  
  return 0;
}