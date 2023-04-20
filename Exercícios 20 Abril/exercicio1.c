#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Bem vindo ao Calendário Cronológico.\n");

    int dia, mes, ano;
    int dia2, mes2, ano2;

    printf("Qual é o primeiro dia: ");
    scanf("%i", &dia);

    printf("Qual é o mês? (em número): ");
    scanf("%i", &mes);

    printf("E por fim, digite o ano: ");
    scanf("%i", &ano);

    system("clear");

    printf("Qual é o segundo dia: ");
    scanf("%i", &dia2);

    printf("Qual é o segundo mês? (em números): ");
    scanf("%i", &mes2);

    printf("Finalmente, qual é o segundo ano: ");
    scanf("%i", &ano2);

    system("clear");

    printf("Primeira data enviado: %i/%i/%i\n", dia, mes, ano);

    printf("Segunda data enviado: %i/%i/%i\n", dia2, mes2, ano2);

    if (ano > ano2)
    {
        printf("A maior é a primeira: %i/%i/%i - %i/%i/%i", dia, mes, ano, dia2, mes2, ano2);
    }
    else if (ano < ano2)
    {
        printf("A maior é a segunda: %i/%i/%i - %i/%i/%i", dia2, mes2, ano2, dia, mes, ano);
    }
    else
    {
        if (mes > mes2)
        {
            printf("A maior é a primeira: %i/%i/%i - %i/%i/%i", dia, mes, ano, dia2, mes2, ano2);
        }
        else if (mes < mes2)
        {
            printf("A maior é a segunda: %i/%i/%i - %i/%i/%i", dia2, mes2, ano2, dia, mes, ano);
        }
        else
        {
            if (dia > dia2)
            {
                printf("A maior é a primeira: %i/%i/%i - %i/%i/%i", dia, mes, ano, dia2, mes2, ano2);
            }
            else if (dia < dia2)
            {
                printf("A maior é a segunda: %i/%i/%i - %i/%i/%i", dia2, mes2, ano2, dia, mes, ano);
            }
        }
    }
}