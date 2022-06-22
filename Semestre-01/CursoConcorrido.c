#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada curso,
é fornecido o seguinte conjunto de valores:
 o código do curso;
 número de vagas;
 número de candidatos do sexo masculino;
 número de candidatos do sexo feminino.
O último conjunto, para indicar fim de dados, contém o código do curso igual a zero. Fazer um
programa que:
 calcule e escreva, para cada curso, o número de candidatos por vaga e porcentagem de candidatos do
sexo feminino (escreva também o código correspondente do curso);
 determine o maior número de candidatos por vaga e escreva esse número juntamente com o código
do curso correspondente (supor que não haja empate);
 calcule e escreva o total de candidatos.
*/

int main(void)
{
    int cod, vagas, macho, femea, codM=0, TotCand=0;
    float Cvaga, Pfemea, CvagaM=0;

    printf("Atividade 05 --- Aula 06 ---");
    do
    {
       printf("\n\nDigite o codigo do curso: ");
       scanf("%d",&cod);
       if (cod == 0)
            break;
       printf("Digite o numero de vagas: ");
       scanf("%d", &vagas);
       printf("Digite a quantidade de candidatos masculinos: ");
       scanf("%d",&macho);
       printf("Digite a quantidade de candidatos feminino: ");
       scanf("%d",&femea);

       Cvaga = (float)(macho + femea)/ vagas;
       Pfemea = (float)femea / ( macho + femea);

       printf("\n\nO curso com o codigo %d tem uma disputa de %.2f candidatos por vaga\n", cod, Cvaga);
       printf("Nele ha %.2f porcento de canditadas femininas!\n", Pfemea*100);

       if (CvagaM < Cvaga)
       {
           CvagaM = Cvaga;
           codM = cod;
           TotCand = macho + femea;
       }
    }while(cod != 0);

    printf("\n\nO maior numero de candidatos por vaga e de %.2f do curso com o codigo de %d!!\n", CvagaM, codM);
    printf("O total de candidatos neste curso foi de %d\n\n", TotCand);

    printf("\n\nFinalizando tarefa...");
    getche();
    return 0;
}


