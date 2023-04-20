#include <stdio.h>

int main(){

    printf("Calculadora de Salário + Cargo v1\n");

    int codigo, percentual, cargos;
    float aumentom, salarioatual, salarioaum;

    printf("\nComece por digitar o teu código de cargo, considerando a lista abaixo.");

    printf("\n1 - Escriturário\n 2 - Secretário\n 3 - Caixa\n 4 - Gerente\n 5 - Diretor");

    printf("\nDigite o seu código: ");
    scanf("%i", &codigo);

    printf("\nSeu código: %i", codigo);

    printf("\n\nDigite agora o seu salário atual: R$ ");
    scanf("%f", salarioatual);



}