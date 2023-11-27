#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct ficha_aluno
    {
        char nome[200];
        int idade;
        float notas[2];
    };

    struct ficha_aluno aluno[2];
    int i, j;

for (i = 0; i < 2; i++)
{
       printf("Digite o nome do aluno: ");
    gets(aluno[i].nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno[i].idade);

for (j = 0; j < 2; i++)
{
    printf("Digite a %d nota")
    scanf("")
}


     }

    printf("\nExibindo os dados do aluno... \n");

for (i = 0; i < 2; i++)
{
    printf("Nome do aluno: %s \n", aluno.nome);
    printf("Idade do aluno: %d \n", aluno.idade);

    for (j = 0; j < 2; i++)
    {
        printf("%dª nota: %.1f \n")
    }
    
}

    
    
    
    
    
    return 0;
}