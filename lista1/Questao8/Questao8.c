#include <stdio.h>
#include<math.h>

int main(void) {
  
  float valor, entrada, parcelas, resto;
  int valorInteiro;

  printf("Digite o valor do produto: Ps: em caso de numero com virgulas(,) use o ponto(.)\n");
  scanf("%f", &valor);
  
  entrada = fmod(valor,3);
  valor -= entrada;
  parcelas = valor/3;
  entrada +=parcelas;

  printf("O valor da entrada é R$%.2f e as duas parcelas no valor R$%.2f\n", entrada, parcelas);

  return 0;
}
