#include <stdio.h>

int main(void) {

  int idade=0, maiorIdade=0, menorIdade=0, cont=0, qtdMulSal100=0;
  char sexo;
  float salario=0, somaDosSalarios=0;

  while(idade>=0){
    printf("\nDigite sua idade\n");
    scanf("%d", &idade);
    if(idade>=0){
      printf("Digite seu sexo\n");
      scanf(" %c", &sexo);
      printf("Digite seu salário\n");
      scanf(" %f", &salario);

      somaDosSalarios+=salario;
      
      if(cont==0){
      	menorIdade = idade;
      	maiorIdade =idade;
      }
      else if(idade>maiorIdade){
        maiorIdade = idade;
      }
      else if(idade<menorIdade){
        menorIdade = idade;
      }

      if(sexo=='f' || sexo=='F' && salario<=100.0){
       qtdMulSal100++;
      }
      cont++;
    }
  }
  
  printf("A média de salários do grupo é %.2f\nA maior idade é %d anos\nA menor idade é %d anos\nA quantidade de mulheres com salários até R$100,00 é %d", somaDosSalarios/cont, maiorIdade, menorIdade, qtdMulSal100);

  return 0;
}
