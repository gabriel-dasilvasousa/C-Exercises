#include <stdio.h>

float area(float raio){
  float pi = 3.14159265358979323846;
  return pi * raio * raio;
}

int main(void) {
  float raio, valorArea;
  
  printf("Digite o raio da circunferência:\n");
  scanf("%f", &raio);

  valorArea = area(raio);

  printf("A área é: %.2f", valorArea);

  return 0;
}
