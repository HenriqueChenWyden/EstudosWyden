// Exercício 7 - 30/03
// Nesse exercício, deverá ser realizado um programa cujo consiga receber o salário base
// calcular e mostrar o salário a receber, sendo que tem gratificação de 50 reais em cima do salário base
// e imposto de 10%.

#include <stdio.h>

//Inicio do Programa
int main(){

//Boas vindas
printf("Bem vindo ao calculadora de salário do governo federal.\n");

//Valores flutuantes definidos na variável
float salariobase, gratific, imposto, aReceber;

//Solicita o salario atual
printf("Insira o seu salário atual: ");
scanf("%f", &salariobase); //captura a informação

imposto = (salariobase * 10) /100; //Calcula em cima do salário base, o imposto
gratific = 50; //Gratificação definida em 50 reais

printf("Salário inserido: R$ %.1f\n", salariobase); //Mostra o salário que foi inserido
printf("Imposto calculado: R$ %.1f\n", imposto); // Mostra o imposto calculado
printf("Bonificação: R$ %.1f\n", gratific); //Mostra a Gratificação definido

aReceber = (salariobase - imposto + gratific); //Calcula subtraindo o imposto do salario e adicionando a gratificação

printf("\nSalário a receber: %.1f", aReceber); // Mostra o salário a receber.

return 0;

}