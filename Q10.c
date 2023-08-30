#include <stdio.h>

int main(){

    float volume=0, altura=0, largura=0, comprimento=0;

        printf("Digite o valor das dimenssoes da caixa!");
        printf("\nComprimento: ");
        scanf("%f",&comprimento);

        printf("Altura: ");
        scanf("%f",&altura);

        printf("Largura: ");
        scanf("%f",&largura);

        volume = comprimento * altura * largura;

        printf("O volume da caixa é %.1f",volume);
    
    return 0;
}