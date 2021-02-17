#include <stdio.h>

int main(void) {
  
  int candidatoA=0, candidatoB=0, candidatoC=0, brancos=0, nulos=0, voto=-1;

  while(voto!=0){
    printf("Digite o seu voto:\n");
    scanf("%d", &voto);
    
    switch(voto){
      case 0:
        printf("Obrigado por usar este programa\n");
      case 1:
        candidatoA++;
        break;
      case 2: 
        candidatoB++;
        break;
      case 3:
        candidatoC++;
        break;
      case 4:
        nulos++;
        break;
      case 5:
        brancos++;
        break;
      default:
        printf("Voto inválido\n");
    }
  }
  
  printf("O candidato A recebeu %d votos\nO candidato B recebeu %d votos\nO candidato C recebeu %d votos\nHouveram %d votos nulos e %d votos brancos\n", candidatoA, candidatoB, candidatoC, nulos, brancos);
  
  return 0;
}
