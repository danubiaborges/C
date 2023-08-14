/* Faça um programa que leia duas notas de um aluno e verifique se estas notas são válidas. Uma nota é válida se ela está no intervalo de 0 a 10. Caso as notas sejam válidas, mostre a média entre elas. Caso não sejam válidas, mostre a mensagem “notas incorretas” */

#include <stdio.h>

int main(){
  float n1;
  float n2;
  float media;

  scanf("%f %f", &n1, &n2);

  if(0 <= n1 && n1 <= 10 && 0 <= n2 && n2 <= 10){
    media = (n1 + n2) / 2;
    printf("%.2f", media);
  }
  else{
    printf("Notas incorretas!");
  }

  return 0;
}