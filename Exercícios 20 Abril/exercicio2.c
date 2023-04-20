#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Calculadora de Salário + Cargo v1\n");

    int codigo;
    float aumentom, salarioatual, salarioaum;

    printf("\nComece por digitar o teu código de cargo, considerando a lista abaixo.");

    printf("\n1 - Escriturário");
    printf("\n2 - Secretário");
    printf("\n3 - Caixa");
    printf("\n4 - Gerente");
    printf("\n5 - Diretor");

    printf("\nDigite o seu código: ");
    scanf("%i", &codigo);

    printf("\nSeu código: %i", codigo);

    system("clear");

    if (codigo == 1){
        printf("\n\nDigite agora o seu salário atual: R$ ");
        scanf("%f", &salarioatual);
        printf("Cargo: Escriturário");
        aumentom = 0.5 * salarioatual;
        salarioaum = salarioatual + aumentom;
        printf("\nSeu aumento será de: R$ %.2f", aumentom);
        printf("\nNovo Salário será de: R$ %.2f", salarioaum);
    } else if (codigo == 2){
        printf("\n\nDigite agora o seu salário atual: R$ ");
        scanf("%f", &salarioatual);
        printf("Cargo: Secretário");
        aumentom = 0.35 * salarioatual;
        salarioaum = salarioatual + aumentom;
        printf("\nSeu aumento será de: R$ %.2f", aumentom);
        printf("\nNovo Salário será de: R$ %.2f", salarioaum);
    } else if (codigo == 3){
        printf("\n\nDigite agora o seu salário atual: R$ ");
        scanf("%f", &salarioatual);
        printf("Cargo: Caixa");
        aumentom = 0.2 * salarioatual;
        salarioaum = salarioatual + aumentom;
        printf("\nSeu aumento será de: R$ %.2f", aumentom);
        printf("\nNovo Salário será de: R$ %.2f", salarioaum);
    } else if (codigo == 4){
        printf("\n\nDigite agora o seu salário atual: R$ ");
        scanf("%f", &salarioatual);
        printf("Cargo: Gerente");
        aumentom = 0.1 * salarioatual;
        salarioaum = salarioatual + aumentom;
        printf("\nSeu aumento será de: R$ %.2f", aumentom);
        printf("\nNovo Salário será de: R$ %.2f", salarioaum);
    } else if (codigo == 5){
        printf("\n\nDigite agora o seu salário atual: R$ ");
        scanf("%f", &salarioatual);
        printf("Cargo: Diretor");
        printf("\nVocê não terá aumento! :(");
        printf("\nO Salário será de: R$ %.2f", salarioatual);
    } else
    printf("\nCódigo Inválido! Digite um código válido.");
    return 0;
}