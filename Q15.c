#include <stdio.h>

int main(){

    float daily=50.25, diasTrabalhados=0, salarioLiq=0;
    float salarioBrut=0, imposto=0;

        printf("Digite os dias trabalhados: ");
        scanf("%f",&diasTrabalhados);

        salarioBrut = diasTrabalhados * daily;

        if(diasTrabalhados <= 10){

                imposto = salarioBrut * 0.1;
                salarioLiq = salarioBrut - imposto;

        } else if(diasTrabalhados <= 20){

                salarioBrut = salarioBrut + salarioBrut * 0.2; 
                imposto = salarioBrut * 0.1;
                salarioLiq = salarioBrut - imposto;

        } else{

                salarioBrut = salarioBrut + salarioBrut * 0.3; 
                imposto = salarioBrut * 0.1;
                salarioLiq = salarioBrut - imposto;
        }

        printf("Salario final: R$ %.2f",salarioLiq);
        
    return 0;

}