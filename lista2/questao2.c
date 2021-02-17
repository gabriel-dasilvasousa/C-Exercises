#include <stdio.h>

float media(float nota1, float nota2, float nota3, char escolha){

  if(escolha == 'a' || escolha == 'A'){
    return (nota1 + nota2 + nota3)/3;
  }
  else if(escolha == 'p' || escolha == 'P'){
    return ((nota1*5)+(nota2*3)+(nota3*2))/10;
  }
  else{
    return 0.0;
  }
}

int main(void) {
  
  float nota1, nota2, nota3, mediaFinal;
  char escolha;

  printf("Digite sua nota 1:\n");
  scanf("%f", &nota1);
  printf("Digite sua nota 2:\n");
  scanf("%f", &nota2);
  printf("Digite sua nota 3:\n");
  scanf("%f", &nota3);
  printf("Digite 'a' se deseja media aritmética ou 'p' se deseja média ponderada:\n");
  scanf(" %c", &escolha);

  mediaFinal = media(nota1, nota2, nota3, escolha);

  printf("A média final é: %.2f", mediaFinal);

  return 0;
}
