#include <stdio.h>
#include <stdlib.h>


int main() {

float notas[3];
float soma = 0;
float media;
int i;

for (i = 0; i < 3; i++)
{
    printf("Digite a %d nota: ", i+1);
    scanf("%f", &notas[i]);
    soma += notas[i];
}
media = soma/i;
printf("Exibindo notas: \n");

for (i = 0; i < 3; i++)
{
    printf("Nota: %.1f\n", notas[i]);
}
printf("Media: %.1f\n", media);























    return 0;
}