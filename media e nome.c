#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main() {
     setlocale(LC_ALL, "portuguese");
fflush(stdin);
     char nome [250];
     int idade = 0;
     int primeiraNota = 0;
     int segundaNota=  0; 
     int terceiraNota = 0;
     float media;

fflush(stdin);

     printf("Digite seu nome: \n");
      gets(nome);

     fflush(stdin);

     printf("Digite sua idade: \n");
     scanf("%i", &idade);
     
     printf("Digite sua primeira nota: \n");
     scanf("%i", &primeiraNota);

     printf("Digite sua segunda nota: \n");
     scanf("%i",&segundaNota);

     printf("Digite sua terceira nota: \n");
     scanf("%i", &terceiraNota);

     media = (primeiraNota + segundaNota + terceiraNota) / 3;

      system("cls || clear");

      printf("Nome: %s \n", nome);
    printf("Idade: %i \n", idade);
    printf("Media: %.2f \n", media);











return 0;
}