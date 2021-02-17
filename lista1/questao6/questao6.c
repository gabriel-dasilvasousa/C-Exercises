#include <stdio.h>

int main(void) {
  
  int qtdSanduiches;
  float queijo, presunto, rodela;
  
  printf("Lanchonete Gostosura\n");
  
  printf("Digite o número de sanduíches desejados:\n");
  scanf("%d", &qtdSanduiches);

  queijo = qtdSanduiches*2*50/1000;
  presunto = qtdSanduiches*50/1000;
  rodela = qtdSanduiches*100/1000;

  printf("É necessário %.2f kg de queijo, %.2f kg de presunto e %.2f kg de rodela para fazer %d sanduiches ", queijo, presunto, rodela, qtdSanduiches);

  return 0;
}
