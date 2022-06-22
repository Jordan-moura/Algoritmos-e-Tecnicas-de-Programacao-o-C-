#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

/*
4. Em uma pesquisa no R.U. perguntou-se a cada aluno quantas refeições fez no mês anterior. Faça um
programa que forneça:
a) número de alunos entrevistados;
b) número de alunos que fez menos de 10 refeições no mês;
c) número de alunos que fez entre 10 e 20 refeições; e
d) número de alunos que fez mais de 20 refeições.
A leitura de dados deve ocorrer até que o usuário não deseje informar mais nenhum valor.
*/

int main(void)
{
    int n=0, n10=0, n20=0, ninfinito=0, ref;
    char sn;

    printf("Atividade 04 --- Aula 06 ----\n");
    do
    {
       printf("\nInsira quantas refeicoes o aluno fez no mes passado: ");
       scanf("%d",&ref);

       if(ref < 10)
            n10++;
       else if (ref < 20)
            n20++;
       else ninfinito++;

       n++;
       printf("Deseja incluir mais um aluno? sim(S) ou nao(N)\n");
       scanf("%s",&sn);
       sn = tolower(sn);
    }while(sn != 'n');

    printf("Numero de entrevistados: %d\n", n);
    printf("Numero de entrevistados que fez menos de 10 refeicoes no mes anterior: %d\n", n10);
    printf("Numero de entrevistados que fez entre 10 e 20 refeicoes no mes anterior: %d\n", n20);
    printf("Numero de entrevistados que fez mais de 20 refeicoes no mes anterior: %d\n", ninfinito);

    printf("\nTarefa Finalizada!");
    getche();
    return 0;
}
