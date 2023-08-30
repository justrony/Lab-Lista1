#include <stdio.h>

int main(){

    int num=0, bf_num=0, af_num=0;

        printf("Digite um numero: ");
        scanf("%d",&num);

        bf_num = num - 1;
        af_num = num + 1;

        printf("O antecessor e sucessor do numero %d sao respectivamente %d e %d",num, bf_num, af_num);

    return 0;
}