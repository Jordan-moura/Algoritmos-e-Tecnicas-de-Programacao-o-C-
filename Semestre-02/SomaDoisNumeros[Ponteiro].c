// EXERCICIO 02 -- AULA 02
/*
Escreva um programa em C que fa�a a soma de 2 n�meros utilizando ponteiros.
Dados de teste:
Entre com o primeiro n�mero : 5
Entre com segundo n�mero : 6
Sa�da esperada:
A soma �: 11
*/
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PRINCIPAL
int main()
{
    printf("Exercicio 02 -- Aula 02\n\n");
    // Declarando variaveis
    int num1, num2;
    // Pedindo ao usuario inserir os dois numeros
    printf("Entre com o primeiro numero: ");
    scanf("%d",&num1);
    printf("Entre com o segundo numero: ");
    scanf("%d",&num2);
    // Criando ponteiros que aponte para cada numero
    int *a, *b;
    a=&num1;
    b=&num2;
    // Criando a variavel resposta e somando
    int res;
    res = *a + *b;
    // Printando a resposta
    printf("A soma e: %d", res);
    getch();
    return 0;
}
