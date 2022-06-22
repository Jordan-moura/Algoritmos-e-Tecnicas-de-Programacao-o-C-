#include <stdio.h>
#include <stdlib.h>
// Struct
typedef struct registros {
	int chave;
	//além de outros campos de informação do registro
}registro;
// Prototipo
void merge(registro *v, int p, int q, int r);
void mergesort(registro* v,int ini, int fim);
// Principal
int main()
{
    int qtd;
    scanf("%d",&qtd);
    registro lotes[qtd];
    for(int i=0; i<qtd; i++)
        scanf("%d",&lotes[i].chave);

    mergesort(lotes, 0, qtd-1);

    for(int i=0; i<qtd; i++)
        printf("%d ", lotes[i].chave);
    return 0;
}
// Funçoes
void merge(registro *v, int p, int q, int r)
{
   int i, j, k;
   registro *w;
   w = (registro *) malloc( (r-p+1) * sizeof (registro));
   i = p;
   j = q+1;
   k = 0;

   while (i <= q && j <= r) {
      if (v[i].chave <= v[j].chave)
	      w[k++] = v[i++];
      else
          w[k++] = v[j++];
   }
   while (i <= q)
      w[k++] = v[i++];
   while (j <= r)
      w[k++] = v[j++];
   for (i = p; i <= r; ++i)
      v[i] = w[i-p];
   free(w);
}

void mergesort(registro* v,int ini, int fim)
{
  int meio;
  if  (ini < fim) {
    meio = ( ini + fim ) / 2;
    mergesort(v, ini, meio );
    mergesort(v, meio+1, fim);
    merge(v, ini, meio, fim );
  }
}
