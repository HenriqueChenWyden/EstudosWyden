// Exercício 9 - 30/03
// Nesse exercício, deverá ser realizado um programa que calcule a área de um triângulo.

#include <stdio.h>

//Inicio do Programa
int main(){

//Boas vindas
printf("Calculadora de Área Triangular v1\n");

//Valores inteiros definidos na variável
int base, altura, resul;

//Solicita a base do triangulo
printf("Insira a base do triângulo: ");
scanf("%i", &base); //captura a informação

//Solicita a altura do triangulo
printf("Insira a altura do triângulo: ");
scanf("%i", &altura); //captura a informação

resul = (base * altura) /2; //base x altura divide por 2

printf("Base do Triângulo: %i ", base); //Mostra a base inserido
printf("\nAltura do Triângulo: %i ", altura); //Mostra a altura inserido

printf("\nÁrea do Triângulo: %i", resul); //Mostra a área do triangulo com base nas informações

return 0;


}