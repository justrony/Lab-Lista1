#include <stdio.h>

int main(){

    int diasTrabalhados=0, inss=0;
    float salarioLiq=0, salarioBrut=0, hrAula=0;

        printf("Digite o valor da hora aula: ");
        scanf("%f",&hrAula);

        printf("Digite os dias trabalhados: ");
        scanf("%d",&diasTrabalhados);

        printf("Digite a porcetagem da taxa do INSS: ");
        scanf("%d",&inss);

        salarioBrut = hrAula * diasTrabalhados;
        salarioLiq = salarioBrut - salarioBrut * inss/100;

        printf("\nSalario liquido: R$ %.2f\nSalario bruto: R$ %.2f",salarioLiq,salarioBrut);

    return 0;

}