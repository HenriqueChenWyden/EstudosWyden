#include <stdio.h>

int main(){

float n1, n2, n3;

printf("Digite o primeiro número: ");
scanf("%f", &n1);

printf("Digite o segundo número: ");
scanf("%f", &n2);

printf("Digite o último número: ");
scanf("%f", &n3);

if (n1 > n2 && n1 > n3) {
    if (n2 > n3){
    printf ("Número: %.2f, %.2f, %.2f", n1, n2, n3);
    }
    if (n2 < n3){
       printf ("Número: %.2f, %.2f, %.2f", n1, n3, n2);
    }
}

return 0;

}

