/* Fazer um algoritmo para calcular o novo salário de um funcionário. Sabe-se que os funcionários que ganham até R$ 1000,00 terão aumento de 20%, e os demais terão aumento de 10%. */

#include <stdio.h>

int main(){
  float sal;
  float novoSal;

  scanf("%f", &sal);

  if(sal <= 1000){
    novoSal = 1.2 * sal;
    printf("O novo salário é: %.2f", novoSal);
  }
  else{
    novoSal = 1.1 * sal;
    printf("O novo salário é: %.2f", novoSal);
  }
  return 0;
}