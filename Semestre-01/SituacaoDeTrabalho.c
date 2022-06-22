/*
    Pesquisa sobre uma ocupacao
*/

// AULA 13
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//////////////////////////// REGISTROS

struct tem_emprego
{
    int tempo_servico;
    char se_empregos_antes[5];
    int tem;
} ;

struct nao_tem_emprego
{
    int tempo_desemp;
    int tempo_servico_ant;
    int nao_empregado;
} ;

union situacao_s
{
   struct tem_emprego empregados;
   struct nao_tem_emprego desempregados;
};

typedef struct inicio
{
    union situacao_s situacao;
}pesq;

//////////////////////////////////////// PROTOTIPOS

void cadastra(pesq *p, int pos);
int num_desemp(pesq *p, int tam);

//////////////////////////////////////// PRINCIPAL

int main(void)
{
    const int tam = 3;
    int pos = 0;
    pesq registrando[tam];

    for(pos=0; pos<tam; pos++)
        cadastra(registrando, pos);

    for(pos=0; pos<tam; pos++)
    {
        if(registrando[pos].situacao.desempregados.nao_empregado == 1)
        {
            printf("\nRegistro %d\n", pos+1);
            printf("Tempo desempregado: %d meses\n", registrando[pos].situacao.desempregados.tempo_desemp);
            printf("Tempo de servico anterior: %d meses\n", registrando[pos].situacao.desempregados.tempo_servico_ant);
        }
        else
        {
            printf("\nRegistro %d\n", pos+1);
            printf("Tempo de servico: %d meses\n", registrando[pos].situacao.empregados.tempo_servico);
            printf("Trabalhando antes: %s\n", registrando[pos].situacao.empregados.se_empregos_antes);
        }
    }
    printf("\n\n///////////////\n\n");
    printf("O numero de desempregados e de %d\n", num_desemp(registrando, tam));
    getch();
    return 0;
}
///////////////////////////////////////// FUNÇOES

void cadastra(pesq *p, int pos)
{
    int op;

    printf("Esta atualmente empregado? (1: sim/2: nao)\n");
    scanf("%d",&op);
    system("cls");
    switch(op)
    {
        case 1:
            {
                printf("Qual o seu tempo de servico atualmente em meses? \n");
                scanf("%d",&p[pos].situacao.empregados.tempo_servico);
                printf("Anteriormente, estava empregado? (s/n)\n");
                scanf("%s", &p[pos].situacao.empregados.se_empregos_antes);
                break;
            }
        case 2:
            {
                printf("Qual o tempo que voce esta desempregado em meses? \n");
                scanf("%d",&p[pos].situacao.desempregados.tempo_desemp);
                printf("Quanto tempo permaneceu empregado no trabalho anterior em meses? \n");
                scanf("%d",&p[pos].situacao.desempregados.tempo_servico_ant);
                p[pos].situacao.desempregados.nao_empregado = 1;
                break;
            }
        default:
            {
                printf("Digito invalido!\n");
                getch();
            }
    }
    system("cls");
}

int num_desemp(pesq *p, int tam)
{
    int i=0, aku=0;

    for(i=0; i<tam; i++)
    {
        if(p[i].situacao.desempregados.nao_empregado == 1)
            aku++;
    }
    return aku;
}























