#include <stdio.h>

int calculaFatorial(int n){
  int fatorial=1, cont=1;

  while(cont<=n){
    fatorial *= cont;
    cont++;
  }
  return fatorial;
}

int calculaFatorialDeUmVetor(int A[10], int B[10]){
  int i;
  for(i=0;i<10;i++){
    B[i] = calculaFatorial(A[i]);
  }
  return B[10];  
}

int main(void) {
  
  int i, A[10], B[10];

  for(i=0;i<10;i++){
    printf("Digite o número %d \n", i+1);
    scanf("%d", &A[i]);
  }

  calculaFatorialDeUmVetor(A, B);

  for(i=0;i<10;i++){
    printf("O fatorial de %d é: %d\n", A[i], B[i]);
  }

  return 0;
}
