#include <stdio.h>

int main(void) {

  int x=0,y=0;

      printf("Digite o primeiro numero: ");
      scanf("%d",&x);

      printf("Digite o segundo numero: ");
      scanf("%d",&y);

      (x%y)?printf("%d e %d nao sao multiplos",x,y):printf("%d e %d sao multiplos",x,y);
  
  return 0;
}