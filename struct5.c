#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct ficha_aluno
    {
        char nome[200];
        int idade;
        char endereco[200]
    };

    struct ficha_aluno aluno;

    printf("Digite o nome do aluno: ");
    gets(aluno.nome);

fflush(stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

      fflush(stdin);

    printf("Digite o endereco d0 aluno: ");
    gets(aluno.endereco);

    fflush(stdin);

system("cls || clear");

    printf("\nExibindo os dados do aluno... \n");

    printf("Nome do aluno: %s \n", aluno.nome);
    printf("Idade do aluno: %d \n", aluno.idade);
    printf("Endereco do aluno: %s \n", aluno.endereco);

    return 0;
}