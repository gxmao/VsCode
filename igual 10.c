#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int primeiroNumero = 0;

    printf("Digite um n�mero: ");
    scanf("%i", &primeiroNumero);

    if (primeiroNumero == 10)
    {
        printf("� IGUAL A 10 \n");
    }
    else if (primeiroNumero > 10)
    {
        printf("� MAIOR QUE 10 \n");
    }
    else
    {
        printf("� MENOR QUE 10 \n");
    }

    return 0;
}
