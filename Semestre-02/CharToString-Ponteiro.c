/*
    O programa trabalha transformando um char em uma String ao utilizar ponteiro
*/
// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// prototipo
char * strcalloc(int l, char c);
// principal
int main()
{
  int tam;
  char letra, *t;
  scanf("%d", &tam);
  scanf(" %c",&letra);

  t = strcalloc(tam, letra);
  printf("%s", t);
}
char * strcalloc(int l, char c)
{
    char *p;
    p = (char*) malloc((l+1) * sizeof(char));

    for(int i=0; i<l; i++)
        p[i] = c;
    return  p;
}
