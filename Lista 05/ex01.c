/* Faça um programa que leia um inteiro N e implemente um contador regressivo, para imprimir na tela os números de N até 1.
Imprima os números em uma única linha, separados entre si por um único espaço. */

#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);

  for(i = n; i >= 1; i--)
  {
    printf("%d\n", i);
  }
  
  return 0;
}