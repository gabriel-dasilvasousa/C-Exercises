#include <stdio.h>

float calculaPesoIdeal(float altura, char sexo){
  if(sexo == 'm' || sexo == 'M'){
    return (72.7*altura) - 58.0;
  }else if(sexo == 'f' || sexo == 'F'){
    return (62.1*altura) - 44.7;
  }else{
    return 0;
  }

}

int main(void) {
  
  float altura, pesoIdeal;
  char sexo;

  printf("Digite a altura:\n");
  scanf("%f", &altura);

  printf("Digite o sexo (m/f):\n");
  scanf(" %c", &sexo);

  pesoIdeal = calculaPesoIdeal(altura, sexo);

  if(pesoIdeal == 0){
    printf("Sexo inválido");
  }else{
    printf("O peso ideal é: %.2f", pesoIdeal);
  }

  return 0;
}
