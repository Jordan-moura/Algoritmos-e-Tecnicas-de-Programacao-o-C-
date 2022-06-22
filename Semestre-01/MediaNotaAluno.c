/*
    Entradas: Nome do aluno e suas notas
    Saida: Nome do aluno e sua media
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    char nome[50];
    float nA, nB, md;
    int cont;

    printf("Atividade 01 --- Aula 06 ----\n");
    for(cont = 1; cont <= 5; cont++)
    {
        printf("\nEntre com o nome do aluno: ");
        scanf("%s",&nome);
        do
        {
            printf("Entre com o grau A: ");
            scanf("%f",&nA);

            if (nA >= 0 && nA <= 10)
                break;

            printf("Nota invalida!\n");
        }while(1);

        while(1)
        {
            printf("Entre com o grau B: ");
            scanf("%f",&nB);

            if (nB < 0 || nB > 10)
            {
                printf("Nota invalida!\n");
                continue;
            }
            break;
        }

        md = (nA + nB) / 2;

        printf("O aluno %s tem uma media: %.2f\n", nome, md);

    }
    printf("\nFim de Tarefa :)");
    getche();
    return 0;
}
