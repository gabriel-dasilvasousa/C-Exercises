#include <stdio.h>

void verificaPrimosDeUmVetor(int K[25], int P[25]){

  int i; 

  for(i=0;i<25;i++){
    if(K[i] == 2 || K[i] == 3 || K[i] ==5 || K[i] == 5 || K[i]==7){
      P[i] = K[i];
    }
    else if(K[i] ==1 || (K[i]%2==0) || (K[i]%3==0) || (K[i]%5==0) || (K[i]%7==0)){
      P[i] = 0;
    }else{
      P[i] = K[i];
    }
  }
}

int main(void) {
  
  int i, K[25], P[25];

  printf("Digite 25 valores e descubra quais deles são primos\n");

  for(i=0;i<25;i++){
    printf("Digite o %d° valor:\n", i+1);
    scanf("%d", &K[i]);
  }

  verificaPrimosDeUmVetor(K, P);

  printf("Os numeros primos da sequencia digitada são:\n");
  for(i=0;i<25;i++){
    if(P[i]!=0){
      printf("%d ", P[i]);
    }
  }

  return 0;
}
