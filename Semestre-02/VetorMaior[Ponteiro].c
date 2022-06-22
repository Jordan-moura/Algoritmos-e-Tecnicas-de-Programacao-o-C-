// EXERCICIO 04 -- AULA 02
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PROTOTIPOS
int maior(int *p, int tam);
// PRINCIPAl
int main()
{
    printf("EXERCICIO 04 -- AULA 02\n\n");
    // Declarando variaveis e o ponteiro
    int *p;
    int elementos, i, resp;
    // Perguntando quantos elementos o usuario quer
    printf("Entre com o valor total de elementos: ");
    scanf("%d",&elementos);
    // Criando uma alocaçao dinamica para o ponteiro se tornar vetor
    p = (int *)(malloc(elementos * sizeof(int)));
    // Pedindo ao usuario os elementos do vetor
    for(i=0; i<elementos; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d",&p[i]);
    }
    // Chamando a funçao para descobrir qual é o elemento maior
    resp = maior(p, elementos);
    // Printando a resposta
    printf("O maior elemento e: %d", resp);
    free(p);
    getch();
    return 0;
}
// FUNÇOES
int maior(int *p, int tam)  // Percorrendo toda o vetor e encontrar o maior numero
{   // Declarando variaveis
    int i, maior;
    // Percorrendo por todo o vetor
    for(i=0; i<tam; i++)
    {
        if(i==0)
            maior = p[i];
        if(p[i]>maior)
            maior = p[i];
    }
    // Consegui o maior numero, so retornar
    return maior;
}

