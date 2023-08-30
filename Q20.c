#include <stdio.h>

int main() {

  int num=0;
  
    printf("Digite um numero: ");
    scanf("%d",&num);

    (num%2)?puts("Impar"):puts("Par");
  
  return 0;
}