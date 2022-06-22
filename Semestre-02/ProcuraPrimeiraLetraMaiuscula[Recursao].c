// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
// PROTOTIPOS
void acha_letra(char palavra[], int tam);
// PRINCIPAL
int main()
{
	// variaveis
	char name[50];
	// pedindo a string
	printf("Escreva uma string que contenha 1 ou mais letras maiusculas: ");
	scanf("%[^\n]%*c",&name);
	// chamando a função
	acha_letra(name, 0);
	// finalizando o programa
	getch();
	return 0;
}
// FUNÇOES
void acha_letra(char palavra[], int tam)
{
	// Caso Base
	if (palavra[tam] >= 65 && palavra[tam] <= 90)
	{
		printf("A primeira letra maiuscula e: %c, na posicao %d.", palavra[tam], tam+1);
		return;
	}	
	// recursao
	acha_letra(palavra, tam+1);
}
