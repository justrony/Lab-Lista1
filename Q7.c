#include <stdio.h>

int main() {

    int horas=0, minutos=0, segundos=0, final=0;
    

        printf("Digite as horas, minutos e segundos: ");
        scanf("%d %d %d", &horas, &minutos, &segundos);

        final = horas * 3600 + minutos * 60 + segundos;

        printf("O total de segundos é: %d\n", final);

    return 0;
}
