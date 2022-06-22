/*
    O programa trabalha com o entendimento de matriz utilizando ponteiro
*/

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
// prototipo
int ** matriz_identidade(int n);
// principal
int main()
{
  // usuario insere a ordem da matriz
  int ordem, **p, cont=0;
  scanf("%d",&ordem);
  // chama funcao para criar a matriz identidade
  p = matriz_identidade(ordem);
  // printando na tela a matriz identidade de ordem inserida pelo usuario
  for(int i=0; i<ordem; i++)
  {
       for(int j=0; j<ordem; j++)
       {
           printf("%d ", p[i][j]);
           cont+=1;
           if(cont%3==0)
            printf("\n");
       }
  }
}
// funçoes
int ** matriz_identidade(int n)
{
    // criando matriz por ponteiro
    int **p;
    p = (int**) malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
        p[i] = (int*)malloc(n*sizeof(int));

    // tornando ela uma matriz identidade
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                p[i][j] = 1;
            else
                p[i][j] = 0;
        }
    }
    return p;
}
