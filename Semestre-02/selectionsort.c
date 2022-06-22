#include <stdio.h>
#include <stdlib.h>
// Struct
typedef struct registro {
	int chave;
	//além de outros campos de informação do registro
}rg;
// Prototipos
void selectionsort (rg* v, int n);
// Principal
int main()
{
    int qtd, menores=0, media=50;
    scanf("%d",&qtd);

    rg notas_t[qtd];
    for(int i=0; i<qtd; i++)
    {
        scanf("%d",&notas_t[i].chave);
        if(notas_t[i].chave<media)
            menores+=1;
    }
    rg notas_ex[menores];
    int j=0;
    for(int i=0; i<qtd; i++)
    {
        if(notas_t[i].chave<media)
        {
          notas_ex[j].chave = notas_t[i].chave;
          j+=1;
        }
    }

    selectionsort(notas_ex, menores);

    for(int i=0; i<menores; i++)
        printf("%d ", notas_ex[i].chave);
    return 0;
}
// Funçoes
void selectionsort (rg* v, int n)
{
  int i, j, menor;
  rg temp;
  for (i = 0; i < n - 1; i++)
  {
    menor = i;

    for (j = i + 1 ; j < n; j++)
    {
        if ( v[j].chave < v[menor].chave)
        menor = j;
    }

    temp = v[menor];
    v[menor] = v[i];
    v[i] = temp;
  }
}
