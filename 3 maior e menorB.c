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

    printf("Digite o primeiro n�mero: ");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo n�mero: ");
    scanf("%i", &segundoNumero);

    printf("Digite o terceiro n�mero: ");
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

    printf("Primeiro N�mero: %i \n", primeiroNumero);
    printf("Segundo N�mero: %i \n", segundoNumero);
    printf("Terceiro N�mero: %i \n", terceiroNumero);
    printf("Maior N�mero: %i \n", maior);
    printf("Menor N�mero: %i \n", menor);

    return 0;
}