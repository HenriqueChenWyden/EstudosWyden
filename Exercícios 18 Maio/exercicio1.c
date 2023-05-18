#include <stdio.h>

int main(){
    // Funcionário contratado em 2005

    int ano, i;
    float salario_inicial, salario, percent = 1.5/100;

    salario_inicial = 1000;

    salario = salario_inicial + salario_inicial*percent; // Calculo Base para 2006.

    printf("Olá, digite o ano desejado: ");
    scanf("%d", &ano);

    for(i=2007; i<=ano; i++){
        percent = percent * 2;
        salario = salario + salario * percent;

        printf("\n Ano: %d, Aumento: %f, Salário: R$ %1.2f", i, percent, salario);
    }

    return 0;
}