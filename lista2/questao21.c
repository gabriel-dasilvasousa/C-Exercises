#include <stdio.h>

int verificaPrimo(int n){ 

  if((n%2==0) || (n%3==0) || (n%5==0) || (n%7==0)){
    return 0;
  }else{
    return 1;
  }
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

