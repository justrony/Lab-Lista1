#include <stdio.h>

int main() {
  float conta=0;
  
  printf("Digite o Valor da conta: ");
  scanf("%f",&conta);
  
  conta = conta + conta*0.1;

  printf("Total a pagar: %.2f",conta);

  return 0;
}