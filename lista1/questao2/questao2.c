#include<stdio.h>

int main(){
  
  float valorLitro, valorPagamento, litrosPossiveis;
  
  printf("Cálculo de litros possiveis\n");

  printf("Digite o valor do litro: \n");
  scanf("%f", &valorLitro);
  
  printf("Digite o valor do pagamento: \n");
  scanf("%f", &valorPagamento);

  litrosPossiveis = valorPagamento/valorLitro;
  printf("A quantidade de litros que ele conseguiu colocar foi: %.2f Litros\n", litrosPossiveis);
  
  return 0;
}
