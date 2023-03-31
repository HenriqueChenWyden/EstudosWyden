#include <stdio.h>

int main(){

    printf("Bem vindo à calculadora de nota e média!\n");

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) /3;

    printf("Sua nota foi: %.1f ", media);

    return 0;




}