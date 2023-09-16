/* Uma empresa aérea quer contratar novos comissários de vôo.
Se a pessoa for homem, a altura mínima exigida é de 1,75m.
No caso das mulheres, é necessário ter ao menos 1,80m de altura.
Faça um programa que leia a altura (valor real) e o sexo (m ou f) de uma pessoa e informe se ela pode ou não ser contratada.
Seu programa deve imprimir apenas as respostas “sim” ou “nao”. */

#include <stdio.h>

int main(){
  float h;
  char sexo;
  scanf("%f", &h);
  scanf(" %c", &sexo);

  if((sexo == 'm') && (h >= 1.75)){
    printf("sim");
  }
  else if((sexo == 'f') && (h >= 1.80)){
    printf("sim");
  }
  else{
    printf("não");
  }

  return 0;
}