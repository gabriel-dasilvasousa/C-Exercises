#include <stdio.h>

float calculaMedia(int cont){
  float n, soma=0.0;
  int qtdDeNumeros = cont;

  while(cont>0){
    printf("Digite um número:\n");
    scanf("%f", &n);  
    cont--;
    soma += n;
  }
  
  return soma/qtdDeNumeros;
}

int main(void) {
  
  int cont;
  float media;
  printf("Digite a quantidade de números que você quer a média:\n");
  scanf("%d", &cont);
  
  media = calculaMedia(cont);

  printf("A média dos %d números digitados foi: %.2f", cont, media);

  return 0;
}
