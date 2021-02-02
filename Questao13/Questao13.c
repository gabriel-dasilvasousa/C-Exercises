#include <stdio.h>

int main(void) {
  
  int cont=0, dentro=0, fora=0, numero=0;
  
  while(cont<10){
    printf("Digite um número\n");
    scanf("%d", &numero);

    if(numero>=10 && numero<=20){
      printf("O numero %d está dentro do intervalo[10,20]\n", numero);
      dentro++;
    }else{
      printf("O numero %d está fora do intervalo[10,20]\n", numero);
      fora++;
    }
    cont++;
  }

  printf("Da sequencia digitada há %d números dentro do intervalo [10,20] e %d números fora desse intervalo\n", dentro, fora);

  return 0;
}
