#include <stdio.h>

char verificaConceito(float media){
  if((media>=0.0) && (media <5)){
    return 'D';
  }
  else if(media>=5.0 && media <7){
    return 'C';
  }
  else if(media>=7.0 && media <9){
    return 'B';
  }
  else if(media>=9.0 && media <=10.0){
    return 'A';
  }
  else{
    return 0;
  }
}

int main(void) {
  
  float media;
  char conceito;

  printf("Digite a média:\n");
  scanf("%f", &media);

  conceito = verificaConceito(media);

  if(conceito == 0){
    printf("Média inválida\n");
  }
  else{
    printf("O conceito do aluno é: %c\n", conceito);
  }
  
  return 0;
}
