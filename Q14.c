#include <stdio.h>

int main(){

    int c=0, f=0;

        printf("Digite a temperatura em °C: ");
        scanf("%d",&c);

        f = (9 * c + 150) / 5;

        printf("%d°C = %d°F",c,f);
        
    return 0;

}