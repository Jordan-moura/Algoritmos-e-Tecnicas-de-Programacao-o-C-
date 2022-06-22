#include <stdio.h>
#include <stdlib.h>

/*
Dois números naturais sempre têm divisores comuns. Por exemplo: os divisores comuns de 12 e 18 são
1, 2, 3 e 6. Dentre eles, 6 é o maior. Então chamamos o 6 de máximo divisor comum de 12 e 18 e
indicamos m.d.c.(12,18) = 6.
Cálculo do m.d.c. pelo processo das divisões sucessivas: Nesse processo efetuamos várias divisões até
chegar a uma divisão exata. O divisor desta divisão é o m.d.c. Acompanhe o cálculo do m.d.c.(48,30).
Regra prática:
 Dividimos o número maior pelo número menor: 48 / 30 = 1 (com resto 18);
 Dividimos o divisor 30, que é divisor da divisão anterior, por 18, que é o resto da divisão
anterior, e assim sucessivamente:
 30 / 18 = 1 (com resto 12)
 18 / 12 = 1 (com resto 6)
 12 / 6 = 2 (com resto zero - divisão exata)
 O divisor da divisão exata é 6. Então m.d.c.(48,30) = 6.
Faça um programa que calcule o m.d.c. entre dois números fornecidos pelo usuário.
*/

int main(void)
{
    int n1, n2, div=0, cont;
    printf("Atividade 06 ---- Aula 06 ----\n\n");
    printf("Insira um numero inteiro positivo: ")/
    scanf("%d",&n1);
    printf("Insira outro numero inteiro positivo: ")/
    scanf("%d",&n2);

    if(n1 > n2)
    {
        for(cont = 1; cont <= n2; cont++)
        {
           if(n1 % cont == 0 && n2 % cont == 0)
                div = cont;
        }
    }
    else
    {
        for(cont = 1; cont <= n1; cont++)
        {
           if(n1 % cont == 0 && n2 % cont == 0)
                div = cont;
        }
    }
    printf("O maximo divisor comum entre %d e %d: %d", n1, n2, div);
    printf("\n\nFim da Tarefa...");
    getche();
    return 0;
}
