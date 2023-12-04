#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n==============================\n");
    printf("\t SENAI\n");
    printf("==============================\n");
}

void mostrarTabuada(int numero){
int i;
for ( i = 1; i <= 10; i++)
{
    printf("%d x %d = %d \n", numero, i, numero * i);
}
}
int main()
{
 int numero;
    
    cabecalho();
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero);

  cabecalho();
  mostrarTabuada(numero);
    
    return 0;
}

