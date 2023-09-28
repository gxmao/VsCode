#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroNumero = 0;

    printf("Digite um numero: ");
    scanf("%i", &primeiroNumero);

    if (primeiroNumero >= 10)
    {
        printf("E MAIOR QUE 10 \n");
    }
    else
    {
        printf("E MENOR QUE 10 \n");
    }

    return 0;
}
