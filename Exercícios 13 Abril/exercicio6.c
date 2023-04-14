#include <stdio.h>

int main(){
    printf("Olá bem vindo à calculadora!\n");

    int n;
    float n1, n2, calc;

    printf("\n1. Somar dois números. \n2. Subtrair dois números.");
    printf("\nEscolha a opção desejada: ");
    scanf("%d", &n);

    if (n == 1){
        printf("\nOpção escolhida: Somar 2 números.\n");
        
        printf("\nColoque o primeiro número: ");
        scanf("%f", &n1);

        printf("\nColoque o segundo número: ");
        scanf("%f", &n2);

        calc = (n1 + n2);

        printf("Resultado: %.2f", calc);
    }

    if (n == 2){
        printf("\nOpção escolhida: Subtrair 2 números.\n");
        
        printf("\nColoque o primeiro número: ");
        scanf("%f", &n1);

        printf("\nColoque o segundo número: ");
        scanf("%f", &n2);

        calc = (n1 - n2);

        printf("Resultado: %.2f", calc);
    }
    return 0;
}