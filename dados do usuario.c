#include <stdio.h>
#include <stdlib.h>

int main()
{

    // variaveis

    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];

    // solicitando dados

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // limpa o cache de input

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("Digite seu nome: ");
    // scanf("%s", &nome);
    // fgets(nome, 250, stdin);
    gets(nome);

    // limpatela
    system("cls || clear");

    // exibindo dados

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Sexo: %c \n", sexo);
    printf("Peso: %.2f \n", peso);

    return 0;
}