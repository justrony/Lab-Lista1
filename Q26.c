#include <stdio.h>
#include <math.h>

int main() {

    int x1=0,x2=0,y1=0,y2=0,d=0;

      printf("Digite o valor de x1: ");
      scanf("%d",&x1);
      printf("Digite o valor de x2: ");
      scanf("%d",&x2);
      printf("Digite o valor de y1: ");
      scanf("%d",&y1);
      printf("Digite o valor de y2: ");
      scanf("%d",&y2);
  
      d = sqrt(pow(x2 - x1,2)+pow(y2 - y1,2));
    
      printf("d = %d",d);

  return 0;
}