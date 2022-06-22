/*
        Manipulacoes de um banco usando Struct
        como cadastrar, buscar, listar e remover
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//REGISTROS
typedef struct S_BANCO
{
    int n_conta;
    char nome[50];
    float saldo;
    int emUso;
}banco;

// PROTOTIPOS
int busca(banco *conta, int num_conta, int tam);
void cadastra(banco *conta, int num_conta, float saldo, char *nome, int *posi);
void lista(banco *conta, char *nome, int tam);
void remove_menor_saldo(banco *conta, int tam);

// PRINCIPAL
int main()
{
    const int tam=15;
    banco conta[tam];
    int opcao, ret, posi=0;

    do
    {
        printf("BANCO\n");
        printf("1: Cadastrar contas\n");
        printf("2: Listar Algum Cliente\n");
        printf("3: Remover o cliente com saldo menor\n");
        printf("4: Sair\n");
        printf("Opcao: ");
        scanf("%d",&opcao);
        fflush(stdin);
		system("cls");

        switch (opcao)
        {
            case 1:
                {
                   //Novo cadastro
                   int num;

                   printf("***Cadastro de nova conta***\n");
                   printf("Numero da conta: ");
                   scanf("%d",&num);
                   fflush(stdin);

                   ret = busca( conta, num, tam);

                   if(ret)
                   {
                       printf("Ja existe esta conta!\n");
                       break;
                   }

                   else
                    {
                       float saldo;
                       char nome[50];


                       printf("Saldo: ");
                       scanf("%f",&saldo);
                       printf("Nome: ");
                       scanf("%s",&nome);
                       fflush(stdin);

                       cadastra( conta, num, saldo, nome, &posi);
                       printf("Cadastrado com sucesso!\n");
                       posi++;
                       break;
                    }
                }
            case 2:
                {
                    char nome[50];

                    printf("Nome do cliente: ");
                    scanf("%s",&nome);
                    fflush(stdin);
                    system("cls");
                    lista( conta, nome, tam);
                    break;
                }
            case 3:
                {
                    printf("Removido o cliente com menor saldo!\n");
                    remove_menor_saldo( conta, tam);
                    break;
                }
            case 4:
                {
                    printf("Finalizando...\n");
                    break;
                }
            default: printf("Opcao invalida!\n");
        }

        getch();
        system("cls");
    }while(opcao != 4);
    getch();
}

//FUNÇOES
int busca(banco *conta, int num_conta, int tam)
{
    int i;

    for (i=0; i<tam; i++)
    {
      /* Se achou o item no estoque... */
      if (conta[i].n_conta == num_conta)
            return 1;
    }
    return 0;
}
///////////////////
void cadastra(banco *conta, int num_conta, float saldo, char *nome, int *posi)
{
    strcpy(conta[*posi].nome, nome);
    conta[*posi].n_conta = num_conta;
    conta[*posi].saldo = saldo;
    conta[*posi].emUso = 1;
}
/////////////////////
void lista(banco *conta, char *nome, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if((conta[i].emUso == 1) && (strcmp(conta[i].nome, nome) == 0))
        {
            printf("Nome: %s\n", nome);
            printf("Numero da conta: %d\n", conta[i].n_conta);
            printf("Saldo: R$%.2f\n", conta[i].saldo);
            return;
        }
    }
    printf("Nao existe esse cliente!\n");
}
////////////////////
void remove_menor_saldo(banco *conta, int tam)
{
    int i, posi=0;
    float menor;

    for(i=0; i<tam; i++)
    {
        if(conta[i].emUso == 1)
            if(i == 0)
                menor = conta[i].saldo;
            else
            {
                if(conta[i].saldo < menor)
                {
                    menor = conta[i].saldo;
                    posi = i;
                }
        }
    }
    conta[posi].emUso = 0;
}
