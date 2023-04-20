// Exercício 5 - 30/03
// Nesse exercício, deverá ser realizado um programa onde receberá o salário base
// e um percentual de aumento, será calculado e mostrará o valor de aumento e o salário novo.

#include <stdio.h>


//Inicio de Programa
int main(){

//Boas vindas
printf("Bem vindo a sua calculadora de aumento de salário!\n");

//Valor flutuante e inteiro.
float salario, resul_aumento;
int aumento, resul_salario;


//Solicita o salário
printf("Insira o teu salário: ");
scanf("%f", &salario); //Captura a informação

//Solicita o Aumento
printf("\nAgora, o teu aumento pretendido: ");
scanf("%i", &aumento); //Captura a informação

resul_aumento = (salario * aumento) / 100; //Calcula o resultado do aumento

resul_salario = (salario + resul_aumento); //Calcula o salário final

printf("O teu aumento será de: R$%.1f\n", resul_aumento); //Mostra o valor do aumento
printf("O seu novo salário será de: R$%.1i", resul_salario); //Mostra o salário novo após aumento.

return 0;

}