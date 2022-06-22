/*
    Verifica se eh primo ou nao o numero inserido pelo usuario
*/
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PRINCIPAL
int main()
{
	// variaveis
	int num, aku=0, i;
	// pedindo o numero
	printf("entre um numero inteiro positivo: ");
	scanf("%d",&num);
	if(num == 0)
	{
		printf("O numero 0 nao e primo!");
		return 0;
	}
	// Verificação
	for(i=1; i<=num/2; i++)
	{
		if(num % i == 0)
			aku += 1;
	}
	if(aku>1)
		printf("o numero %d nao e primo", num);
	else
		printf("o numero %d e primo", num);
	getch();
	return 0;
}
