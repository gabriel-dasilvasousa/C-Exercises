#include <stdio.h>

int main(void) {
  
  int cont=0;
  float base, altura, area, soma=0, media;
  
  while(cont<5){
    printf("Digite a base do triângulo %d\n", cont+1);
    scanf("%f", &base);
    printf("Digite a altura do triângulo %d\n", cont+1);
    scanf("%f", &altura);
    
    area = (base*altura)/2;
    soma += area;
    cont++;
  }
  
  printf("A média da área dos triângulos é: %.2f\n", soma/5);

  return 0;
}
