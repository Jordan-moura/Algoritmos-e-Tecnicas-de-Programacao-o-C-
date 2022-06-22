//  O programa printa a string de forma invertida

// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// PRINCIPAL
int main()
{
	char palavra[50];
	int i, tam;

	printf("Exercicio 02 -- Aula 01\n\n");
	printf("Insira um string: ");
	scanf("%[^\n]%*c",&palavra);
	tam = (int)strlen(palavra);
	printf("A palavra invertida: ");
	for(i=tam-1; i>=0; i-=1)
		printf("%c", palavra[i]);
	getch();
	return 0;
}
