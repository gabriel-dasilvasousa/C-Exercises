#include <stdio.h>

int main(void) {

  int cont=0, sexo, idade, altura, maiorIdade, menorIdade, somaIdadeGrupo=0, somaAlturaMulheres=0, somaIdadeHomens=0, pessoasEntre18e35Anos=0, mulheres=0, homens=0;

  while(cont<1000){
    printf("Digite o sexo:[0-Feminino, 1-Masculino]\n");
    scanf("%d", &sexo);

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura\n");
    scanf("%d", &altura);

    if(maiorIdade<idade){
      maiorIdade=idade;
    }else if(idade<menorIdade){
      menorIdade = idade;
    }else if(menorIdade==0){
      menorIdade = idade;
    }

    somaIdadeGrupo+=idade;
    if(sexo == 0){
      somaAlturaMulheres+=altura;
      mulheres++;
    }else if(sexo==1){
      somaIdadeHomens+=idade;
      homens++;
    }
    else{
      printf("Sexo inválido");
    }

    if(idade>=18 && idade<=35) pessoasEntre18e35Anos++;

    cont++;
  }

  printf("A maior idade é: %d anos\n", maiorIdade);
  printf("A menor idade é: %d anos\n", menorIdade);
  printf("A media de idade do grupo é %.2f anos\n", (double)somaIdadeGrupo/1000);
  printf("A media de altura das mulheres é %.2f \n", (double)somaAlturaMulheres/mulheres);
  printf("A media de idade dos homens é %.2f anos\n", (double)somaIdadeHomens/homens);
  printf("O percentual de pessoas com idade entre 18 e 35 anos é: %.2f\n",(double) (pessoasEntre18e35Anos/1000)*100);
  return 0;
}
