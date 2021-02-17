#include <stdio.h>

int main(void) {

  float alturaChico=1.50, alturaZe=1.10;
  int anos=0;

  while(alturaChico>=alturaZe){
    alturaChico+=0.02;
    alturaZe+=0.03;
    anos++;    
  }

  printf("Em %d anos, Zé será mais alto que Chico\n", anos);

  return 0;
}
