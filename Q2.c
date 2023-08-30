#include <stdio.h>

int main() {

  int x=0;
  
    printf("Digite um Valor: ");
    scanf("%d", &x);

    printf("Valor em Hexadecimal %X\n", x);
    printf("Valor em Octal %o", x);

  return 0;
}