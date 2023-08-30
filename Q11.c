#include <stdio.h>

int main(){

    float cotacao=0, realValue=0;

        printf("Digite o valor em real: ");
        scanf("%f",&realValue);

        printf("Digite a cotacao do dolar: ");
        scanf("%f",&cotacao);

        printf("R$ %2.f = US$ %2.f",realValue, realValue*cotacao);

    return 0;
}