#include <stdio.h>
#include <stdlib.h>
// Struct
typedef struct registros {
	char chave;
	//além de outros campos de informação do registro
}registro;
// Prototipo
void partition(int Esq, int Dir, int *i, int *j, registro *v);
void sort(int Esq, int Dir, registro *v);
void quicksort(registro *v, int n);
// Principal
int main()
{
    int qtd;
    scanf("%d",&qtd);
    registro cartas[qtd];
    for(int i=0; i<qtd; i++)
        scanf(" %c",&cartas[i].chave);

    quicksort(cartas, qtd);

    for(int i=0; i<qtd; i++)
        printf("%c ", cartas[i].chave);
    return 0;
}
// Funçoes
void partition(int Esq, int Dir, int *i, int *j, registro *v)
{
  registro x, w;
  *i = Esq; *j = Dir;

  //pivô
  x = v[(*i + *j)/2];

  do
  {
    while (x.chave < v[*i].chave)
	     (*i)++;
    while (x.chave > v[*j].chave)
        (*j)--;
    if (*i <= *j)
    {
      w = v[*i];
      v[*i] = v[*j];
      v[*j] = w;
      (*i)++;
      (*j)--;
    }
  } while (*i <= *j);
}


void sort(int Esq, int Dir, registro *v)
{
  int i,j;
  partition(Esq, Dir, &i, &j, v);
  if (Esq < j)
	 sort(Esq, j, v);
  if (i < Dir)
     sort(i, Dir, v);
}
void quicksort(registro *v, int n)
{
  sort(0, n-1, v);
}

