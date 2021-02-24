#include <stdio.h>

int calculaFatorial(int n){
  int fatorial=1, cont=1;

  if(n==0){
    return 1;
  }
  else{
    while(cont<=n){
    fatorial *= cont;
    cont++;
  }
  return fatorial;
  }
  
}


int main(void) {
  
  int n, fatorial;
  
  printf("Digite um número inteiro e positivo\n");
  scanf("%d", &n);

  fatorial = calculaFatorial(n);

  printf("Fatorial de %d é: %d", n, fatorial);

  return 0;
}
