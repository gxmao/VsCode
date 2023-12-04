#include <stdio.h>
#include <stdlib.h>

int main (){ 

char nome[200];
int idade;

printf("\n==============================\n");
printf("\t SENAI\n");
printf("\n==============================\n");
printf("Digite seu nome: ");
gets(nome);

printf("Digite sua idade: ");
scanf("%d", &idade);

system("cls || clean");

printf("Nome: %s \n", nome);
printf("Idade: %d \n", idade);




 
 
 
 
 
 
 
    return 0;
}