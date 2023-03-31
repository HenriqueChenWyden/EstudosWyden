#include <stdio.h>

int main(){

    printf("Bem vindo à calculadora de salário!");

    float salario, salarioaum, total;

    printf("\nDigite o valor do seu salário: R$ ");
    scanf("%f", &salario);

    salarioaum = (salario * 25) / 100;

    total = (salario + salarioaum);

    printf("O seu salário com o aumento de 25% é de: R$ %.1f\n", total);
    printf("Aumento de: R$ %.1f", salarioaum);

    return 0;

}