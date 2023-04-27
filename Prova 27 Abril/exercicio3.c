#include <stdio.h>

int main(){

float pMorangos, pMaca, pTotal;
float aPagar, sDesconto, macaPreco, morangPreco, desc;


printf("Digite o peso dos morangos (em KG): ");
scanf("%f", &pMorangos);

printf("Digite o peso das maçãs (em KG): ");
scanf("%f", &pMaca);

pTotal = pMorangos + pMaca;

if(pTotal <= 5 ){
    morangPreco = pMorangos * 7.50;
    macaPreco = pMaca * 3.50;
    sDesconto = macaPreco + morangPreco;
    if(sDesconto > 19.00){
    printf("\nPeso Morango: %.2f KG", pMorangos);
    printf("\nPeso Maçã: %.2f KG", pMaca);
    printf("\nPeso Total: %.2f KG", pTotal);
    desc = (sDesconto * 8) / 100;
    aPagar = sDesconto - desc;
    printf("\nValor a pagar com desconto: R$ %.2f", aPagar);
    } else {
    printf("\nPeso Morango: %.2f KG", pMorangos);
    printf("\nPeso Maçã: %.2f KG", pMaca);
    printf("\nPeso Total: %.2f KG", pTotal);
    printf("\nPreço sem desconto: R$ %.2f", sDesconto);
    }

} else if(pTotal > 5){
    morangPreco = pMorangos * 5.30;
    macaPreco = pMaca * 2.80;
    sDesconto = macaPreco + morangPreco;
    printf("\nPeso Morango: %.2f KG", pMorangos);
    printf("\nPeso Maçã: %.2f KG", pMaca);
    printf("\nPeso Total: %.2f KG", pTotal);
    printf("\nPreço sem desconto: R$ %.2f", sDesconto);
}

return 0;
}