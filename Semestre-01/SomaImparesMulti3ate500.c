#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Fa�a um programa que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos de tr�s e que se
encontram no conjunto dos n�meros de 1 at� 500.
*/

int main(void)
{
    int cont, soma=0;
    setlocale(LC_ALL,"portuguese");

    printf("Tarefa 07 ---- Aula 06 ---- \n\n");
    for(cont = 1; cont <= 500; cont++)
    {
        if(cont % 3 == 0 && cont % 2 != 0)
            soma += cont;
    }
    printf("O valor que efetua a soma de todos os n�meros �mpares que \ns�o m�ltiplos de tr�s e que se encontram no conjunto dos n�meros de 1 at� 500: ");
    printf("\n%d", soma);
    printf("\n\nTarefa Finalizada...");
    getche();
    return 0;
}
