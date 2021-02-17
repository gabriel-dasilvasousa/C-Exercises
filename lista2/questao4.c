#include <stdio.h>

int tempoParaSegundos(int horas, int minutos, int segundos){
  return (horas * 3600) + (minutos * 60) + segundos;
}

int main(void) {

  int horas, minutos, segundos, tempoTotal;

  printf("Digite o número de horas que duram o processo:\n");
  scanf("%d", &horas);
  printf("Digite o número de minutos que duram o processo:\n");
  scanf("%d", &minutos);
  printf("Digite o número de segundos que duram o processo:\n");
  scanf("%d", &segundos);

  tempoTotal = tempoParaSegundos(horas, minutos, segundos);

  printf("A hora informada é igual %d segundos", tempoTotal);

  return 0;
}
