#include <stdio.h>
#include <math.h>

int main() {
    float num1=0, num2=0, num3=0;
    
        printf("Digite tres numeros em ponto flutuante:\n");
        scanf("%f %f %f", &num1, &num2, &num3);

        float media_ari = (num1 + num2 + num3) / 3;


        float media_geo = pow(num1 * num2 * num3, 1.0 / 3);

        printf("Media Aritmetica: %.2f\n", media_ari);
        printf("Media Geometrica: %.2f\n", media_geo);

    return 0;
}
