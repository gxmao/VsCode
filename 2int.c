#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeiroNumero = 0;
    int segundoNumero = 0;
    float media;
    int soma;
    float produto;
    int menor;
    int maior;

    printf("Digite o primeiro n�mero: \n");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo n�mero: \n");
    scanf("%i", &segundoNumero);

    media = (primeiroNumero + segundoNumero) / 2;
    soma = (primeiroNumero + segundoNumero);
    produto = (primeiroNumero * segundoNumero);

    //opera��o termin�ria
    // maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    // menor= primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    if (primeiroNumero > segundoNumero)
    {
        maior = primeiroNumero;
        menor = segundoNumero;
    }
    else
    {
        maior = segundoNumero;
        menor = primeiroNumero;
    }

    system("cls || clear");

    printf("M�dia: %.2f \n", media);
    printf("Soma: %i \n", soma);
    printf("Produto: %.2f \n", produto);
    printf("Maior N�mero: %i \n", maior);
    printf("Menor N�mero: %i \n", menor);

    return 0;
}
