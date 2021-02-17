#include <stdio.h>

int main(void) {
  float salario = 0;

  printf("Digite o salario atual\n");
  scanf("%f", &salario);

  printf("O salario atual é R$%.2f\nO salario com aumento é R$%.2f\nO salário com aumentos e impostos descontados é R$%.2f\n", salario, salario*1.15, salario*1.15*0.92);
  
  return 0;
}
