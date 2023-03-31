#include <stdio.h>

int main(){

    printf("Bem vindo a calculadora de média ponderada!\n");

    float nota1, nota2, nota3, medianpond; // notas sem media ponderada
    float peso1, peso2, peso3, mediapond, nota1p, nota2p, nota3p, somapond; // notas com media ponderada



    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    medianpond = (nota1 + nota2 + nota3) /3;

    printf("Média sem peso: %.1f" , medianpond);

    peso1 = 2;
    peso2 = 4;
    peso3 = 1;

    nota1p = (nota1 * peso1);
    nota2p = (nota2 * peso2);
    nota3p = (nota3 * peso3);

    somapond = (peso1 + peso2 + peso3);
    mediapond = (nota1p + nota2p + nota3p) / somapond;
    
    printf("\nMédia com os pesos: %.1f", mediapond);

}