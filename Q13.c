#include <stdio.h>

int main(){

    int a=0, b=0, c=0;

        printf("Digite o valor de A: ");
        scanf("%d",&a);

        printf("Digite o valor de B: ");
        scanf("%d",&b);

        c = a;
        a = b;
        b = c;

        printf("A = %d \nB = %d",a,b);

    return 0;

}