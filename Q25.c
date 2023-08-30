#include <stdio.h>

int main() {

    int temp=0, hr=0, min=0, seg=0;

        printf("Digite o tempo em segundos: ");
        scanf("%d",&temp);

        hr = temp / 3600;       
        min = (temp % 3600) / 60;
        seg = temp % 60;

        printf("Tempo: %d segundos é equivalente a %d horas, %d minutos e %d segundos",temp,hr,min,seg);

    return 0;
}
