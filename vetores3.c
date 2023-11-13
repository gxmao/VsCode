#include <stdio.h>
#include <stdlib.h>


int main() {
   
int numeros[5];
int i;
int nMaior = 0;
int nMenor = 9999;


for (i = 0; i < 5; i++)
{
    printf("Escreva um numero : ");
    scanf("%d", &numeros[i]);

    if (numeros[i] > nMaior)
{
    nMaior = numeros[i];
}
    
    
if (numeros[i] < nMenor)
{
    nMenor = numeros[i];
}

    
    }


printf("\nMaior: %d", nMaior);
printf("\nMenor: %d", nMenor);








return 0;
}