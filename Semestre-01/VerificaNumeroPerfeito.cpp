/*
Dado um n�mero positivo, informe se ele � perfeito ou n�o. Um n�mero
perfeito � um n�mero inteiro para o qual a soma de todos os seus divisores
positivos pr�prios (excluindo ele mesmo) � igual ao pr�prio n�mero.
- Por exemplo, o n�mero 6 � um n�mero perfeito, pois: 6=1+2+3
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
