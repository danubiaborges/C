/*  Fazer um algoritmo que receba três números como entrada e mostre qual o menor deles. */

#include <stdio.h>

int main(){
  int n1;
  int n2;
  int n3;

  scanf("%d %d %d", &n1, &n2, &n3);

  if(n1 < n2 && n1 < n3){
    printf("%d", n1);
  }
  else if(n2 < n1 && n2 < n3){
    printf("%d", n2);
  }
  else{
    printf("%d", n3);
  }
  return 0;
}