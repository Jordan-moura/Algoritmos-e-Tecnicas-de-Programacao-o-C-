#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// REGISTROS
typedef struct S_TITULO
{
    int codigo_titulo;
    char descricao[50];
    float valorH_A;
}titulo;

typedef struct S_PROFESSOR
{
    int codigo_professor;
    char nome[50];
    int codigo_titulo;
    int totalH_S;
}professor;

// PROTOTIPOS
void cadastra_tit(titulo *tit, int tam2);
void cadastra_prof(professor *prof, titulo *tit, int tam1, int tam2);
void lista(professor *prof, titulo *tit, int tam1, int tam2);

// PRINCIPAL
int main()
{
  const int tam2=5, tam1=14;
  titulo tit[tam2];
  professor prof[tam1];

    // CADASTRO DE TITULOS
    cadastra_tit(tit, tam2);
    printf("Cadastro de titulos feito com sucesso!\n");
    getch();
    system("cls");
    // Cadastro de professores
    cadastra_prof(prof, tit, tam1, tam2);
    printf("Cadastro de professores feito com sucesso!\n");
    getch();
    system("cls");
    // Printar a resposta
    lista(prof, tit, tam1, tam2);
    getch();
}
//////////// FUNÇOES
void cadastra_tit(titulo *tit, int tam2)
{
    int i;

    strcpy(tit[0].descricao, "Bacharelado");
    strcpy(tit[1].descricao, "Licenciatura");
    strcpy(tit[2].descricao, "Especialista");
    strcpy(tit[3].descricao, "Mestrado");
    strcpy(tit[4].descricao, "Doutorado");

    printf("***Cadastro de titulos***\n");
    for(i=0; i<tam2; i++)
    {
        printf("Codigo do titulo de %s: ", tit[i].descricao);
        scanf("%d",&tit[i].codigo_titulo);
        printf("Valor da hora por aula: ");
        scanf("%f",&tit[i].valorH_A);
        system("cls");
    }
}

////////////////
void cadastra_prof(professor *prof, titulo *tit, int tam1, int tam2)
{
    int i, j;
    printf("***Cadastro de professor***\n");
    for(i=0; i<tam1; i++)
    {
        printf("Professor %d\n", i+1);
        printf("Codigo do professor: ");
        scanf("%d",&prof[i].codigo_professor);
        printf("Nome: ");
        scanf("%s",&prof[i].nome);
        printf("Total de horas semanais: ");
        scanf("%d",&prof[i].totalH_S);
        printf("\n**Codigos dos titulos**\n");
        for(j=0; j<tam2; j++)
        {
            printf("%d: para %s\n", tit[j].codigo_titulo, tit[j].descricao);
        }
        printf("opcao: ");
        scanf("%d",&prof[i].codigo_titulo);
        system("cls");
    }
}
/////////////////////
void lista(professor *prof, titulo *tit, int tam1, int tam2)
{
    int i, j;

    printf("***Listagem***\n");
    for(i=0; i<tam1; i++)
    {
        printf("**************\n");
        printf("Codigo professor: %d\n", prof[i].codigo_professor);
        printf("Nome: %s\n", prof[i].nome);
        for(j=0; j<tam2; j++)
        {
            if(prof[i].codigo_titulo == tit[j].codigo_titulo)
            {
                printf("Titulo: %s\n", tit[j].descricao);
                printf("Valor hora/aula: R$%.2f\n", tit[j].valorH_A);
                printf("Total hora/aula: %d\n", prof[i].totalH_S);
                printf("Total geral: R$%.2f\n", tit[j].valorH_A * prof[i].totalH_S);
                break;
            }
        }
        printf("\n");
    }







}
