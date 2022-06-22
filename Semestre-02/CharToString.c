// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Prototipos
char * charToString(char c);
// Principal
int main()
{
    char c;
    scanf("%c", &c);
    printf("%s", charToString(c));
}
// funçoes
char * charToString(char c)
{
    char *s;
    s = (char*) malloc(sizeof(char));
    s[0] = c;
    return s;
}
