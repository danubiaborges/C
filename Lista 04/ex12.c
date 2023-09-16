/* Faça um programa que leia as medidas dos 3 lados de um triângulo e mostre o tipo de triângulo:
equilátero, isósceles ou escaleno.
Imprima apenas o nome do triângulo, em letras minúsculas e sem acentos. */

#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d" "%d" "%d", &a, &b, &c);

  if(a == b == c) /* a == b && a == c && b == c */ {
    printf("equilatero");
  }
  else if(a == b || a == c || b == c){
    printf("isosceles");
  }
  else{
    printf("escaleno");
  }

  return 0;
}