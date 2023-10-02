#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int maca = 0;
    float precoMaca;

    printf("Digite a quantidade de maçãs: ");
    scanf("%i", &maca);

    if (maca >= 12)
    {
        precoMaca = maca * 1.00;
    }
    else
    {
        precoMaca = maca * 1.30;
    }

    printf("Custo das maçãs R$: %.2f \n", precoMaca);

    return 0;
}