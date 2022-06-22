/*
Escreva um algoritmo que receba a idade de 5 pessoas, calcule e exiba a
quantidade de pessoas maiores de idade, sendo que a maioridade é obtida
após se completar 18 anos.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int cont, idade, Mm=0;
	
	for(cont = 0; cont < 5; cont++)
	{
		printf("Por favor, digite a sua idade: ");
		scanf("%d",&idade);
		printf("");
		if (idade >= 18) Mm += 1;	
	}
	
	printf("Ha exatamente %d pessoas maiores de idade!",Mm);
	getch();
		return 0;
}
