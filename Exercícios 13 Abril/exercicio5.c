#include <stdio.h>

int main()
{

    int i;
    float a, b, c;

    printf("Olá! Insira um valor para o inteiro (de 1 à 3): ");
    scanf("%i", &i);

    if (i == 1)
    {
        printf("Números em modo crescente. \n");
    }
    else if (i == 2)
    {
        printf("Números em modo decrescente. \n");
    }
    else if (i == 3)
    {
        printf("Maior número entre os 2 números. \n");
    }

    printf("Digite o valor do a: ");
    scanf("%f", &a);

    printf("Digite o valor do b: ");
    scanf("%f", &b);

    printf("Digite o valor do c: ");
    scanf("%f", &c);

    if (i == 1)
    {
        if (a < b && b < c)
        {
            printf("Número em crescente: %.f, %.f, %.f\n", a, b, c);
        }
        else if (b < a && a < c)
        {
            printf("Número em crescente: %.f, %.f, %.f\n", b, a, c);
        }
        else if (c < b && b < a)
        {
            printf("Número em crescente: %.f, %.f, %.f\n", c, b, a);
        }
        else if (b < c && c < a)
        {
            printf("Número em crescente: %.f, %.f, %.f\n", c, a, b);
        }
        else if (b > a && a > c)
        {
            printf("Número em crescente: %.f, %.f, %.f\n", c, a, b);
        }
    }
    else if (i == 2)
    {
        {
            if (a > b && b > c)
            {
                printf("Número em decrescente: %.f, %.f, %.f\n", a, b, c);
            }
            else if (b > a && a > c)
            {
                printf("Número em decrescente: %.f, %.f, %.f\n", b, a, c);
            }
            else if (c > b && b > a)
            {
                printf("Número em decrescente: %.f, %.f, %.f\n", c, b, a);
            }
            return 0;
        }
    }
    else if (i == 3)
    {

        if (a > b && a > c)
        {
            if (a > b)
            {
                printf("\nNúmero %.f, %.f, %.f,", b, a, c);
            }
            else
            {
                printf("\nNúmero %.f, %.f, %.f,", a, b, c);
            }

            if (a > c)
            {
                printf("\nNúmero %.f, %.f, %.f,", b, a, c);
            }
            else
            {
                printf("\nNúmero %.f, %.f, %.f,", b, c, a);
            }
        }

        if (c > a && c > b)
        {
            if (c > a)
            {
                printf("\nNúmero %.f, %.f, %.f,", a, c, b);
            }
            else
            {
                printf("\nNúmero %.f, %.f, %.f,", b, a, c);
            }

            if (c > b)
            {
                printf("\nNúmero %.f, %.f, %.f,", b, c, a);
            }
            else
            {
                printf("Número %.f, %.f, %.f,", c, b, a);
            }
        }
    }
    return 0;
}