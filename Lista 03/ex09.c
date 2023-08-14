/* Um aluno deseja saber qual a porcentagem de faltas que ele tem em uma disciplina. Faça um programa que leia a carga horária total da disciplina e a quantidade de horas de faltas acumuladas, e mostre a porcentagem de faltas do aluno (entre 0 a 100). */

#include <stdio.h>

int main(){
  float ch;
  float faltasAcumuladas;
  float faltas;

  printf("Insira a carga horária total da disciplina e a quantidade de horas de faltas acumuladas:\n");
  scanf("%f %f", &ch, &faltasAcumuladas);

  faltas = faltasAcumuladas / ch;

  printf("%.2f", faltas);
  
  return 0;
}