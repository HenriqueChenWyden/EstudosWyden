#include <stdio.h>

int main(){

float n1, n2, n3, mediaf, resul;
int p1, p2, p3;

p1 = 2;
p2 = 3;
p3 = 5;

printf("Digite a primeira nota: ");
scanf("%f", &n1);

printf("\nDigite a segunda nota: ");
scanf("%f", &n2);

printf("\nDigite a terceira nota: ");
scanf("%f", &n3);

resul = (n1*p1) + (n2*p2) + (n3*p3);

mediaf = resul / 10;

printf("Aluno(a), a sua média final é: %.1f", mediaf);

return 0;
}