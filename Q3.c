#include <stdio.h>

int main() {

    float valor=0;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    printf("O valor digitado com uma casa decimal é: %.1f\n", valor);

    return 0;
}
