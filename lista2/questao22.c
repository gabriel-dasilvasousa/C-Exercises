#include <stdio.h>

float divideTodosPeloMaior(float B[50]){
  
  float maiorValor=0;
  int i;

  for(i=0;i<50;i++){
    if(B[i]>maiorValor){
      maiorValor = B[i];
    }
  }
  
  for(i=0;i<50;i++){
    B[i] = B[i]/maiorValor;
  }
  
  return B[50];
}

int main(void) {
  
  int i;
  float B[50];

  for(i=0;i<50;i++){
    printf("Digite o numero %d\n", i+1);
    scanf("%f", &B[i]);
  }

  divideTodosPeloMaior(B);

  printf("Os elementos do vetor B dividos pelo maior elemento:");

  for(i=0;i<50;i++){
    printf("%.2f\n", B[i]);
  }
  
  return 0;
}
