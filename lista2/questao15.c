#include <stdio.h>

float somaReais(float vetor[20]){

  float soma=0;
  int i;

  for(i=0;i<20;i++){
    soma+=vetor[i];
  }

  return soma;
}


int main(void) {
  
  float valor[20], soma;
  int i;

  for(i=0;i<20;i++){
    printf("Digite o %d valor:\n", i+1);
    scanf("%f", &valor[i]);
  }

  soma = somaReais(valor);

  printf("A soma dos numeros informados é: %.2f", soma);

  return 0;
}
