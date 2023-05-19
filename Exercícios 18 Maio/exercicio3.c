#include <stdio.h>

int main(){
    
    int nAluno, maiorN, menorN, altura;
    int maiorAltura = 0, menorAltura = 9999;

    printf("Bem vindo!\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("\nDigite um número do Aluno: ");
        scanf("%i", &nAluno);

        printf("\nDigite a altura do aluno (cm): ");
        scanf("%d", &altura);
    

    if(altura > maiorAltura){
        maiorAltura = altura;
        maiorN = nAluno;
    }

    if(altura < menorAltura){
        menorAltura = altura;
        menorN = nAluno;
    }
}
    printf("\nO aluno mais alto é:\n");
    printf("Número do Aluno: %d\n", maiorN);
    printf("Altura: %d cm", maiorAltura);
    
    printf("\nO aluno mais baixo é:\n");
    printf("Número do Aluno: %d\n", menorN);
    printf("Altura: %d cm", menorAltura);

return 0;

}

