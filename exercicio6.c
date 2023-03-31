#include <stdio.h>

int main(){

printf("Bem vindo ao calculadora de salário do governo federal.\n");

float salariobase, gratific, imposto, aReceber;

printf("Insira o seu salário atual: ");
scanf("%f", &salariobase);

imposto = (salariobase * 7) /100;
gratific = (salariobase * 5) /100;

printf("Salário inserido: R$ %.1f\n", salariobase);
printf("Imposto calculado: R$ %.1f\n", imposto);
printf("Bonificação calculado: R$ %.1f\n", gratific);

aReceber = (salariobase - imposto + gratific);

printf("\nSalário a receber: %.1f", aReceber);

return 0;

}