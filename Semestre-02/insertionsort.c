#include <stdio.h>
#include <stdlib.h>
// Struct
typedef struct registro {
	int chave;
	//além de outros campos de informação do registro
}rg;
// Prototipos
void insertionsort (rg* v, int n );
// Principal
int main()
{
    int qtd_car;

    scanf("%d",&qtd_car);
    rg cartas[qtd_car];
    for(int i=0; i<qtd_car; i++)
        scanf("%d",&cartas[i].chave);

    insertionsort(cartas, qtd_car);
    for(int i=0; i<qtd_car; i++)
        printf("%d ", cartas[i].chave);
    return 0;
}
// Funçoes
void insertionsort (rg* v, int n )
{
  int i,j;
  rg temp;
  for (i = 1; i < n; i++)
  {
    temp = v[i];
    j = i - 1;
    while ( ( j >= 0 ) && ( temp.chave < v[j].chave ) )
    {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = temp;
  }
}
