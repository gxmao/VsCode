#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n==============================\n");
    printf("\t SENAI\n");
    printf("==============================\n");
}

int mediar(int primeiroNumero, int segundoNumero){
float media;

media = (primeiroNumero + segundoNumero) / 2;
return media;
}

int main()
{

    int primeiroNumero;
    int segundoNumero;
    float media;

    cabecalho();
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    cabecalho();
    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

media = mediar(primeiroNumero, segundoNumero);


    cabecalho();
    printf("Primeiro Numero: %d \n", primeiroNumero);
    printf("Segundo Numero: %d \n", segundoNumero);
    printf("Media: %.2f \n", media);

    return 0;
}