#include <stdio.h>

int main(void) {
  
  int codAluno=0, cont=0;
  float n1, n2, n3, maiorNota, media, menorNota1, menorNota2, somaDasMedias=0;

  while(codAluno>=0){
    printf("\nDigite o código do Aluno:\n");
    scanf("%d", &codAluno);

    if(codAluno>=0){
      printf("Digite a nota 1:\n");
      scanf("%f", &n1);
      printf("Digite a nota 2:\n");
      scanf("%f", &n2);
      printf("Digite a nota 3\n");
      scanf("%f", &n3);

      if(n1>n2){
        if(n1>n3){
          maiorNota = n1;
          menorNota1 = n2;
          menorNota2 = n3;
        }else{
          maiorNota = n3;
          menorNota1 = n1;
          menorNota2 = n2;
        }
      }else if(n2>n3){
        maiorNota = n2;
        menorNota1 = n1;
        menorNota2 = n3;
      }else{
        maiorNota = n3;
        menorNota1 = n1;
        menorNota2 = n2;
      }

      media = ((maiorNota*4)+(menorNota1*3)+(menorNota2*3))/10;

      if(media>=5){
        printf("Código do Aluno é: %d\nSuas notas foram %.2f %.2f %.2f\nSua média foi %.2f\nO Aluno foi *Aprovado*\n", codAluno, n1, n2, n3, media);
      }else{
        printf("Código do Aluno é: %d\nSuas notas foram %.2f %.2f %.2f\nSua média foi %.2f\nO Aluno foi *Reprovado*\n", codAluno, n1, n2, n3, media);
      }

      somaDasMedias+=media;
      cont++;
    }
  }

  printf("A média geral é: %.2f\n", (double)somaDasMedias/cont);
  return 0;
}
