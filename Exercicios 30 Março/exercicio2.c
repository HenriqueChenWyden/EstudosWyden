// Exercício 2 - 30/03
// Nesse exercício, deverá ser feito um programa que receba três notas,
// calculando e mostrando a média aritmética entre elas no output.

#include <stdio.h>

//Inicio do Programa
int main(){

//Mostra ao usuário uma saudação "Bem vindo"
    printf("Bem vindo à calculadora de nota e média!\n");


//Define as variáveis, no caso em valor flutuante (float)
    float nota1, nota2, nota3, media;

//Solicita a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); //Captura a primeira nota

//Solicita a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Captura a segunda nota

//Solicita a terceira nota
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); //Captura a terceira nota

//Realiza a soma das três notas e divide por três.
    media = (nota1 + nota2 + nota3) /3;

//Mostra ao usuário a média entre as 3 notas.
    printf("Sua média foi: %.1f ", media);

    return 0;




}