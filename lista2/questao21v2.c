#include <stdio.h>
#include <stdbool.h>

int verificaPrimo(int n){ 
  
  bool primo = 1;
  int i;	

  for(i=2; i<n/2;i++){
    if(n%i==0){
      primo = 0;
      break;
    }
  }
  return primo;
}

void retornaOsDezPrimeirosPrimosAcimaDeCem(int X[10]){

  int cont=0, i=100;
  
  while(cont<10){
    if(verificaPrimo(i)==0){
      i++;
    }  
    else{
      X[cont] = i;
      cont++;
      i++;
    }
  }
}

int main(void) {
  
  int X[10], i;

  retornaOsDezPrimeirosPrimosAcimaDeCem(X);

  printf("Os primeiros números primos depois de 100 são:\n");

  for(i=0; i<10; i++){
     printf("%d ", X[i]);
  }

  printf("\n");
  return 0;
}
