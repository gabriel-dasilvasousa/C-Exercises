#include <stdio.h>
#include <math.h>

int main(void) {
  
  int horas;
  float minutos, segundos, qtdMin, resto;

  printf("Conversor de tempo\n");

  printf("Digite a quantidade de minutos\n");
  scanf("%f", &qtdMin);
  
  if(qtdMin>60){
    horas = qtdMin/60;
    qtdMin -= horas*60;
  }

  if(qtdMin > 1){
    resto = fmod(qtdMin,1);
    minutos = qtdMin - resto;
    segundos = resto*60;
  }

  printf("%d h, %.2f minutos, %.2f segundos", horas, minutos, segundos);

  return 0;
}
