// EXERCICIO 05 -- AULA 02
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PROTOTIPOS
void swapNumbers(int *x,int *y,int *z); // Ira trocar os valores inseridos
// PRINCIPAL
int main()
{
    printf("EXERCICIO 05 -- AULA 02\n\n");
    // declarando variaveis, ponteiros e contador
    int n1, n2, n3, *p1, *p2, *p3, i;
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    // Pedindo ao usuario os tres numeros
    for(i=1; i<=3; i++)
    {
        printf("Entre com o elemento %d: ", i);
        if(i==1)
            scanf("%d",&n1);
        if(i==2)
            scanf("%d",&n2);
        if(i==3)
            scanf("%d",&n3);
    }
    // Guardado os valores, agora printando os valores guardados
    printf("\nOs valores ANTES da troca sao:\n");
    printf("ELEMENTO 1: %d\n", n1);
    printf("ELEMENTO 2: %d\n", n2);
    printf("ELEMENTO 3: %d\n", n3);
    // Chamando a funçao para efetuar a troca
    swapNumbers(p1, p2, p3);
    // Printando a nova ordem
    printf("\nOs valores depois da troca sao:\n");
    printf("elemento 1: %d\n", n1);
    printf("elemento 2: %d\n", n2);
    printf("elemento 3: %d\n", n3);
    getch();
    return 0;
}
// FUNÇOES
void swapNumbers(int *x,int *y,int *z)
{   // Trocando os valores com ajuda de um auxiliar
    int aux;
    aux = *x;
    *x = *z;
    *z = *y;
    *y = aux;
}
