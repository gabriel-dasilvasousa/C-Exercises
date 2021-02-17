#include <stdio.h>

int main(void) {
  
  float baseMaior, baseMenor, altura, area;
  
  printf("Cálculo de área de um trapézio\n");

  printf("Digite a base maior: \n");
  scanf("%f", &baseMaior);
  
  printf("Digite a base menor: \n");
  scanf("%f", &baseMenor);
  
  printf("Digite a altura: \n");
  scanf("%f", &altura);

  area = (baseMaior+baseMenor)*altura/2;
  printf("A área do trapezio com tais medidas é: %.2f\n", area);

  return 0;
}
