// Exercício 4 - 30/03
// Nesse exercício, deverá ser realizado um programa que consiga receber o salário
// de um funcionário, e calcule considerando um aumento de 25% e após mostrando o novo salário

#include <stdio.h>

//Início do Programa
int main(){

//Mensagem de boas vindas
    printf("Bem vindo à calculadora de salário!");

//Define variáveis em flutuante (float)
    float salario, salarioaum, total;

//Solicita o valor do salário.
    printf("\nDigite o valor do seu salário: R$ ");
    scanf("%f", &salario); //Captura o valor

    salarioaum = (salario * 25) / 100; //Calcula o aumento do salário multiplicando 
                                       //por 25 e após dividindo por 100

    total = (salario + salarioaum); //Calcula o salário base + o aumento

    printf("O seu salário com o aumento de 25% é de: R$ %.1f\n", total); //Mostra o salário com aumento
    printf("Aumento de: R$ %.1f", salarioaum); //Mostra o valor do aumento.

    return 0;

}