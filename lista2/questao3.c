#include <stdio.h>
#include <stdbool.h>

bool verificaPrimo(int n){
  
  if(((n%2!=0) && (n%3!=0) && (n%5!=0))|| (n==2) || (n==3) || (n==5)){
    return true;
  }
  else{
    return false;
  }
}

int main(void) {
  
  int n;
  bool primo;
  printf("Digite um número inteiro e positivo:\n");
  scanf("%d", &n);
  
  primo = verificaPrimo(n);

  primo ? printf("O número %d é primo", n) : printf("O número %d não é primo", n);
  
  return 0;
}
