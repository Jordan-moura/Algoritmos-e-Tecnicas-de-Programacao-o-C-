#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
Faça um programa que receba um conjunto de valores inteiros, calcule e exiba o maior e o menor valor
do conjunto.
 Para encerrar a entrada de dados, deve ser digitado o valor zero;
 Para valores negativos, deve ser enviada uma mensagem;
 Esses valores (zero e negativos) não entrarão nos cálculos.
*/

int main(void)
{
    int num,numM,nummenor;
    setlocale(LC_ALL,"portuguese");

    printf("Tarefa 09 --- Aula 06 ---\n\n");
    do
    {
        printf("\nInsira um numero inteiro positivo: (digite 0 para encerrar)\n");
        scanf("%d",&num);

        if(num < 0)
        {
            printf("Valor invalido!\n");
            continue;
        }
        else if(num == 0)
            break;
        else
        {
            if(num > numM)
                numM = num;
            if(num < nummenor)
                nummenor = num;
        }
    }while(1);

    printf("\nO maior numero e %d e o menor e %d.", numM, nummenor);

    printf("\n\nTarefa Finalizada...");
    getche();
    return 0;
}
