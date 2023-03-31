#include <stdio.h>

int main(){

 printf("Calculadora de Área Circular v1\n");

int raio, resul;
float pi;

pi = 3.14;

printf("Insira o raio do circulo: ");
scanf("%i", &raio);

resul = (pi * raio * raio);

printf("Resultado: %i", resul);

}