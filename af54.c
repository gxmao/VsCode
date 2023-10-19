#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;
    int soma = 0;
    int contador = 0;
    float media;

    do
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor > 0)
        {
            soma += valor;
            contador++;
        }

    } while (valor > 0);
    media = soma + contador;

    printf("Média: %.1f \n", media);

    return 0;
}