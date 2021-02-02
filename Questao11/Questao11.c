#include <stdio.h>

int main(void) {
  
  int cont=0, negativos=0, positivos=0, numero=0;
  
  while(cont<8){
    printf("Digite um número\n");
    scanf("%d", &numero);

    numero>=0?positivos++:negativos++;
    cont++;
  }
  
  printf("%d números positivos e %d números negativos\n", positivos, negativos);

  return 0;
}
