#include <stdio.h>

void retornaImpares(int A[500]){
  int i=0, cont=0;

  while(cont<500){
    if(i%2!=0){
      A[cont] = i;
      cont++;
    }
    i++;
  }
}


int main(void) {
  
  int i, A[500];

  retornaImpares(A);

  for(i=0;i<500;i++){
    printf("%d\n", A[i]);
  }

  return 0;
}
