/* Faça um programa que verifique se um número lido é divisível por 3 ou por 5, mas não pelos dois ao mesmo tempo.
Imprima como resposta apenas as frases: “divisivel por 3”, “divisivel por 5”, “nao divisivel”, de acordo com a entrada recebida. */

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  if(n % 3 == 0 && n % 5 != 0){
    printf("divisivel por 3");
  }
  else if(n % 5 == 0 && n % 3 != 0){
    printf("divisivel por 5");
  }
  else if(n % 3 == 0 && n % 5 == 0){
    printf("não divisivel");
  }
  else{
    printf("não divisivel");
  }
  
  return 0;
}