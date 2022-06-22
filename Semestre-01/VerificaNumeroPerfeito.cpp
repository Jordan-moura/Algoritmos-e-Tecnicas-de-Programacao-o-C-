/*
Dado um número positivo, informe se ele é perfeito ou não. Um número
perfeito é um número inteiro para o qual a soma de todos os seus divisores
positivos próprios (excluindo ele mesmo) é igual ao próprio número.
- Por exemplo, o número 6 é um número perfeito, pois: 6=1+2+3
*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
	 int num, cont,soma=0;

	 printf("Digite um numero para descobrir se e perfeito: ");
	 scanf("%d",&num);

	 for (cont = 1; cont < num; cont++)
	 {
	 	if (num%cont==0)
	 		soma += cont;
	 }
	 if (soma == num)
	 	printf("numero perfeito sim.");
	else printf("Nao e numero perfeito.");

	getche();
	return 0;
}
