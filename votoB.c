#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if ((idade >= 18) && (idade <= 64))
    {
        printf("O seu voto é obrigatório!");
    }
    else
    {
        printf("seu voto não é obrigatório!");
    }

    return 0;
}
