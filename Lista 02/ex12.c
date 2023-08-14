/* Fazer um programa para calcular o novo salário de um funcionário. Sabe-se que o funcionário terá aumento de 20%. */

#include <stdio.h>

int main(){
  float sal;
  float novoSal;

  printf("Digite o salário do funcionário:\n");
  scanf("%f", &sal);

  novoSal = sal * 1.2;
  printf("Novo salário: %.2f", novoSal);
  
  return 0;
}