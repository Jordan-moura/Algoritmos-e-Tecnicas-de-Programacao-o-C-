// EXERCICIO 01 -- AULA 02
/* Enunciado
Escreva um programa em C para demonstrar o uso dos operadores & (endereço de) e *
(valor no endereço). Utilize exemplos simples. Faça um diagrama (no paint ou mesmo na
caneta) com apontamentos e comentários
*/
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PRINCIPAL
int main()
{
    printf("Atividade 01 -- Aula 02\n\n");
    // Como na folha, irei criar uma variavel normal "a" e assim vai estar armazenado nessa variavel o seu conteudo e seu endereço de memoria
    int a=7;
    // Assim o conteudo é 7 e seu endereço de memoria sera printada com o "&" na frente do nome,com isso o programa ira buscar o seu endereço
    // Printando o conteudo e endereço de memoria da variavel "a"
    printf("Criando a variavel a...\n");
    printf("Conteudo de a: %d\n", a);
    printf("Endereco de a: %d\n\n", &a);
    // Criando um ponteiro e colocando para apontar para o "a"
    int *b;
    b = &a;
    /* Como na folha, criei um ponteiro e nele possui tambem um endereço de memoria e um conteudo e coloquei o endereço da variavel "a"
        no conteudo de "b", assim o "b" sabe onde esta o "a" e pode interagir com ele
    */
    // Da pra acessar o endereço com & e o conteudo com *
    // Printando o conteudo e endereço de b
    printf("Criando o ponteiro b que aponta para a\n");
    printf("Conteudo de b: %d\n", b);
    printf("Endereco de b: %d\n", &b);
    printf("Conteudo da variavel que b esta apontando: %d\n\n", *b);
    // Vemos entao que b tem o endereço de a em seu conteudo
    printf("Temos o conteudo de b igual ao endereco de a, assim esta apontando para a variavel e pode modificar\n");
    // Com isso, vemos que b consegue acessar a
    // Mudando o conteudo de a pelo ponteiro
    *b = 10;
    // Como na folha, b procurou o endereço que esta contido em seu conteudo, encontrou a e achou o seu conteudo e o alterou
    printf("\nModificando o conteudo de a pelo ponteiro para 10 e printando...\n");
    printf("Novo conteudo de a: %d", a);
    getch();
    return 0;
}
