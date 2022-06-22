/*
Controle de Estoque
Criar um programa para manter um controle de estoque com as seguintes informações
para cada item: Nome, Quantidade, Preço, emUso (indica se no vetor uma determinada posição esta em
uso (1) ou não (0))
Criar as seguintes funções:
a. inicializaEstoque: inicializa o vetor usado para armazenar os itens do estoque
b. cadastraItem: cadastra um item para posteriormente ser incluído no estoque
c. imprimeItem: imprime os dados de um item
d. imprimeEstoque: imprime os dados de todos os itens do estoque
e. insereItem: insere um novo item no estoque, se houver espaco disponível
f. removeItem: remove um item de nome dado, se ele estiver no estoque
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
     char nome[50];
     int quantidade;
     float preco;
     int emUso;
} Item;

///////////////////////////////
void inicializaEstoque(Item *estoque, int tam);
void cadastraItem(Item *item);
void imprimeItem(Item item);
void imprimeEstoque(Item *estoque, int tam);
int insereItem(Item *estoque, int tam, Item item);
int removeItem(Item *estoque, int tam, char *nome);
int buscaItem(Item *estoque, int tam, char *nome);
void compacta(Item *estoque, int tam);
void incrementaItem(Item *estoque, int tam, char *nome, int inc);

///////////////////////////////
int main()
{
	const int tam=15;
	Item estoque[tam];
	int opcao, ret;

	inicializaEstoque(estoque,tam);

	do
	{
		printf("1: Insere Item\n");
		printf("2: Remove Item\n");
		printf("3: Imprime Estoque\n");
		printf("4: Sair\n");
		printf("5: Buscar Item\n");
		printf("6: Compactar lista\n");
		printf("7: Incrementar quantidade\n");
		printf("Opcao: ");
		scanf("%d",&opcao);
		fflush(stdin);
		system("cls");

		switch(opcao)
		{
			//insere item
			case 1:
				{
					Item i;
					cadastraItem(&i);
					ret = insereItem(estoque,tam,i);
					if (ret)
					  printf("Inserido com sucesso\n");
					else printf("Item nao inserido (falha)\n");
					break;
				}
			//remove item
			case 2:
				{
					char nome[50];
					printf("nome do item a ser removido: ");
					gets(nome);
					fflush(stdin);

					ret = removeItem(estoque,tam,nome);
					if (ret)
					  printf("Removido com sucesso\n");
					else printf("Item nao removido (falha)\n");
					break;
				}
			//imprime estoque
			case 3:
				{
					imprimeEstoque(estoque,tam);
					break;
				}
			//sair
			case 4:
				{
					printf("Encerrando\n");
					break;
				}
			//buscar item
			case 5:
                {
                    char nome[50];
                    printf("nome do item a ser buscado: ");
                    gets(nome);
                    fflush(stdin);
                    ret = buscaItem(estoque, tam, nome);

                    if(ret>=0)
                        printf("Posicao no estoque(vetor): %d\n", ret);
                    else printf("O item nao existe!\n");
                    break;
                }
            //compactar
            case 6:
                {
                    compacta(estoque, tam);
                    printf("Compactado!\n");
                    break;
                }
			//Incrementar quantidade
			case 7:
                {
                    char nome[50];
                    int inc;
                    printf("nome do item a ser incrementado: ");
                    gets(nome);
                    printf("Incremento: ");
                    scanf("%d",&inc);
                    fflush(stdin);

                    incrementaItem(estoque, tam, nome, inc);
                    break;
                }
			default: printf("Opcao invalida\n");
		}

		getch();
		system("cls");

	}while (opcao!=4);

	getch();
}

//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void inicializaEstoque(Item *estoque, int tam)
{
  int i;
  /* Inicialmente nenhuma posicao do estoque esta em uso */
  for (i=0; i<tam; i++)
    estoque[i].emUso = 0;
}

//////////////////////////
void imprimeItem(Item item)
{
  printf("----- Imprimindo Item -----\n");
  printf("Nome: %s\n", item.nome);
  printf("Quantidade: %d\n", item.quantidade);
  printf("Preco: R$%0.2f\n", item.preco);
}

void imprimeEstoque(Item *estoque, int tam)
{
  int i;

  for (i=0; i<tam; i++)
  {
  	/* Se a posicao i estiver em uso, imprime o item */
    if (estoque[i].emUso)
      imprimeItem(estoque[i]);
  }
}

//////////////////////////
void cadastraItem(Item *item)
{
   printf("----- Cadastrando um Item -----\n");
   printf("Digite o nome do item: ");
   gets(item->nome);
   fflush(stdin);
   printf("Digite a quantidade do item: ");
   scanf("%d", &(item->quantidade));
   printf("Digite o preco do item: ");
   scanf("%f", &(item->preco));
}

int insereItem(Item *estoque, int tam, Item item)
{
   int i;

   for (i=0; i<tam; i++)
   {
   	 /* Se a posicao i nao estiver em uso ... */
     if (estoque[i].emUso == 0)
	 {
		estoque[i] = item;
        /* ... a posicao i passa a estar em uso */
        estoque[i].emUso = 1;

        /* Item inserido com sucesso */
        return 1;
     }
   }

   /* Nao foi possivel inserir o item */
   return 0;
}

//////////////////////////
int removeItem(Item *estoque, int tam, char *nome)
{
  int i;

  for (i=0; i<tam; i++)
    {
      /* Se achou o item no estoque... */
      if ((estoque[i].emUso) && (strcmp(estoque[i].nome, nome) == 0))
	  {
         /* ... remove o item do estoque */
         estoque[i].emUso = 0;

         /* Item removido com sucesso */
         return 1;
      }
	}

  /* Nao foi possivel remover o item */
  return 0;
}

////////////////////
int buscaItem(Item *estoque, int tam, char *nome)
{
    int i;

    for (i=0; i<tam; i++)
    {
        /* Se achou o item no estoque... */
       if ((estoque[i].emUso) && (strcmp(estoque[i].nome, nome) == 0))
                        return i;
    }
    return -1;
}

//////////////////
void compacta(Item *estoque, int tam)
{
    int i, j;
    Item aux;

    for (i=0; i<tam; i++)
    {
        if (estoque[i].emUso == 0)
        {
            for (j=i; j<tam; j++)
            {
                aux = estoque[j+1];
                estoque[j+1] = estoque[j];
                estoque[j] = aux;
            }
        }
    }
}

//////////////////
void incrementaItem(Item *estoque, int tam, char *nome, int inc)
{
    int i;

    for (i=0; i<tam; i++)
    {
        /* Se achou o item no estoque... */
       if ((estoque[i].emUso) && (strcmp(estoque[i].nome, nome) == 0))
         {
            estoque[i].quantidade += inc;
            printf("Incrementado com sucesso\n");
            return;
         }
    }
    printf("Item nao encontrado!\n");
}




