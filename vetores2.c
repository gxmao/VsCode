#include <stdio.h>
#include <stdlib.h>


int main() {

float notas[3];
float soma = 0;
float media;
int i;

for (i = 0; i < 4; i++)
{
    printf("Digite a %d nota: ", i+1);
    scanf("%f", &notas[i]);
    soma += notas[i];
}
media = soma/i;
printf("Exibindo notas: \n");

if (media >= 7)
{
    printf("Aprovado!");
}
else
{
   if (media < 7 && media >= 5)
   {
    printf("Recuperacao!");
   }
   else
   {
    printf("Reprovado");
   }
   
}
























    return 0;
}