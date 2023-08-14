/* Uma máquina demora 17 segundos para produzir uma peça. Faça um programa que leia a quantidade de peças que devem ser produzidas e mostre o tempo em horas, minutos e segundos necessários para produzir essa quantidade de peças. Por exemplo, se um operador deseja produzir 4 peças, a máquina gastaria 68 segundos. Nesse caso, o programa daria como resposta: 0 horas, 1 minuto e 8 segundos. Em sua resposta, indique somente os números, separados por um único espaço entre eles. Por exemplo: 0 1 8. */

#include <stdio.h>

int main(){
  int pecas;
  int horas;
  int minutos;
  int segundos;
  int tempo;

  printf("Insira a quantidade de peças a serem produzidas:\n");
  scanf("%d", &pecas);

  tempo = 17 * pecas;

  horas = tempo / 3600;
  minutos = tempo % 3600 / 60;
  segundos = tempo % 60;

  printf("%d %d %d", horas, minutos, segundos);

  return 0;
}