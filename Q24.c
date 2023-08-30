#include <stdio.h>

int main() {

    int x=0, n=0;

        printf("Digite o valor de x: ");
        scanf("%d",&x);

        printf("Digite o valor de n: ");
        scanf("%d",&n);

        int result = x << n;

        printf("O produto entre %d e 2 elevado a %d: %d\n",x,n,result);

    return 0;
}
