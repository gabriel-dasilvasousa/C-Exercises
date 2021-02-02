#include <stdio.h>

int main(void) {
  
  float valor, centavos;
  int notasDe50=0, notasDe10=0, notasDe5=0, notasDe1=0;
  
  printf("Calculadora de troco\n");
  printf("Digite o valor:\n");
  scanf("%f", &valor);

  if(valor>50){
    notasDe50 = valor/50;
    valor -= 50*notasDe50;
  }
  if(valor>10){
    notasDe10 = valor/10;
    valor -= 10*notasDe10;
  }
  if(valor>5){
    notasDe5 = valor/5;
    valor -= 5*notasDe5;
  }
  if(valor>1){
    notasDe1 = valor/1;
    valor -= 1*notasDe1;
  }
  
  centavos = valor*100;
  printf("%d notas de 50, %d notas de 10, %d notas de 5, %d notas de 1, %.1f centavos", notasDe50, notasDe10, notasDe5, notasDe1, centavos);

  return 0;
}
