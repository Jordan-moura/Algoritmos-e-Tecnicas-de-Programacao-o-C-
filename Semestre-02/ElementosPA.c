// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Prototipo
int * elementos_PA(int n, int r, int a1);
// Principal
int main()
{
   int n, r, a1, *vet;
   scanf("%d",&n);
   scanf("%d",&r);
   scanf("%d",&a1);

   vet = elementos_PA(n, r, a1);
   for(int i=0; i<n; i++)
    printf("%d ", vet[i]);
}
// Funçoes
int * elementos_PA(int n, int r, int a1)
{
    int *v;
    v = (int*) malloc(n * sizeof(int));

    v[0] = a1;
    for(int i=1; i<n; i++)
    {
        v[i] = a1 + r;
        a1 = v[i];
    }
    return v;
    free(v);
}
