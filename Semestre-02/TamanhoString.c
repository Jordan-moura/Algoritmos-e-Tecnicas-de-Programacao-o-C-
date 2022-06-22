// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// PROTOTIPOS
int tam_string(char *s);
// PRINCIPAL
int main()
{
    char palavra[20];
    // PEDINDO AO USUARIO A ENTRADA
    printf("Digite uma string: ");
    scanf(" %[^\n]%*c", palavra);
    fflush(stdin);
    // Dando a resposta
    printf("%d", tam_string(palavra));
    getch();
    return 0;
}
// FUNÇOES
int tam_string(char *s)
{
    int i, conta;
    const char *c = s;
    // Caso base
    if(*c == '\0')
        return conta;
    else
    {
        conta++;
        i++;
        tam_string(c+i);
    }
}
