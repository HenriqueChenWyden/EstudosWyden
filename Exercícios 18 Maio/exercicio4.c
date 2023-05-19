#include <stdio.h>

int main(){
    int codigo, horas_trabalhadas;
    float valor_hora, salario_inicial, auxilio_alim, salario_min;
    char categoria, turno;

    salario_min = 450.00;

    for (int i = 0; i < 10; i++)
    {
        printf("FUNCIONÁRIO: %d\n", i+1);
        printf("DIGITE O SEU CÓDIGO: ");
        scanf("%i", &codigo);
        printf("\nDIGITE O NÚMERO DE HORAS TRABALHADAS: ");
        scanf("%d", &horas_trabalhadas);
        printf("\nDIGITE O SEU TURNO DE TRABALHO (M - MATUTINO, V - VESPERTINO ou N - NOTURNO): ");
        scanf(" %c", &turno);
        printf("\nDIGITE POR FIM, A SUA CATEGORIA (O - OPERÁRIO, G - GERENTE): ");
        scanf(" %c", &categoria);
    }

    
}