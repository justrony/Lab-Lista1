#include <stdio.h>

int main() {

    float raio, diametro, circunferencia, area;
    const float pi = 3.14159;

 
        printf("Digite o raio do circulo: ");
        scanf("%f",&raio);


        diametro = 2 * raio;
        circunferencia = 2 * pi * raio;
        area = pi * raio * raio;


        printf("Diametro: %.2f\n", diametro);
        printf("Circunferencia: %.2f\n", circunferencia);
        printf("Area: %.2f\n", area);

    return 0;
}
