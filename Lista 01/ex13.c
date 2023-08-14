/* Fazer um algoritmo que receba um número representando a temperatura corporal de um paciente. Caso o valor seja maior que 39, mostre a mensagem “Febre alta”. Caso o valor esteja entre 38 e 39, mostre a mensagem “Febre baixa”. Caso contrário, mostre a mensagem “Temperatura Normal”. */

#include <stdio.h>

int main(){
  float temperatura;

  scanf("%f", &temperatura);

  if(temperatura > 39){
    printf("Febre alta");
  }
  else if (temperatura <= 39 && temperatura >= 38){
    printf("Febre baixa");
  }
  else{
    printf("Temperatura normal");
  }
  
  return 0;
}