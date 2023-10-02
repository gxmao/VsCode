#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeiroNumero = 0;
    int segundoNumero = 0;
    int terceiroNumero = 0;
    int maior;
    int menor;

    printf("Digite o primeiro número: ");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%i", &segundoNumero);

    printf("Digite o terceiro número: ");
    scanf("%i", &terceiroNumero);

    if ((primeiroNumero > segundoNumero) && (primeiroNumero > terceiroNumero))
    {
        maior = primeiroNumero;
    }
    if (segundoNumero > terceiroNumero)
    {
        menor = terceiroNumero;
    }
    else
    {
        menor = segundoNumero;
    }
    if ((segundoNumero > primeiroNumero) && (segundoNumero > terceiroNumero))
    {
        maior = segundoNumero;
    }
    if (primeiroNumero > terceiroNumero)
    {
        menor = terceiroNumero;
    }
    else
    {
        menor = primeiroNumero;
    }
    if ((terceiroNumero > segundoNumero) && (terceiroNumero > primeiroNumero))
    {
        maior = terceiroNumero;
    }
    if (segundoNumero > primeiroNumero)
    {
        menor = primeiroNumero;
    }
    else
    {
        menor = segundoNumero;
    }

    system("cls || clear");

    printf("Primeiro Número: %i \n", primeiroNumero);
    printf("Segundo Número: %i \n", segundoNumero);
    printf("Terceiro Número: %i \n", terceiroNumero);
    printf("Maior Número: %i \n", maior);
    printf("Menor Número: %i \n", menor);

    return 0;
}