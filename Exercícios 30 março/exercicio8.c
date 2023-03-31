#include <stdio.h>

int main(){

    printf("Bem vindo a calculador de juros!\n");

    float valorDeposit, juros, rendiment, valorTotal;

    printf("Qual valor você quer depositar? R$ ");
    scanf("%f", &valorDeposit);

    printf("\nQual a taxa de juros? ");
    scanf("%f", &juros);

    rendiment = (juros) /100 * valorDeposit;
    printf("O seu depósito rendeu:R$ %.1f", rendiment);

    valorTotal = (valorDeposit + rendiment);
    printf("\nO seu saldo depois do rendimento foi: R$%.1f ", valorTotal);


return 0;
}