#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct ficha_aluno
    {
        char nome[200];
        int idade;
        float peso;
        float altura;
    };

    struct ficha_aluno aluno;

    printf("Digite o nome do aluno: ");
    gets(aluno.nome);

fflush(stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite o peso do aluno: ");
    scanf("%f", &aluno.peso);

    printf("Digite a altura do aluno: ");
    scanf("%f", &aluno.altura);

    system("cls || clear");

    printf("\nExibindo os dados do aluno... \n");

    printf("Nome do aluno: %s \n", aluno.nome);
    printf("Idade do aluno: %d \n", aluno.idade);
    printf("Peso do aluno: %.2f \n", aluno.peso);
    printf("Altura do aluno: %.2f \n", aluno.altura);

    return 0;
}