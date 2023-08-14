/* Faça um programa que receba dois números e mostre qual deles é o menor. */

#include <stdio.h>

int main(){
  int x;
  int y;

  scanf("%d %d", &x, &y);

  if(x < y){
    printf("%d", x);
  }
  else{
    printf("%d", y);
  }

  return 0;
}