/* Faça um programa que leia um inteiro N e mostre quais são os N primeiros números ímpares.
Imprima os números em uma única linha, separados entre si por um único espaço.
Atenção: se o usuário digita N = 4, a resposta é: 1 3 5 7 (que são os 4 primeiros números ímpares!). */

#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);

  int contador = 1;
  
  for(i = 0; i < n; i++){
    printf("%d ", contador);
    contador += 2;
  }
  
  return 0;
}