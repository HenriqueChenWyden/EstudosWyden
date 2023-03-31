    // Exercício 1 - 30/03
    // Nesse exercício, deverá ser realizado um programa cujo receba quatro números inteiros
    // e mostrar o resultado da soma

#include <stdio.h>

//Inicio do Programa
int main(){

    //Nessa parte, começaremos mostrando na tela do usuário (output), uma saudação "Calculadora".

    printf("Calculadora de soma v1\n");

    //Aqui, define as variáveis cujo o valor é int (inteiro), no caso, número.

    int n1, n2, n3, n4, resul;

    //Nesta parte, solicitamos ao usuário, os números

    printf("Digite o primeiro número: "); // Solicita o primeiro número.
    scanf("%i", &n1); // Aqui capturamos a info recebida, no caso, o primeiro número.

    printf("Digite o segundo número: "); // Solicita o segundo número.
    scanf("%i", &n2); // Aqui capturamos a info recebida, no caso, o segundo número.

    printf("Digite o terceiro número: "); // Solicita o terceiro número.
    scanf("%i", &n3); // Aqui capturamos a info recebida, no caso, o terceiro número.

    printf("Digite o quarto número: "); // Solicita o quarto número.
    scanf("%i", &n4); // Aqui capturamos a info recebida, no caso, o quarto número.

    resul = (n1 + n2 + n3 + n4);  // Somamos os quatros números e guardamos na variável "resul".

    printf ("Resultado da Soma: %i ", resul); // Após o cálculo, o resultado da soma acrescentado ao "%i", 
                                              // onde indica para o compilador que será um inteiro e a variável resul.
    return 0; // Não é necessário porém é considerado uma boa prática
}