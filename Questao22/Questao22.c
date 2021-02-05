#include <stdio.h>

int main(void) {
  
  int cont=0;
  int n = 3;

  while(cont<17){
      if(n%2!=0){
        if(n%3!=0){
          if(n%5!=0){
            printf("%d°, %d é primo\n", cont+4, n);
            cont++;
          }
        }
      }
  
    n++;
  }

  return 0;
}
