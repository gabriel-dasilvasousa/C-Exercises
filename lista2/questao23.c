#include <stdio.h>

float ordenaVetorOrdemCrescente(float A[50]){

  int i,j;

  // 5 6 7 9 1
  // 1 6 7 9 5  1ª iteração
  // 1 5 7 9 6  2ª iteração
  // 
  for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      if(A[i]>A[j]){
        int aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
  }

  return 0;
}


int main(void) {
  
  int i;
  float A[5];

  for(i=0;i<5;i++){
    printf("Digite o %dº número:\n", i+1);
    scanf("%f", &A[i]);
  }

  ordenaVetorOrdemCrescente(A);

  for(i=0;i<5;i++){
    printf("%.2f\n", A[i]);
  }

  return 0;
}

