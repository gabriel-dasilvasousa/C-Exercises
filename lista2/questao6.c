#include <stdio.h>
#include <stdbool.h>

bool verificaSinal(int n){
  if(n > 0){
    return true;
  }
  else{
    return false;
  }
}

int main(void) {
  
  int n;
  bool positivoOuNegativo;
  printf("Digite um número inteiro:\n");
  scanf("%d", &n);

  positivoOuNegativo = verificaSinal(n);

  positivoOuNegativo ? printf("Positivo") : printf("Negativo");

  return 0;
}
