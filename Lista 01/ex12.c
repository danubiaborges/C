/* Fazer um algoritmo que receba um número representando a temperatura da água e mostre em qual estado físico (sólido, líquido ou gasoso) ela se encontra. */

#include <stdio.h>

int main(){
  float temperatura;

  scanf("%f", &temperatura);

  if(temperatura > 0 && temperatura < 100){
    printf("Líquido");
  }
  else if(temperatura < 0){
    printf("Sólido");
  }
  else{
    printf("Gasoso");
  }
  
  return 0;
}