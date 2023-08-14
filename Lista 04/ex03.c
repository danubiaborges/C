/* Faça um programa que leia um valor inteiro e, caso este valor seja positivo, calcule e mostre a sua raiz quadrada. Caso ele seja negativo, calcule e mostre o seu quadrado. */

#include <stdio.h>
#include <math.h>

int main(){
  int n;
  float raiz;
  int quadrado;
  scanf("%d", &n);

  if(n >= 0){
    raiz = sqrt(n);
    printf("%.2f", raiz);
  }
  else{
    quadrado = pow(n, 2);
    printf("%d", quadrado);
  }

  return 0;
}