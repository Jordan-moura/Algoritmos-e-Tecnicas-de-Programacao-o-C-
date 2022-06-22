/*
    O programa mexe com ponteiros alocando e realocando
    O usuario insere o tamanho do vetor desejado
    O programa cria um vetor dinamico de acordo com o tamanho que o usuario inseriu
    apos completar este vetor, o programa realoca com o dobro do tamanho anterior
    e insere mais elementos ate completa-lo
*/
// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *v;
    scanf("%d",&n);
    v = (int*) malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
        scanf("%d",&v[i]);
    v = realloc(v, n*2*sizeof(int));
    for(int i=0; i<n; i++)
        v[n+i] = v[i]*2;
    for(int i=0; i<2*n; i++)
        printf("%d ", v[i]);
    free(v);
}

