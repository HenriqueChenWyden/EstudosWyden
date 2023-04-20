// Exercício 3 - 30/03
// Nesse exercício, deverá ser realizado um programa que receba as três notas
// porém com os pesos dos mesmos e calcular a média ponderada.

#include <stdio.h>

//Inicio do Programa
int main(){

// Mostra ao usuário "Bem vindo"
    printf("Bem vindo a calculadora de média ponderada!\n");

//Dividido em 2 partes:
    float nota1, nota2, nota3, medianpond; // notas sem media ponderada
    float peso1, peso2, peso3, mediapond, nota1p, nota2p, nota3p, somapond; // notas com media ponderada

//Solicita a primeira nota
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1); //Captura a nota inserida

//Solicita a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Captura a nota inserida
    
//Solicita a terceira nota
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); //Captura a nota inserida

//Calcula inicialmente a média sem os pesos
    medianpond = (nota1 + nota2 + nota3) /3;

    printf("Média sem peso: %.1f" , medianpond); // Mostra ao usuário, a média inicialmente sem peso

//Pesos definidos
    peso1 = 2;
    peso2 = 4;
    peso3 = 1;
//Calcula-se a nota x peso
    nota1p = (nota1 * peso1);
    nota2p = (nota2 * peso2);
    nota3p = (nota3 * peso3);
//Soma-se os 3 pesos
    somapond = (peso1 + peso2 + peso3);
//Soma-se as notas x pesos e divide-se a soma dos pesos.
    mediapond = (nota1p + nota2p + nota3p) / somapond;
    
//Mostra ao usuário a média total já com os pesos.
    printf("\nMédia com os pesos: %.1f", mediapond);

    return 0;

}