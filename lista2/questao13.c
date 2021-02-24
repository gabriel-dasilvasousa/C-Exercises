#include <stdio.h>
#include <stdbool.h>

bool verificaValorPerfeito(int n){
  int soma=0, i;
  for(i=1; i<n; i++){
    if(n%i==0){
      soma+= i;
    }
  }

  if(soma==n){
    return true;
  }else{
    return false;
  }
}

int main(void) {
  int n; 
  bool valorPerfeito;

  printf("Digite um número\n");
  scanf("%d", &n);

  valorPerfeito = verificaValorPerfeito(n);
  
  valorPerfeito ? printf("%d é perfeito\n", n) : printf("%d não é perfeito\n", n); 

  return 0;
}
