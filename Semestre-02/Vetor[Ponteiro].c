// EXERCICIO 03 -- AULA 02
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PRINCIPAL
int main()
{
    printf("EXERCICIO 03 -- AULA 02\n\n");
    // Declaraçao de variaveis
    int turnos, i;
    // Pedindo ao usuario quantos elementos ele quer no vetor
    printf("Entre com o numeros de elementos: ");
    scanf("%d",&turnos);
    // Criando o vetor e o ponteiro
    int vet[turnos];
    int *pont;
    // Pedindo ao usuario os elementos do vetor
    for(i=0; i<turnos; i++)
    {
        printf("elemento - %d: ", i);
        scanf("%d",&vet[i]);
    }
    // Relacionando o ponteiro com o vetor
    pont = vet;
    // Printando o vetor usando o ponteiro
    printf("\nOs elementos que voce entrou sao:\n");
    for(i=0; i<turnos; i++)
    {
     printf("elemento - %d: %d\n", i, *pont);
     pont++;
    }
    getch();
    return 0;
}
