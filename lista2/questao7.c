#include <stdio.h>
#include <stdbool.h>

bool verificaParOuImpar(int n){
  if(n%2==0){
    return true;
  }
  else{
    return false;
  }
}

int main(void) {
  
  int n;
  bool parOuImpar;
  printf("Digite um número inteiro:\n");
  scanf("%d", &n);

  parOuImpar = verificaParOuImpar(n);

  parOuImpar ? printf("Par") : printf("Impar");

  return 0;
}
