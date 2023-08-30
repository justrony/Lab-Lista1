 #include <stdio.h>

 int main(){

    int num=0, cent=0, dezen=0, uni=0, final=0;

        printf("Digite um numero de tres digitos: ");
        scanf("%d", &num);

        cent = num / 100;
        dezen = (num / 10) % 10;
        uni = num % 10;

        final = uni * 100 + dezen * 10 + cent;

        printf("O numero com os digitos invertidos: %d\n",final);

    return 0;
 }
 