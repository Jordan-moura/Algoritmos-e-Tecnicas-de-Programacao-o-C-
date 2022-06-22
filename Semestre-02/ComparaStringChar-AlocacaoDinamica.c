/*
    O programa permite o usuario concatenar chars em um vetor dinamico
    Depois, o usuario insere uma String qualquer
    Ao fim, o programa compara o vetor de chars com a String para informar se sao iguais ou nao
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
// Principal
int main()
{
    // Variaveis
    int qtd, tem=0;
    char *c, str[100];
    // Pedindo ao usuario a quantidade
    scanf("%d",&qtd);
    // Criar o vetor de char
    c = (char *)(malloc(qtd * sizeof(char)));
    // Usuario insere os char no vetor
    for(int i=0; i<qtd; i++)
        scanf(" %c",&c[i]);
    // Pedir string para o usuario
    scanf(" %[^\n]%*c",str);
   // Analisar se tem como criar a palavra
    for(int i=0; str[i]!='\0'; i++)
    {
        for(int j=0; j<qtd; j++)
        {
            if(str[i]==c[j])
            {
                tem=1;
                c[j] = '.';
                break;
            }
        }
        if(tem==0)
        {
            printf("N");
            return 0;
        }
        tem=0;
    }
    printf("S");
    return 0;
}
