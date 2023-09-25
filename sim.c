#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20; //inteiro
    float peso = 80.2; //real
    char sexo = 'F'; //caracter
    char nome [250] = "Marta";

    //int -> numeros inteiros
    //sloat -> numeros reais
    //char -> apenas um caracter

    //char nome_variavel [quantidade de caracteres]
    //cadeia de caracteres.

    printf("Idade: %d anos \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}