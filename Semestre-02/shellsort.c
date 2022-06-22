#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Struct
typedef struct registros {
	int chave;
	//além de outros campos de informação do registro
}registro;
// Prototipos
void shellsort (registro* v, int n);
// Principal
int main()
{
   int qtd=0, k=1;
   scanf("%d",&qtd);
   registro element[qtd];
   for(int i=0; i<qtd; i++)
    scanf("%d",&element[i].chave);

   shellsort(element, qtd);

   for(int j=1; j<=element[qtd-1].chave; j++)
   {
       k=j;
       k = pow(2, k) - 1;
       for(int i=0; i<qtd; i++)
       {
           if(k == element[i].chave)
                printf("%d ", k);
       }
   }
   printf("\n");
   for(int i=0; i<qtd; i++)
        printf("%d ", element[i].chave);
   return 0;
}
// Funçoes
void shellsort (registro* v, int n)
{
  int i, j;
  int h = 1;
  registro temp;

  do
	  h = h * 3 + 1;
  while (h < n);
  do
  {
    h /= 3;
    for( i = h ; i < n ; i++ )
    {
      temp = v[i];
	  j = i;
      while (v[j - h].chave > temp.chave)
      {
        v[j] = v[j - h];
	    j -= h;
        if (j < h) break;
      }
      v[j] = temp;
    }
  } while (h != 1);
}
