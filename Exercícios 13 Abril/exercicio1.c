#include <stdio.h>
#include <stdlib.h>

int main (){

    printf("Bem vindo!");

 float n1, n2, n3, media, notamin;

 printf("\nDigite a sua primeria nota: ");
 scanf("%f", &n1);

 printf("\nDigite a sua segunda nota: ");
 scanf("%f", &n2);

 printf("\n Digite a terceira nota: ");
 scanf("%f", &n3);

 media = (n1 + n2 + n3) /3;

system ("clear");

if (media >= 0.0 && media < 3.0){
 printf("Sua média: %.2f", media);
 printf ("\nReprovado!");
}

if (media >= 3.0 && media < 7.0) {
    printf("Sua média: %.2f", media);
    printf ("\nPreparar para o exame. \n");
    notamin = 12 - media;
    printf("Nota minima: %.2f", notamin);
}

if (media >= 7.0 && media < 10.0)
{
     printf("Sua média: %.2f", media);
     printf("\nAprovado!");
}





}