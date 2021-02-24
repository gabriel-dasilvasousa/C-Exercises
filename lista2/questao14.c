#include <stdio.h>

int qtdDeNumerosPares(int x[15]){
  
  int cont=0;

  for(int i=0; i<15; i++){
    if(x[i]%2==0){
      cont++;
    }
  }
  
  return cont;
}

int main(void) {
  
  int i, numerosParesEmX;
  int x[15];
  
  for(i=0;i<15;i++){
    printf("Digite o numero %d\n", i+1);
    scanf("%d", &x[i]);
  }

  numerosParesEmX = qtdDeNumerosPares(x);
  
  printf("Os números pares na sequência informada: %d", numerosParesEmX);

  return 0;
}
