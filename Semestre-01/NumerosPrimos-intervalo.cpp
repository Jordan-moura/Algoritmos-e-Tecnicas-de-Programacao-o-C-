/*
Sabe-se que um número é primo se for divisível por 1 e por ele mesmo. Faça
um programa que receba um número N e mostre todos os números primos
entre 1 e N
- Casos de teste:
- <10; 1, 2, 3, 5, 7>
- <20; 1, 2, 3, 5, 7, 11, 13, 17, 19>
*/
#include <stdio.h>
#include <conio.h>

int main (void)
{
	int num, primo, aux, div=0;
	
	printf("Digite um numero para expor os primos ate ele: ");
	scanf("%d",&num);
	
	printf("1, ");
	for (primo = 1; primo <= num; primo++)
	{	
		div = 0;
		for (aux = 1; aux <= primo; aux++)
			if (primo%aux == 0) div += 1;		
	
		if (div == 2) printf("%d, ",primo);
	}
	
	getch();
	return 0;
}
