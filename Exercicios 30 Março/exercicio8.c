// Exercício 8 - 30/03
// Nesse exercício, deverá ser realizado um programa cujo consiga receber um deposito
// calcular o rendimento e mostrar o mesmo, e mostrar o valor total com o rendimento.

#include <stdio.h>

//Inicio do Programa
int main(){

//Boas Vindas
    printf("Bem vindo a calculador de juros!\n");

//Valores flutuantes definidos na variável
    float valorDeposit, juros, rendiment, valorTotal;

//Solicita o valor
    printf("Qual valor você quer depositar? R$ ");
    scanf("%f", &valorDeposit); //captura o valor

//Solicita o juros
    printf("\nQual a taxa de juros? ");
    scanf("%f", &juros); //Captura o valor

//Calcula o rendimento
    rendiment = (juros) /100 * valorDeposit;
    printf("O seu depósito rendeu:R$ %.1f", rendiment); // Mostra o rendimento calculado

    valorTotal = (valorDeposit + rendiment); //Soma o valor do depósito com o rendimento
    printf("\nO seu saldo depois do rendimento foi: R$%.1f ", valorTotal); //Mostra o valor do deposito + rendimento


return 0;
}