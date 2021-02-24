#include <stdio.h>

void calculaSomaDePosicoesDeVetores(int A[10], int B[10], int C[10]){
  
  int i;

  for(i=0;i<10;i++){
    C[i] = A[i] + B[i];
  }
}


int main(void) {

  int i, A[10], B[10], C[10];

  for(i=0;i<10;i++){
    printf("Digite o valor de A[%d]:\n", i);
    scanf("%d", &A[i]);
    printf("Digite o valor de B[%d]:\n", i);
    scanf("%d", &B[i]);
  }

  calculaSomaDePosicoesDeVetores(A, B, C);

  for(i=0;i<10;i++){
    printf("A[%d](%d) + B[%d](%d) = C[%d](%d)\n", i, A[i], i, B[i], i, C[i]);
  }

}
