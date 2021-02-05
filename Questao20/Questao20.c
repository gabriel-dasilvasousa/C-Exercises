#include <stdio.h>
#include<string.h>

int main(void) {
  
  int codCidade, numVei, numAcidentes, numeroVeiculosTotal=0, numAcidentesRS=0, cidadesDoRS=0, menorInd=0, maiorInd, codCidadeMaiorInd, codCidadeMenorInd=0, cont=0, n;
  char estado[3];

  while(cont<200){
    printf("Digite o código da cidade:\n");
    scanf("%d", &codCidade);
    printf("Digite o estado a qual essa cidade pertence:\n");
    scanf("%s", &*estado);
    printf("Digite o numero de veículos de passeio da cidade no ano de 2012:\n");
    scanf("%d", &numVei);
    printf("Digite o numero de acidentes de trânsito com vítimas da cidade no ano de 2012:\n");
    scanf("%d", &numAcidentes);

    if(numAcidentes> maiorInd){
      maiorInd = numAcidentes;
      codCidadeMaiorInd = codCidade;
    }else if(menorInd==0 || numAcidentes<menorInd){
      menorInd = numAcidentes;
      codCidadeMenorInd = codCidade;
    }

    numeroVeiculosTotal+=numVei;

    if(strcmp(estado, "RS") == 0 || strcmp(estado, "rs") == 0){
      numAcidentesRS+=numAcidentes;
      cidadesDoRS++;
    }

    cont++;
  }

  printf("O maior indice de acidentes é %d, a cidade com esse indice tem o código %d\n", maiorInd, codCidadeMaiorInd);
  printf("O menor indice de acidentes é %d, a cidade com esse indice tem o código %d\n", menorInd, codCidadeMenorInd);
  printf("A média de veículos das cidades brasileiras é: %.2f\n", (double) numeroVeiculosTotal/200);
  printf("A média de acidentes com vítimas nas cidades do RS é: %.2f\n", (double) numAcidentesRS/cidadesDoRS);
  
  return 0;
}


