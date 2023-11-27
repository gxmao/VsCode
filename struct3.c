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

    struct ficha_aluno aluno[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno: ");
        gets(aluno[i].nome);

        printf("Digite a idade do aluno: ");
        scanf("%d", &aluno[i].idade);

        printf("Digite o peso do aluno: ");
        scanf("%f", &aluno[i].peso);

        printf("Digite a altura do aluno: ");
        scanf("%f", &aluno[i].altura);

        fflush(stdin);

        system("cls || clear");
    }

    system("cls || clear");
    for (i = 0; i < 5; i++)
    {
        printf("\nExibindo os dados do aluno... \n");

        printf("Nome do aluno: %s \n", aluno[i].nome);
        printf("Idade do aluno: %d \n", aluno[i].idade);
        printf("Peso do aluno: %.2f \n", aluno[i].peso);
        printf("Altura do aluno: %.2f \n", aluno[i].altura);
    }
    return 0;
}