#include <stdio.h>

int main()
{
    int codigo, horas_trabalhadas;
    float valor_hora, salario_inicial, auxilio_alim, salario_min, porcentagem, salario_final;
    char categoria, turno;

    salario_min = 450.00; // Salário minímo definido.

    // Entrada dos dados de funcionários

    for (int i = 0; i < 10; i++)
    {
        printf("FUNCIONÁRIO: %d\n", i + 1);
        printf("DIGITE O SEU CÓDIGO: ");
        scanf("%i", &codigo);
        printf("\nDIGITE O NÚMERO DE HORAS TRABALHADAS: ");
        scanf("%d", &horas_trabalhadas);
        printf("\nDIGITE O SEU TURNO DE TRABALHO (M - MATUTINO, V - VESPERTINO ou N - NOTURNO): ");
        scanf(" %c", &turno);
        // Verificação de turno
        if (turno != 'M' && turno != 'V' && turno != 'N')
        {
            printf("\nTURNO INVÁLIDO, TENTE NOVAMENTE.\n");
            return 0;
        }

        printf("\nDIGITE POR FIM, A SUA CATEGORIA (O - OPERÁRIO, G - GERENTE): ");
        scanf(" %c", &categoria);
        // Verificação de categoria
        if (categoria != 'O' && categoria != 'G')
        {
            printf("\nCATEGORIA INVÁLIDA, TENTE NOVAMENTE.\n");
            return 0;
        }

        // Calculo da hora trabalhada

        if (categoria == 'G' && turno == 'N')
        {
            porcentagem = salario_min * 0.18;
            valor_hora = (salario_min - porcentagem); // Considerando que o Gerente trabalha 120 horas por mês.
        }
        else if (categoria == 'G' && turno == 'M' || 'V')
        {
            porcentagem = salario_min * 0.15;
            valor_hora = (salario_min - porcentagem);
        }

        if (categoria == 'O' && turno == 'N')
        {
            porcentagem = salario_min * 0.13;
            valor_hora = (salario_min - porcentagem); // Considerando que o Operário trabalha 160 horas por mês.
        }
        else if (categoria == 'O' && turno == 'M' || 'V')
        {
            porcentagem = salario_min * 0.10;
            valor_hora = (salario_min - porcentagem);
        }

        // Calculo do Salário Inicial
        salario_inicial = valor_hora * horas_trabalhadas;

        // Calculo do Auxílio Alimentação
        if (salario_inicial <= 300.00)
        {
            auxilio_alim = salario_inicial * 0.20;
        }

        if (salario_inicial > 300.00 && salario_inicial <= 600.00)
        {
            auxilio_alim = salario_inicial * 0.15;
        }

        if (salario_inicial > 600.00)
        {
            auxilio_alim = salario_inicial * 0.05;
        }

        salario_final = salario_inicial + auxilio_alim;

        // Saída dos dados
        printf("\nCÓDIGO: %i\n", codigo);
        printf("\nNÚMEROS DE HORAS TRABALHADAS: %d\n", horas_trabalhadas);
        printf("\nVALOR DA HORA TRABALHADA:R$ %1.2f\n", valor_hora);
        printf("\nSALÁRIO INICIAL:R$ %1.2f\n", salario_inicial);
        printf("\nAUXÍLIO ALIMENTAÇÃO:R$ %1.2f\n", auxilio_alim);
        printf("\nSALÁRIO FINAL:R$ %1.2f\n", salario_final);

        printf("\n");
    }
    return 0;
}