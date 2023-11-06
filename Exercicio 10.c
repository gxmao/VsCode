#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
     setlocale (LC_ALL, "portuguese");

    int numeroUm = 0;
    int numeroDois = 0;
    int opcao;
    int resultadoUm;
    int resultadoDois;

printf("Digite o primero número: ");
scanf("%i", &numeroUm);

printf("Digite o segundo número: ");
scanf("%i", &numeroDois);

system("cls || clean");

printf("Escolha uma operação abaixo: \n1 - soma + \n2 - subtração - \nR:");
scanf("%i", &opcao);

system("cls || clean");

switch (opcao)
{
case 1:
(numeroUm + numeroDois == resultadoUm);
    printf("Resultado: %i", resultadoUm);
    
    break;
case 2:
(numeroUm - numeroDois == resultadoDois);
printf("Resultado: %i", resultadoDois);

default:
    break;
}









return 0;
}