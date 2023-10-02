#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo = 0;
    int aN = 0;
    int tmpTrab = 0;
    int idade;


printf("Digite seu código de empregado: ");
scanf("%i", &codigo);

printf("Digite seu ano de nascimento: ");
scanf("%i", &aN);

printf("Digite seu tempo de trabalho: ");
scanf("%i", &tmpTrab);

idade = (2023 - aN);

 system("cls || clear");

printf("Código de empregado: %i \n", codigo);
    printf("Idade: %i \n", idade);
    printf("Tempo de trabalho: %i \n", tmpTrab);

if ((idade >=65) || (tmpTrab >=30))
{
    printf("Requer Aposentadoria!");
}
else
{
     printf("Não Requer Aposentadoria!");
}




























return 0;
}