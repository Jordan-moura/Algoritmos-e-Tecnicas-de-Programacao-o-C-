#include <stdio.h>
#include <conio.h>

/*
Faça um programa que escreva na tela os números pares entre 0 e 50, usando um comando for. Não
utilize nenhum IF/THEN neste programa, apenas o comando for.
*/

int main(void)
{
    int cont;

    printf("Atividade 03 ----- Aula 06 ----\n\n");
    printf("Os numeros pares de 0 a 50 sao: \n");
    for(cont = 0; cont <= 50; cont += 2)
        printf("%d  ", cont);
    printf("\n\nFim de Tarefa...");
    getche();
    return 0;
}
