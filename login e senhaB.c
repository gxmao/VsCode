#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char login[250];
    char senha[250];
    char senhaCorreta[250] = "jettraze";
    char loginCorreto[250] = "batatinhadoce";

    fflush(stdin);

    printf("LOGIN: ");
    gets(login);

    fflush(stdin);

    printf("SENHA: ");
    gets(senha);

     system("cls || clear");

    if (strcmp(login, loginCorreto) && (strcmp(senha, senhaCorreta)))
    {
        printf("Acesso negado!");
    }
    else
    {
        printf("Bem-vindo!");
    }

    return 0;
}
