#include <stdio.h>

int main(){

    int x=0, y=0;

        printf("Digite o valor de X: ");
        scanf("%d",&x);

        printf("Digite o valor de Y: ");
        scanf("%d",&y);

        printf("\nx + y = %d", x+y);
        printf("\nx * y = %d", x*y);
        printf("\nx - y = %d", x-y);

        if(y != 0){
            printf("\nx / y = %d", x/y);
        } else {
            printf("\nA divisao nao pode ser efetuada!");
        }

        printf("\nx %% y = %d", x%y);

    return 0;
}