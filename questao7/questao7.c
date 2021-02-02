#include <stdio.h>

int main(void) {
  
  float peso;
  printf("Digite o peso de uma pessoa:\n");
  scanf("%f", &peso);

  printf("Se a pessoa engordar, seu novo peso será: %.2f\n", peso*1.15);
  printf("Se a pessoa emagrecer, seu novo peso será: %.2f\n", peso*0.8);

  return 0;
}
