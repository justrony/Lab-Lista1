#include <stdio.h>
#include <stdlib.h>

int main(){

    int num=0;

        printf("Digite um numero: ");
        scanf("%d",&num);

        num = abs(num);

        printf("Valor absoluto: %d",num);

    return 0;

}