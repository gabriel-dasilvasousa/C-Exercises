#include <stdio.h>

int verificaCategoria(int idade){
  if(idade>=5 && idade <=7){
    return 1;
  }
  else if(idade>=8 && idade <=10){
    return 2;
  }
  else if(idade>=11 && idade <=13){
    return 3;
  }
  else if(idade>=14 && idade <=17){
    return 4;
  }
  else if(idade>=18){
    return 5;
  }
  else{
    return 0;
  }
}

int main(void) {
  
  int idade, categoria;
  
  printf("Digite a idade:\n");
  scanf("%d", &idade);

  categoria = verificaCategoria(idade);

  if(categoria == 0){
    printf("Idade sem categoria");
  }
  else{
    printf("A categoria do nadador é: %d", categoria);
  }
  
  return 0;
}
