#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/*
Crie um programa que preencha uma matriz 10X20 com números inteiros e
some cada uma das linhas, armazenando o resultado das somas em um vetor.
A seguir, o programa deverá multiplicar cada elemento da matriz pela soma da
linha correspondente e mostrar a matriz resultante.
*/


int main(void)
{
    //Declarando a matriz e o vetor
    const int tamL=10, tamC=20;
    int matriz[tamL][tamC], vet[10], l, c;
    long int somaM=0;
    //Criando a matriz
    printf("A matriz criada: \n\n");
    srand(time(NULL));
    for(l=0; l<tamL; l++)
    {
        for(c=0; c<tamC; c++)
        {
            matriz[l][c] = rand() % 100;
            somaM += matriz[l][c];
            printf("%d, ", matriz[l][c]);
        }
        printf("\n");
        //Criando o vetor a partir da soma
        vet[l] = somaM;
        somaM = 0;
    }
    printf("\n\nO valor do vetor criado com a soma das linhas: \n");
    for(l=0; l<tamL; l++)
        printf("%d ", vet[l]);

    getche();
    return 0;
}
