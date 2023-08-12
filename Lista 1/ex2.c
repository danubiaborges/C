/* Fazer um algoritmo para calcular a área de um círculo. Sabe-se que a área do círculo é dada pelo produto do raio ao quadrado pela constante π = 3.14. Nos fluxograma e pseudocódigo, represente π como ‘pi’. */

#include <stdio.h>

int main(){
  float pi = 3.14;
  float raio;
  float area;
  
  scanf("%f", &raio);

  area = (pi * (raio * raio));
  printf("%.2f", area);
  
  return 0;
}