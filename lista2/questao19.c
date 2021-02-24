#include <stdio.h>

void substituiNegativosPorZero(int A[25]){

  int i;

  for(i=0;i<25;i++){
    if(A[i] < 0){
      A[i] = 0;
    }
  }
}


int main(void) {
  
  int i, A[25];
  printf("Digite 25 números inteiros:\n");

  for(i=0;i<25;i++){
    printf("Digite o %d° valor:\n", i+1);
    scanf("%d", &A[i]);
  }

  substituiNegativosPorZero(A);

  for(i=0;i<25;i++){
    printf("A[%d]=%d\n", i, A[i]);
  }

  return 0;
}
