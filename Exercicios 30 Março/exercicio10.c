// Exercício 9 - 30/03
// Nesse exercício, deverá ser realizado um programa que calcule a área de um circulo.

#include <stdio.h>

//Inicio do Programa
int main(){

//Boas vindas
 printf("Calculadora de Área Circular v1\n");

////Valores inteiros definidos na variável e flutuante "pi"
int raio, resul;
float pi;

//Pi definido como 3,14
pi = 3.14;

//Solicita o raio do circulo
printf("Insira o raio do circulo: ");
scanf("%i", &raio); //Captura a informação

resul = (pi * raio * raio); //pi * raio 2x

printf("Resultado: %i", resul); //Mostra o resultado da área.


return 0;
}