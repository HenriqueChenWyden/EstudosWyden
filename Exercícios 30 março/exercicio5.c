#include <stdio.h>

int main(){

printf("Bem vindo a sua calculadora de aumento de salário!\n");

float salario, resul_aumento;
int aumento, resul_salario;

printf("Insira o teu salário: ");
scanf("%f", &salario);

printf("\nAgora, o teu aumento pretendido: ");
scanf("%i", &aumento);

resul_aumento = (salario * aumento) / 100;

resul_salario = (salario + resul_aumento);

printf("O teu aumento será de: R$%.1f\n", resul_aumento);
printf("O seu novo salário será de: R$%.1i", resul_salario);

return 0;

}