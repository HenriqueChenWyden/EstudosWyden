#include <stdio.h>

int main(){

    printf("Bem vindo a calculadora de soma!\n");

    int n1, n2, n3, n4, resul;

    printf("Digite o primeiro número: ");
    scanf("%i", &n1);

    printf("Digite o segundo número: ");
    scanf("%i", &n2);

    printf("Digite o terceiro número: ");
    scanf("%i", &n3);

    printf("Digite o quarto número: ");
    scanf("%i", &n4);

    resul = (n1 + n2 + n3 + n4);    

    printf ("Resultado da Soma: %i ", resul);

}