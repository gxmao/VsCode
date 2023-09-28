#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int primeiroNumero = 0;

    printf("Digite um número: ");
    scanf("%i", &primeiroNumero);

    if (primeiroNumero == 10)
    {
        printf("É IGUAL A 10 \n");
    }
    else if (primeiroNumero > 10)
    {
        printf("É MAIOR QUE 10 \n");
    }
    else
    {
        printf("É MENOR QUE 10 \n");
    }

    return 0;
}
