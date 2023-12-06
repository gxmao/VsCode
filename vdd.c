#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6

void cabecalho()
{
    printf("\n======================\n");
    printf("\tSENAI");
    printf("\n======================\n");
}
void limpatela()
{
    fflush(stdin);
    system("CLS");
}
int mostrarResultados(int numerosEsc[])
{
    int a;
    int contadorPar;
    int contadorImpar;
    for (a = 0; a < TAM; a++)
    {
        if (numerosEsc[a] % 2 == 0)
        {
            contadorPar += 1;
        }
        else
        {
            contadorImpar += 1;
        }
    }
    printf("Quantidade de N�meros pares: %d\n", contadorPar);
    printf("Quantidade de N�meros impares: %d\n", contadorImpar);
    return numerosEsc[a];
}

void main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    int numerosEsc[TAM];
    cabecalho();
    for (a = 0; a < 6; a++)
    {
        printf("Informe o %d n�mero: ", a + 1);
        scanf("%d", &numerosEsc[a]);
    }
    limpatela();
    cabecalho();
    mostrarResultados(numerosEsc);
}