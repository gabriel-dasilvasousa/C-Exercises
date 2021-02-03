#include <stdio.h>

int main(void) {
  
  int n, fatorial=1, cont=1;

  printf("Digite um número n:\n");
  scanf("%d", &n);

  if(n>0){
    while(cont<=n){
      printf("%d x ", fatorial);
      fatorial *= cont;
      printf("%d = %d\n",cont, fatorial);
      cont++;
    }
    printf("fatorial de %d é: %d\n", n, fatorial);
  }
  else{
    printf("Número inválido");
  }
  
  return 0;
}
