#include <stdio.h>

int main(){

float n1, n2, n3, n4;

printf("Digite o primeiro número: ");
scanf("%f", &n1);

printf("Digite o segundo número: ");
scanf("%f", &n2);

if (n2 < n1) {
    printf ("Por favor, insira em ordem crescente, recomeçe o programa.");
    return 0;
} else {
printf("Digite o terceiro número: ");
scanf("%f", &n3);
}

if (n3 < n2)
{
    printf ("Por favor, insira em ordem crescente, recomeçe o programa.");
    return 0;
} else {
printf("Digite o quarto número: ");
scanf("%f", &n4);
}

if (n1 > n2 && n1 > n3 && n1 > n4) {
    if (n2 > n3){
        printf ("Número: %.2f, %.2f, %.2f, %.2f", n1, n2, n3, n4);
    }
    
    if (n2 < n3){
        printf ("Número: %.2f, %.2f, %.2f, %.2f", n1, n3, n2, n4);
    }
    
}

if (n2 > n1 && n2 > n3 && n2 > n4) {
    if (n1 > n3){
        printf ("Número: %.2f, %.2f, %.2f, %.2f", n2, n1, n3, n4);
    }
    
    if (n1 < n3){
        printf ("Número: %.2f, %.2f, %.2f, %.2f", n2, n3, n1, n4);
    }
    
}

if (n3 > n1 && n3 > n2 && n3 > n4) {
    if (n1 > n2){
        printf ("Número: %.2f, %.2f, %.2f, %.2f", n3, n1, n2, n4);
    }
    
    if (n1 < n2){
        printf ("Número: %.2f, %.2f, %.2f, %.2f", n3, n2, n1, n4);
    }
}

if (n4 > n1 && n4 > n2 && n4 > n3) {
    if (n3 > n4){
        printf("Número: %.2f, %.2f, %.2f, %.2f", n4, n3, n1, n2);
    }
     if (n3 < n4){
        printf("Número: %.2f, %.2f, %.2f, %.2f", n4, n3, n2, n1);
    }
}

    return 0;
}