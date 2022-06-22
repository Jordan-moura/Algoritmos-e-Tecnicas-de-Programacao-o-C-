/*
    O programa cria dois vetores e adiciona em 1 utilizando alocacao dinamica
*/
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
// PRINCIPAL
int main()
{
    // variaveis
    int qtdA, qtdB, *vetA, *vetB, *vet, add=0;
    // Pedindo ao usuario o tamanho do vetor A e do vetor B
    scanf("%d",&qtdA);
    scanf("%d",&qtdB);
    // Pedindo ao usuario os dados do vetor A
    vetA = (int *)(malloc(qtdA * sizeof(int)));
    for(int i=0; i<qtdA; i++)
        scanf("%d",&vetA[i]);
    // Pedindo ao usuario os dados do vetor B
    vetB = (int *)(malloc(qtdB * sizeof(int)));
    for(int i=0; i<qtdB; i++)
        scanf("%d",&vetB[i]);
    // somando os vetores em um só
    vet = (int *)(malloc((qtdA+qtdB) * sizeof(int)));
    for(int i=0; i<qtdA; i++)
        vet[i] = vetA[i];
    int pos = qtdA;
    for(int i=0; i<qtdB; i++)
    {
        for(int j=0; j<qtdA; j++)
        {
            if(vetB[i]==vetA[j])
            {
                add = -1;
                break;
            }
        }
        if(add==0)
        {
            vet[pos] = vetB[i];
            pos+=1;
        }
        add=0;
    }
    vet = realloc(vet, pos);
    // Printando
    for(int i=0; i<pos; i++)
        printf("%d ", vet[i]);
    free(vetA);
    free(vetB);
    free(vet);

   return 0;
}
