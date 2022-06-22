#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/*
Faça um programa que preencha uma matriz 10X3 com as notas de dez alunos
em três provas. O programa deverá mostrar um relatório com o número dos
alunos (número da linha) e a prova em que cada aluno obteve a menor nota.
Ao final do relatório, deverá mostrar quantos alunos tiveram menor nota em
cada uma das provas: na prova1, na prova 2 e na prova 3.
*/

int main(void)
{   //Declarando a matriz dos 10 alunos com 3 provas e os contadores
    int l, c, ind, p1=0, p2=0, p3=0;
    const int aluno=10, prova=3;
    float escola[10][3], menor;
    srand(time(NULL));

    printf("--- Aula 06 ---- Atv 01 Slide ------\n\n");
    //Preenchendo a matriz
    for(l=0; l<aluno; l++)
    {
        for(c=0; c<prova; c++)
        {
            escola[l][c] = rand() % 10;
            if(c == 0)
            {
                menor = escola[l][c];
                ind = 1;
            }
            else if(escola[l][c] < menor)
            {
                menor = escola[l][c];
                ind = c + 1;
            }
            printf("%.2f ", escola[l][c]);
        }
        printf("\n");
        if(ind == 1)
            p1++;
        else if(ind == 2)
            p2++;
        else if(ind == 3)
            p3++;
        //printando a menor nota de cada aluno na tela
        printf("O aluno %d teve sua menor nota na prova %d\n\n", l+1, ind);
    }
    printf("\n\nProva 1: %d notas menores.\n", p1);
    printf("Prova 2: %d notas menores.\n", p2);
    printf("Prova 3: %d notas menores.\n", p3);
    printf("\n\nTarefa finalizada!!");
    getche();
    return 0;
}
