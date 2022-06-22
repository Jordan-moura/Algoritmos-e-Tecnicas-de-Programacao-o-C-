/*
    O programa ira fazer uma operacao acumulativa em que a variavel H ira acumulando o resultado da
    divisao dentro do Loopíng FOR
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int num=1, deno;
    float H=0;
    setlocale(LC_ALL,"portuguese");

    for (deno = 1; deno <= 50; deno++)
    {
        H += (float)num/deno;
        num += 2;
    }
    printf("O valor da operação é de %.2f", H);

    printf("\n\nTarefa Finalizada...");
    getche();
    return 0;
}
