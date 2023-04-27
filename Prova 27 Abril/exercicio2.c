#include <stdio.h>

int main(){

float litros, pGas, pAlc;
float aPagar, desc;
int codigo;

pAlc = 3.90;
pGas = 5.30;

printf("Olá, escolha o seu combustível nesta lista abaixo:\n");
printf("1 - Álcool\n");
printf("2 - Gasolina\n");

printf("Escolha uma opção: ");

scanf("%i", &codigo);

if(codigo == 1){
    printf("\nSelecionado: Álcool");
    printf("\nQuantos Litros você deseja: ");
    scanf("%f", &litros);

    if (litros > 0 && litros <= 20){
        desc = (litros * pAlc * 3) / 100;
        aPagar = (litros * pAlc) - desc;
        printf("Valor a pagar: R$ %.2f", aPagar);
    } else if (litros > 20){
        desc = (litros * pAlc * 5) / 100;
        aPagar = (litros * pAlc) - desc;
        printf("Valor a pagar: R$ %.2f", aPagar);
    }

} else if (codigo == 2){
    printf("\nSelecionado: Gasolina");
    printf("\nQuantos Litros você deseja: ");
    scanf("%f", &litros);

    if (litros > 0 && litros <= 20){
        desc = (litros * pGas * 4) / 100;
        aPagar = (litros * pGas) - desc;
        printf("Valor a pagar: R$ %.2f", aPagar);
    } else if (litros > 20){
        desc = (litros * pGas * 6) / 100;
        aPagar = (litros * pGas) - desc;
        printf("Valor a pagar: R$ %.2f", aPagar);
    }
} else {
    printf("Combustível inválido, tente novamente.");
}

return 0;
}