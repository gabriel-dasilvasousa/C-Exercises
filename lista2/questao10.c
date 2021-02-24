#include <stdio.h>

int verificaTipoDeTriangulo(float n1, float n2, float n3){
  if((n1 >= n2+n3) || (n2 >= n1+n3) || (n3>=n1+n2)){
    return 0;
  }else if((n1==n2) && (n1==n3)){
    return 1;
  }else if((n1==n2 && n2!=n3) || (n2==n3 && n3!=n1) || (n1==n3 && n3!=n2)){
    return 2;
  }else{
    return 3;
  }
}


int main(void) {
  float n1, n2, n3;
  int tipoDeTriangulo;

  printf("Entre com o primeiro valor:\n");
  scanf("%f", &n1);
  printf("Entre com o primeiro valor:\n");
  scanf("%f", &n2);
  printf("Entre com o primeiro valor:\n");
  scanf("%f", &n3);
  
  tipoDeTriangulo = verificaTipoDeTriangulo(n1, n2, n3);

  if(tipoDeTriangulo == 0){
    printf("Os números informados não podem ser lados de um triângulo\n");
  }else if(tipoDeTriangulo == 1){
    printf("Os números informados formam um triângulo equilátero, já que tem três lados iguais\n");
  }else if(tipoDeTriangulo == 2){
    printf("os números informados formam um triângulo isósceles, já que o comprimento de dois lados são iguais\n");
  }else{
    printf("os números informados formam um triângulo escaleno, já que o comprimento dos três lados são diferentes\n");
  }

  return 0;
}
