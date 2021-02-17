#include<stdio.h>

int main(){
  
  int dias=0, meses=0, anos=0;
  
  printf("Questao 4, calcular tempo de trabalho\n");

  printf("Digite o numero de dias:\n");
  scanf("%d", &dias);

  if(dias >= 360){
    anos = dias/360;
    dias -= anos*360;
  }

  if(dias>=30){
    meses = dias/30;
    dias -= meses*30;
  }
  
  printf("O tempo de trabalho é: %d anos, %d meses, %d dias\n", anos, meses, dias);
  
  return 0;
}
