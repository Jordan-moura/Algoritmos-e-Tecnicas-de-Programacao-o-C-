#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Faça um programa que preencha dois vetores de dez elementos numéricos cada
um e mostre o vetor resultante da intercalação deles.
*/

int main (void)
{
    printf("Aula 07 --- Atividade 01 ---\n\n");
    int n1[10], n2[10], i=0, j=1, cont=0, vetor[20];
    // Insira o primeiro vetor
    for(i; i <= 9; i++)
    {
        printf("Digite valores para o primeiro vetor: ");
        scanf("%d",&n1[i]);
    }
    // Insira o segundo vetor
    printf("\n");
    i = 0;
    for(i; i <= 9; i++)
    {
        printf("Digite valores para o segundo vetor: ");
        scanf("%d",&n2[i]);
    }
    i = 0;

    for(i, j, cont; cont < 10;  i+=2, j+=2, cont++)
    {
        vetor[i] = n1[cont];
        vetor[j] = n2[cont];
    }
    printf("\nos valores do novo vetor sao:\n");
    cont=0;
    for(cont; cont<20; cont++)
    {
        printf("%d, ", vetor[cont]);
    }
    printf("\n\nTarefa finalizada...");
    getche();
    return 0;
}
