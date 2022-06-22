/*   ENUNCIADO -----------
Faça um programa para cadastrar frutas, com suas respectivas características.
Cada fruta tem: cor (vermelha, amarela, verde), tamanho (pequena, media,
grande), sabor (doce, azeda)
- O programa conterá 3 enumerações, uma para cada característica, e uma
estrutura, que conterá o nome da fruta e as três enumerações
- O programa terá as 5 funções a seguir:
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

// Enumeração
typedef enum cor_s
{
    vermelho=1, amarelo, verde
}t_cores;

typedef enum tamanho_s
{
    pequeno=1, media, grande
}t_tamanhos;

typedef enum sabor_s
{
    doce=1, azeda
}t_sabores;

// Registros
typedef struct Frutas_S
{
    char nome[50];
    t_cores cores;
    t_tamanhos tamanhos;
    t_sabores sabores;
}fruta;


// Prototipos
void lista_cor();
void lista_tamanho();
void lista_sabor();
void cadastra(fruta *f, int tam);
void lista(fruta *f, int tam);

// Principal
int main()
{
    const int tam = 3;
    fruta frufru[tam];
    setlocale(LC_ALL, "portuguese");

    // Cadastrando
    cadastra(frufru, tam);
    // Listando todas as frutas cadastradas
    lista(frufru, tam);
    getch();
    return 0;
}

// Funçoes
void cadastra(fruta *f, int tam)
{ // CADASTRANDO A FRUTA
   int i;
   for(i=0; i<tam; i++)
   {
        printf("Digite o nome da fruta: ");
        scanf("%s",&f[i].nome);
        system("cls");
        do
        {
            lista_cor();
            printf("opção: ");
            scanf("%d",&f[i].cores);
            system("cls");
        }while(f[i].cores < 1 || f[i].cores > 3);

        do
        {
            lista_tamanho();
            printf("opção: ");
            scanf("%d",&f[i].tamanhos);
            system("cls");
        }while(f[i].cores < 1 || f[i].cores > 3);

        do
        {
            lista_sabor();
            printf("opção: ");
            scanf("%d",&f[i].sabores);
            system("cls");
        }while(f[i].cores < 1 || f[i].cores > 3);
   }
}

void lista_cor()
{
    enum cor_s cores;
    char nomescor[4][50] = {"", "vermelho", "amarelo", "verde"};

    printf("Selecione uma cor para a fruta!\n");
    for(cores = vermelho; cores<=verde; cores = (enum cor_s)(cores+1))
    {
        printf("%d: para %s\n", cores, nomescor[cores]);
    }
}

void lista_tamanho()
{
    enum tamanho_s tamanhos;
    char nomestam[4][50] = {"", "pequeno", "medio", "grande"};

    printf("Selecione um tamanho para a fruta!\n");
    for(tamanhos = pequeno; tamanhos<=grande; tamanhos = (enum tamanho_s)(tamanhos+1))
    {
        printf("%d: para %s\n", tamanhos, nomestam[tamanhos]);
    }
}

void lista_sabor()
{
    enum sabor_s sabores;
    char nomessabor[3][50] = {"", "doce", "azedo"};

    printf("Selecione um sabor para a fruta!\n");
    for(sabores = doce; sabores<=azeda; sabores = (enum sabor_s)(sabores+1))
    {
        printf("%d: para %s\n", sabores, nomessabor[sabores]);
    }
}

void lista(fruta *f, int tam)
{
    int i;
    char nomessabor[3][50] = {"", "doce", "azedo"};
    char nomestam[4][50] = {"", "pequeno", "medio", "grande"};
    char nomescor[4][50] = {"", "vermelho", "amarelo", "verde"};


    printf("Listando as frutas cadastradas!\n");
    for(i=0; i<tam; i++)
    {
        printf("-------------\n");
        printf("Nome: %s\n", f[i].nome);
        printf("Cor: %s\n", nomescor[f[i].cores]);
        printf("Tamanho: %s\n", nomestam[f[i].tamanhos]);
        printf("Sabor: %s\n", nomescor[f[i].sabores]);
    }
}
