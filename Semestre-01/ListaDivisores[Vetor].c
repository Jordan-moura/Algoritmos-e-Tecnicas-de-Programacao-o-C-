#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Faça um programa que preencha um primeiro vetor com dez números inteiros e
um segundo vetor com cinco números inteiros. O programa deverá mostrar uma
lista dos números do primeiro vetor com seus respectivos divisores armazenados
no segundo vetor, bem como suas posições.
*/

int main(void)
{
    int vet1[10], vet2[5], cont1, cont2;

    printf("Aula07 ---- ATV 03 ----\n\n");
    for(cont1=0; cont1<10; cont1++)
    {
        printf("Insira valores para o primeiro vetor: ");
        scanf("%d",&vet1[cont1]);
    }
    printf("\n");
    for(cont1=0; cont1<5; cont1++)
    {
        printf("Insira valores para o segundo vetor: ");
        scanf("%d",&vet2[cont1]);
    }
    for(cont1=0; cont1<10; cont1++)
    {
        printf("\nNumero %d\n", vet1[cont1]);
        for(cont2=0; cont2<5; cont2++)
        {
            if (vet1[cont1] % vet2[cont2] == 0)
                printf("Divisivel por %d na posicao %d\n", vet2[cont2], cont2+1);
        }
        printf("-------------------------");
    }
    printf("\n\nfinalizando tarefa...");
    getche();
    return 0;
}

