#include <stdio.h>
#include <stdlib.h>

int main()
{

    float primeiraNota = 0; 
    float segundaNota = 0;
    float media;

        printf("Digite sua primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Digite sua segunda nota: ");
    scanf("%f", &segundaNota);

media = (primeiraNota + segundaNota) / 2;

system("cls || clear");

printf("Media: %.2f", media);
    return 0;
}