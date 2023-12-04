#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n==============================\n");
    printf("\t SENAI\n");
    printf("==============================\n");
}

int somar(int primeiroNumero, int segundoNumero){
int somaNumeros;

somaNumeros = primeiroNumero + segundoNumero;
return somaNumeros;
}

int main()
{

    int primeiroNumero;
    int segundoNumero;
    int soma;

    cabecalho();
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    cabecalho();
    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

soma = somar(primeiroNumero, segundoNumero);
//soma = primeiroNumero + segundoNumero;

    cabecalho();
    printf("Primeiro Numero: %d \n", primeiroNumero);
    printf("Segundo Numero: %d \n", segundoNumero);
    printf("Soma: %d \n", soma);

    return 0;
}