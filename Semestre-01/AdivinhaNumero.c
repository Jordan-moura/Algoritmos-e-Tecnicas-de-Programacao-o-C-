/*
    O programa escolhe um numero aleatorio e o usuario ira tentar adivinhar por aproximacao

    Entradas:  numeros inteiros
    Saida: numero que o computador escolheu

*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{

    int nC,nU;

    srand(time(NULL));
    printf("Tarefa 02 ---- Aula 06 ----\n");
    nC = rand() % 100;
    printf("O computador escolheu um numero entre 0 e 100.\n");
    while(1)
    {
         printf("Adivinhe:\n");
         scanf("%d",&nU);

         if(nU == nC)
            break;

         else if (nC > nU)
            printf("O valor e maior que isso.\n\n");
         else printf("O valor e menor que isso.\n\n");
    }
    printf("Parabens, voce finalmente acertou!\n");
    printf("O valor e de: %d\n", nC);
    printf("Tarefa Finalizada!");
    getche();
    return 0;
}
