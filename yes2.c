#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n==============================\n");
    printf("\t SENAI\n");
    printf("==============================\n");
}

void limpartela(){ 
system("cls || clear");
}
int main()
{

    char nome[200];
    int idade;

  cabecalho();

    printf("Digite seu nome: ");
    gets(nome);

    limpartela();

cabecalho();

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    limpartela();

     cabecalho();

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);

    return 0;
}