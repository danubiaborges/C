/* Fazer um programa que receba um número real e imprima a quinta parte desse número. */
  
#include <stdio.h>

int main(){
  float n;
  
  scanf("%f", &n);

  printf("%.2f", n / 5);
  
  return 0;
}