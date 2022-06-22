/*
    Programa que mexe com o sistema de uma pizzaria
*/

////////////////////////////////////////////// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
////////////////////////////////////////////// REGISTROS
typedef struct S_endereco
{
    char rua[50];             // 1
    int numero;
    char bairro[50];
}cafofo;

typedef struct S_pessoa
{
    double tel;
    char nome[50];             // 2
    cafofo casa;
}humano;

typedef struct S_cliente
{
    humano pessoa;                     // 3
}consumidor;

typedef struct S_motoqueiro
{
    humano pessoa;                     //4
    int cod_motoca;
}motoca;

typedef struct S_pizza
{
    int cod_pizz;               //5
    char nome[50];
    float preco_pizz;
}hmmpizza;

typedef struct S_pedido
{
    int cod_ped;                //6
    double tel_cliente;
    int cod_pizz;
    int cod_motoca;
    int sit;
}pedido;
////////////////////////////////////////////// PROTOTIPOS
void cadastrar_cliente(consumidor *clien, int n_clien);
void cadastrar_motoca(motoca *motoboy, int n_motoca);
void cadastrar_pizza(hmmpizza *pizza, int n_pizza);
void efetuar_pedido(pedido *ped, int n_pedidos, consumidor *tel_cliente, hmmpizza *cod_pizza, int n_clientes, int n_pizzas);
void despacho_pizza(pedido *ped, motoca *motoboy, int n_motboys, int n_pedidos);
void recebe_pizza(pedido *ped, int num_pedido);
void list_sit(pedido *ped, int num_pedido);
void list_pedidos(pedido *ped, hmmpizza *pizza, consumidor *cliente, int num_cliente, int num_pedido, int num_pizza);
void list_moto(pedido *ped, hmmpizza *pizza, motoca *vrumvrum, int num_vrumvrum, int num_pedido, int num_pizza);
///////////////////////////////////////////// PRINCIPAL
int main()
{   // VARIAVEIS DO MENU
    const int limit_clien=5, limit_pizz=3, limit_ped=6, limit_motoca=6;
    int num_clien=0, num_motoboy=0, num_pizz=0, num_ped=0, opcao, i;
    setlocale(LC_ALL, "Portuguese");
    consumidor clientes[limit_clien];
    motoca motoboy[limit_motoca];
    hmmpizza pizza[limit_pizz];
    pedido receita[limit_ped];
    do
    {
        // MENU PARA O USUARIO VER  A SITUACAO
        printf("Bem vindo ao Sistema da Pizzaria!\n");
        printf("Por aqui temos limites de cadastros:\n");
        printf("Há %d cadastros de clientes em limite de %d\n", num_clien, limit_clien);
        printf("Há %d cadastros de pizzas em limite de %d\n", num_pizz, limit_pizz);
        printf("Há %d cadastros de pedidos em limite de %d\n", num_ped, limit_ped);
        printf("Há %d cadastros de motoboys em limite de %d\n\n", num_motoboy, limit_motoca);
        // OPCOES PARA O USUARIO
        printf("Selecione o que desejar:\n");
        printf("(1) Cadastrar cliente\n");
        printf("(2) Cadastrar motoboy\n");
        printf("(3) Cadastrar pizza\n");
        printf("(4) Efetuar pedido\n");
        printf("(5) Despachar pizza\n");
        printf("(6) Confirmar recebimento da pizza\n");
        printf("(7) Listar as situações dos pedidos\n");
        printf("(8) Listar um pedido de algum cliente\n");
        printf("(9) Listar os pedidos dos motoboys\n");
        printf("(10) Sair do programa\n");
        printf("Opcao: ");
        scanf("%d",&opcao);
        // DIRECIONAR O CAMINHO DA ESCOLHA
        switch(opcao)
        {
            case 1:  // ESCOLHA DE CADASTRAR CLIENTES
                {
                    if(num_clien >= limit_clien)
                    {
                       printf("Limite de clientes atingido, não é possivel cadastra-lo!\n");
                       break;
                    }
                    else
                    {
                        cadastrar_cliente(clientes, num_clien);
                        printf("\n\nCadastrado com sucesso...\n");
                        num_clien += 1;
                        break;
                    }
                }
            case 2: // ESCOLHA DE CADASTRAR MOTOQUEIROS
                {
                if(num_motoboy >= limit_motoca)
                    {
                       printf("Limite de motoboys atingido, não é possivel cadastra-lo!\n");
                       break;
                    }
                    else
                    {
                        cadastrar_motoca(motoboy, num_motoboy);
                        printf("\n\nCadastrado com sucesso...\n");
                        num_motoboy += 1;
                        break;
                    }
                }
            case 3: // ESCOLHA DE CADASTRAR PIZZA
                {
                if(num_pizz >= limit_pizz)
                    {
                       printf("Limite de pizza atingida, não é possivel cadastra-la!\n");
                       break;
                    }
                    else
                    {
                        cadastrar_pizza(pizza, num_pizz);
                        printf("\n\nCadastrado com sucesso...\n");
                        num_pizz += 1;
                        break;
                    }
            }
            case 4: // ESCOLHA PARA EFETUAR PEDIDO
                {
                    if(num_ped >= limit_ped)
                    {
                        printf("Limite de pedidos atingidos, não é possivel efetuar por hoje!\n");
                        break;
                    }
                    else
                    {
                        if(num_pizz == 0 || num_clien == 0)
                        {
                            printf("É necessário que haja cadastros de clientes e de pizzas para efetuar um pedido!\n");
                            break;
                        }
                        else
                        {
                            efetuar_pedido(receita, num_ped, clientes, pizza, num_clien, num_pizz);
                            printf("\n\nEfetuado com sucesso...\n");
                            num_ped += 1;
                            break;
                        }
                    }
                }
            case 5: // ESCOLHA PARA DESPACHAR A PIZZA
                {
                    if(num_motoboy == 0 || num_ped == 0)
                    {
                        printf("É necessario cadastrar algum motoboy e algum pedido antes de despachar alguma pizza!\n");
                        break;
                    }
                    else
                    {
                        despacho_pizza(receita, motoboy, num_motoboy, num_ped);
                        printf("\n\nDespachado com sucesso...\n");
                        break;
                    }
                }
            case 6: // ESCOLHA PARA CONFIRMAR A ENTREGA
                {
                    if(num_ped == 0)
                    {
                      printf("É necessário cadastrar algum pedido.\n");
                      break;
                    }
                    int confirmar = 0;
                    if(num_ped>0)
                    {
                       for(i=0; i<num_ped; i++)
                        {
                            if(receita[i].cod_motoca != 0 && receita[i].sit == 2)
                            {
                                recebe_pizza(receita, num_ped);
                                confirmar = 1;
                                printf("\nRecebimento confirmado...\n");
                                break;
                            }
                        }
                    }
                    if(confirmar == 0)
                    {
                        printf("É necessario confirmar o despacho antes.\n");
                        break;
                    }
                    else if(confirmar == 1)
                        break;
                }
            case 7: // ESCOLHA PARA LISTAR A SITUAÇAO DO PEDIDO
                {
                    if(num_ped == 0)
                    {
                        printf("É necessario efetuar algum pedido.\n");
                        break;
                    }
                    else
                    {
                        list_sit(receita, num_ped);
                        break;
                    }
                }
            case 8: // ESCOLHA PARA LISTAR ALGUM PEDIDO
                {
                    if(num_clien == 0 || num_ped == 0)
                    {
                        printf("É necessario cadastrar algum cliente e efetuar algum pedido.\n");
                        break;
                    }
                    else
                    {
                        list_pedidos(receita, pizza, clientes, num_clien, num_ped, num_pizz);
                        break;
                    }
                }
            case 9:  // ESCOLHA PARA LISTAR O PEDIDO DOS MOTOBOYS
                 {
                     if(num_motoboy == 0 || num_ped == 0)
                    {
                        printf("É necessario cadastrar algum motoboy e efetuar algum pedido.\n");
                        break;
                    }
                    else
                    {
                        list_moto(receita, pizza, motoboy, num_motoboy, num_ped, num_pizz);
                        break;
                    }
                 }
            case 10: // ESCOLHA DE SAIR DO PROGRAMA
                {
                    printf("\n\nObrigado, Volte Sempre!!!\n");
                    break;
                }
            default:  printf("Opcao inexistente, tente novamente...\n"); // ESCOLHA DE OPCAO ERRADA
        }
        getch();
        system("cls");
    }while(opcao != 10);
    // FINALIZANDO O PROGRAMA
    printf("\n\nTarefa finalizada...");
    getch();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////// FUNÇOES
void cadastrar_cliente(consumidor *clien, int n_clien)
{
    int j=0;
    system("cls");
    printf("Cadastro do cliente:\n");
    printf("Por favor, nos informe os seguintes dados...\n\n");
    if(n_clien != 0)
    {
         while(j == 0)
         {
            int i;
            printf("Telefone: ");
            scanf("%lf", &clien[n_clien].pessoa.tel);
            for(i = n_clien - 1; i>=0; i=i-1)
            {
                if(clien[n_clien].pessoa.tel == clien[i].pessoa.tel)
                {
                    printf("Telefone ja cadastrado, tente outro...\n");
                    getch();
                    j=0;
                    break;
                }
                else
                    j=1;
            }
         }
    }
    else
    {
        printf("Telefone: ");
        scanf("%lf", &clien[n_clien].pessoa.tel);
    }
    printf("Nome: ");
    scanf("%s",&clien[n_clien].pessoa.nome);
    printf("Rua: ");
    scanf("%s", &clien[n_clien].pessoa.casa.rua);
    printf("numero: ");
    scanf("%d",&clien[n_clien].pessoa.casa.numero);
    printf("Bairro: ");
    scanf("%s",&clien[n_clien].pessoa.casa.bairro);
}
void cadastrar_motoca(motoca *motoboy, int n_motoca)
{
    int j=0;
    system("cls");
    printf("Cadastro do motoboy:\n");
    printf("Por favor, nos informe os seguintes dados...\n\n");
    if(n_motoca != 0)
    {
         while(j == 0)
         {
            int i;
            printf("Código: ");
            scanf("%d", &motoboy[n_motoca].cod_motoca);
            for(i = n_motoca - 1; i>=0; i=i-1)
            {
                if(motoboy[n_motoca].cod_motoca == motoboy[i].cod_motoca)
                {
                    printf("Código já cadastrado, tente outro...\n");
                    getch();
                    j=0;
                    break;
                }
                else
                    j=1;
            }
         }
    }
    else
    {
        printf("Código: ");
        scanf("%d", &motoboy[n_motoca].cod_motoca);
    }
    printf("Nome: ");
    scanf("%s",&motoboy[n_motoca].pessoa.nome);
    printf("Telefone: ");
    scanf("%lf",&motoboy[n_motoca].pessoa.tel);
    printf("Rua: ");
    scanf("%s",&motoboy[n_motoca].pessoa.casa.rua);
    printf("Numero: ");
    scanf("%d",&motoboy[n_motoca].pessoa.casa.numero);
    printf("Bairro: ");
    scanf("%s",&motoboy[n_motoca].pessoa.casa.bairro);
}
void cadastrar_pizza(hmmpizza *pizza, int n_pizza)
{
    int j=0;
    system("cls");
    printf("Cadastro da Pizza:\n");
    printf("Por favor, nos informe os seguintes dados...\n\n");
    if(n_pizza != 0)
    {
         while(j == 0)
         {
            int i;
            printf("Código: ");
            scanf("%d", &pizza[n_pizza].cod_pizz);
            for(i = n_pizza - 1; i>=0; i=i-1)
            {
                if(pizza[n_pizza].cod_pizz == pizza[i].cod_pizz)
                {
                    printf("Código já cadastrado, tente outro...\n");
                    getch();
                    j=0;
                    break;
                }
                else
                    j=1;
            }
         }
    }
    else
    {
        printf("Código: ");
        scanf("%d", &pizza[n_pizza].cod_pizz);
    }
    printf("Nome: ");
    scanf("%s",&pizza[n_pizza].nome);
    printf("Preço: R$");
    scanf("%f",&pizza[n_pizza].preco_pizz);
}
void efetuar_pedido(pedido *ped, int n_pedidos, consumidor *tel_cliente, hmmpizza *cod_pizza, int n_clientes, int n_pizzas)
{
    int i, j=0;
    system("cls");
    printf("Cadastro de pedidos!\n");
    printf("Em base aos dados para efetuar o pedido temos:\n\n");
    printf("********************\n");
    printf("Telefone dos clientes: \n");
    for(i=0; i<n_clientes; i++)
        printf("%s: %0.lf\n", tel_cliente[i].pessoa.nome,tel_cliente[i].pessoa.tel);
    printf("********************\n");
    printf("Código das pizzas: \n");
    for(i=0; i<n_pizzas; i++)
        printf("%s: %d\n", cod_pizza[i].nome, cod_pizza[i].cod_pizz);
    printf("********************\n");
    printf("Por favor, insira os dados do pedido: \n");
    if(n_pedidos != 0)
    {
         while(1)
         {
            int igual=0;
            printf("Código do pedido: ");
            scanf("%d", &ped[n_pedidos].cod_ped);
            for(i = 0; i<n_pedidos; i++)
            {
                if(ped[n_pedidos].cod_ped == ped[i].cod_ped)
                {
                    printf("Código já cadastrado, tente outro...\n");
                    igual = 0;
                    getch();
                    break;
                }
                igual = 1;
            }
            if(igual=1)
                break;
         }
    }
    else
    {
        printf("Código do pedido: ");
        scanf("%d", &ped[n_pedidos].cod_ped);
    }
    j=0;
    while(j == 0)
         {
            printf("Telefone do cliente: ");
            scanf("%lf", &ped[n_pedidos].tel_cliente);
            for(i = n_clientes; i>=0; i=i-1)
            {
                if(ped[n_pedidos].tel_cliente == tel_cliente[i].pessoa.tel)
                {
                    j=1;
                    break;
                }
            }
            if(j==0)
            {
                printf("Telefone não existe, tente novamente...\n");
                getch();
            }
         }
    j=0;
    while(j == 0)
         {
            printf("Código da pizza: ");
            scanf("%d", &ped[n_pedidos].cod_pizz);
            for(i = n_pizzas; i>=0; i=i-1)
            {
                if(ped[n_pedidos].cod_pizz == cod_pizza[i].cod_pizz)
                {
                    j=1;
                    break;
                }
            }
           if(j==0)
            {
                printf("Código não existe, tente novamente...\n");
                getch();
            }
         }
    ped[n_pedidos].sit = 1;
    ped[n_pedidos].cod_motoca = 0;
}
void despacho_pizza(pedido *ped, motoca *motoboy, int n_motboys, int n_pedidos)
{
    int i;

    system("cls");
    printf("Menu de despacho de pizzas\n");
    printf("Temos os seguintes dados de motoboys para serem escolhidos:\n");
    printf("*********************\n");
    printf("Códigos dos motoqueiros:\n");
    for(i=0; i<n_motboys; i++)
        printf("%s: %d\n", motoboy[i].pessoa.nome, motoboy[i].cod_motoca);
    printf("*********************\n");
    printf("pedido de pizzas:\n");
    for(i=0; i<n_pedidos; i++)
    {
       if(ped[i].sit == 1)
            printf("pedido %d: %d\n", i+1, ped[i].cod_ped);
    }
    printf("*********************\n");
    int aux=0, posi, codigo;
    while(1)
    {
            printf("Código do pedido desejado: ");
            scanf("%d",&aux);
            for(i=0; i<n_pedidos; i++)
            {
                if(aux == ped[i].cod_ped)
                {
                    posi = i;
                    aux = 1;
                    break;
                }
            }
            if(aux == 1)
                break;
            printf("Não existe o código desse pedido...\n");
        }
    aux=0;
    while(1)
    {
        printf("Código do motoboy: ");
        scanf("%d",&codigo);
        for(i=0; i<n_motboys; i++)
        {
            if(codigo == motoboy[i].cod_motoca)
            {
                aux = 1;
                break;
            }
        }
        if(aux == 1)
            break;
        printf("Não existe o código desse motoboy...\n");
    }
    ped[posi].sit = 2;
    ped[posi].cod_motoca = codigo;
}
void recebe_pizza(pedido *ped, int num_pedido)
{
    system("cls");
    int i, posi;
    printf("Menu para confirmar a entrega!\n");
    printf("\n********************************\n");
    printf("A seguir os codigos dos pedidos despachados:\n");
    for(i=0; i<num_pedido; i++)
    {
        if(ped[i].sit == 2)
            printf("pedido %d: %d\n", i+1, ped[i].cod_ped);
    }
    printf("********************************\n");
    while(1)
    {
        int aux=1;
        printf("codigo do pedido: ");
        scanf("%d",&aux);
        for(i=0; i<num_pedido; i++)
        {
            if(ped[i].sit == 2)
            {
                if(aux == ped[i].cod_ped)
                {
                    aux = 0;
                    posi = i;
                    break;
                }
            }
        }
        if(aux == 0)
            break;
        else
            printf("Codigo invalido, tente novamente...\n");
    }
    ped[posi].sit = 3;
}
void list_sit(pedido *ped, int num_pedido)
{

    int opcao, i, aku;
    system("cls");
    printf("Listagem por situação:\n\n");
    printf("(1) Pedidos realizados\n");
    printf("(2) Pedidos despachados\n");
    printf("(3) Pedidos entregues\n");
    printf("Opção: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1: // LISTAGEM DE PEDIDOS REALIZADOS
            {
                aku = 0;
                system("cls");
                printf("Códigos dos pedidos realizados:\n");
                for(i=0; i<num_pedido; i++)
                {
                    if(ped[i].sit == 1)
                    {
                        printf("pedido: %d\n", ped[i].cod_ped);
                        aku++;
                    }
                }
                if(aku == 0)
                    printf("Nenhum pedido.\n");
                break;
            }
        case 2: // LISTAGEM DE PEDIDOS DESPACHADOS
            {
                aku = 0;
                system("cls");
                printf("Códigos dos pedidos despachados:\n");
                for(i=0; i<num_pedido; i++)
                {
                    if(ped[i].sit == 2)
                    {
                        printf("pedido: %d\n", ped[i].cod_ped);
                        aku++;
                    }
                }
                if(aku == 0)
                    printf("Nenhum pedido.\n");
                break;
            }
        case 3: // LISTAGEM DE PEDIDOS ENTREGUES
            {
                aku = 0;
                system("cls");
                printf("Códigos dos pedidos entregues:\n\n");
                for(i=0; i<num_pedido; i++)
                {
                    if(ped[i].sit == 3)
                    {
                        printf("pedido: %d\n", ped[i].cod_ped);
                        aku++;
                    }
                }
                if(aku == 0)
                    printf("Nenhum pedido.\n");
                break;
            }
        default: printf("Opção invalida!\n");
    }
}
void list_pedidos(pedido *ped, hmmpizza *pizza, consumidor *cliente, int num_cliente, int num_pedido, int num_pizza)
{
    double aux;
    int i, j, posi, confirm;
    system("cls");
    printf("Listagem de pedidos\n");
    printf("\n**************************\n");
    printf("A seguir, o telefone dos clientes:\n");
    for(i=0; i<num_cliente; i++)
       printf("%s: %0.lf\n", cliente[i].pessoa.nome, cliente[i].pessoa.tel);
    printf("**************************\n");
    while(1)
    {
        printf("opcao: ");
        scanf("%lf",&aux);

        for(i=0; i<num_cliente; i++)
        {
             if(aux == cliente[i].pessoa.tel)
             {
                posi = i;
                confirm = 1;
                break;
             }
        }
        if(confirm == 1)
            break;
        else
            printf("Telefone não existe no cadastro, insira outro.\n");
    }
    system("cls");
    printf("Listagem dos pedidos deste cliente:\n");
    printf("\n***************************");
    printf("\n%s:\n", cliente[posi].pessoa.nome);
    for(i=0; i<num_pedido; i++)
    {
        if(aux == ped[i].tel_cliente)
        {
            printf("Código do pedido: %d\n", ped[i].cod_ped);
            for(j=0; j<num_pizza; j++)
            {
                if(ped[i].cod_pizz == pizza[j].cod_pizz)
                {
                    printf("Pizza: %s\n", pizza[j].nome);
                    printf("Preço: R$%2.f\n", pizza[j].preco_pizz);
                    break;
                }
            }
            printf("***************************");
        }
    }
}
void list_moto(pedido *ped, hmmpizza *pizza, motoca *vrumvrum, int num_vrumvrum, int num_pedido, int num_pizza)
{
    int i, j, posi, confirm, aux;
    system("cls");
    printf("Listagem de pedidos dos motoboys\n");
    printf("A seguir, os codigos dos motoboys\n");
    for(i=0; i<num_vrumvrum; i++)
       printf("%s: %d\n", vrumvrum[i].pessoa.nome, vrumvrum[i].cod_motoca);
    while(1)
    {
        printf("opcao: ");
        scanf("%d",&aux);

        for(i=0; i<num_vrumvrum; i++)
        {
             if(aux == vrumvrum[i].cod_motoca)
             {
                posi = i;
                confirm = 1;
                break;
             }
        }
        if(confirm == 1)
            break;
        else
            printf("Código não existe no cadastro, insira outro.\n");
    }
    system("cls");
    printf("Listagem dos pedidos deste motoqueiro:\n");
    printf("\n***************************");
    printf("\n%s:\n", vrumvrum[posi].pessoa.nome);
    for(i=0; i<num_pedido; i++)
    {
        if(aux == ped[i].cod_motoca)
        {
            printf("Código do pedido: %d\n", ped[i].cod_ped);
            for(j=0; j<num_pizza; j++)
            {
                if(ped[i].cod_pizz == pizza[j].cod_pizz)
                {
                    printf("Pizza: %s\n", pizza[j].nome);
                    printf("Preço: R$%2.f\n", pizza[j].preco_pizz);
                    break;
                }
            }
            printf("***************************\n");
        }
    }
}
