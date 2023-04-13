#include <stdio.h>

int main(){

int n1, n2;

printf("\nEscreva um número: ");
scanf("%i", &n1);

printf("\nEscreva o segundo número: ");
scanf("%i", &n2);

if (n1 > n2){
    printf("O maior número é: %.i", n1);
} else {
    printf("O maior número é o: %.i", n2);
} 

if (n1 == n2)
{
    printf("\nMesmo número mano.");
}


return 0;
}