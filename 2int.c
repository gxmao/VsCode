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

    printf("Digite o primeiro número: \n");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo número: \n");
    scanf("%i", &segundoNumero);

    media = (primeiroNumero + segundoNumero) / 2;
    soma = (primeiroNumero + segundoNumero);
    produto = (primeiroNumero * segundoNumero);

    //operação terminária
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

    printf("Média: %.2f \n", media);
    printf("Soma: %i \n", soma);
    printf("Produto: %.2f \n", produto);
    printf("Maior Número: %i \n", maior);
    printf("Menor Número: %i \n", menor);

    return 0;
}
