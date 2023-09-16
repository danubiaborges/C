/*  Faça um programa que leia a idade de um nadador e mostre em qual categoria ele é classificado, de acordo com a tabela a seguir:
Idade             Categoria
4 a 5 anos         Fraldinha
6 a 12 anos        Infantil
13 a 18 anos       Juvenil
Mais de 18 anos    Adulto */

#include <stdio.h>

int main(){
  float idade;
  scanf("%f", &idade);

  if(idade >= 4 && idade <= 5){
    printf("Fraldinha");
  }
  else if(idade >= 6 && idade <= 12){
    printf("Infantil");
  }
  else if(idade >= 13 && idade <= 18){
    printf("Juvenil");
  }
  else if(idade > 18){
    printf("Adulto");
  }
  
  return 0;
}