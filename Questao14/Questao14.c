#include <stdio.h>

int main(void) {
  
  int cont=0, filhos=0, salarioAte100=0, somaDeFilhos=0;
  float salario=0, somaDeSalario=0, maiorSalario=0;

  while(salario>=0){
    printf("Digite o seu salário:\n");
    scanf("%f", &salario);
    if(salario>=0){
      printf("Digite o seu numero de filhos:\n");
      scanf("%d", &filhos);
      if(salario>maiorSalario) maiorSalario=salario;
      if(salario<=100) salarioAte100++;
      somaDeSalario+=salario;
      somaDeFilhos+=filhos;
      cont++;
    }    
  }

  printf("A media salarial da população é: %.2f\nA média de filhos da população é: %.2f\nO maior salário é R$%.2f\nO percentual de pessoas que tem salário até R$100,00 é %.2f%%", somaDeSalario/cont, (double)somaDeFilhos/cont, maiorSalario, (double)(salarioAte100/cont)*100);

  return 0;
}
