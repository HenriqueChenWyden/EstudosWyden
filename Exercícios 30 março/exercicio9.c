#include <stdio.h>

int main(){

printf("Calculadora de Base Triangular v1\n");

int base, altura, resul;

printf("Insira a base do triângulo: ");
scanf("%i", &base);

printf("Insira a altura do triângulo: ");
scanf("%i", &altura);

resul = (base * altura) /2;

printf("Base do Triângulo: %i ", base);
printf("\nAltura do Triângulo: %i ", altura);

printf("\nÁrea do Triângulo: %i", resul);

return 0;


}