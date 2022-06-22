/*enunciado:
Desenvolva um programa em C para printar somente os números ímpares e
pares de uma sequência pré-determinada. Por exemplo:
Printar números no intervalo: 1 : 10
Todos os números pares de 1 à 10 são: 2 4 6 8 10
Todos os números ímpares de 1 à 10 são: 1 3 5 7 9
*/
// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// PROTOTIPOS
void print_pares(int inicio, int final);
void print_impares(int inicio, int final);
// PRINCIPAL
int main()
{
	// variaveis
	int start, finish;
	// pedindo ao usuario os dados de inicio e fim
	printf("---------Atividade 03 da aula 01 ------------\n\n");
	printf("Digite um numero inteiro positivo para começar: ");
	scanf("%d",&start);
	printf("Digite um numero inteiro positivo para terminar: ");
	scanf("%d",&finish);
	// Chamando as funçoes
	printf("Os numeros pares sao: ");
	print_pares(start, finish);
	printf("\nOs numeros impares sao: ");
	print_impares(start, finish);
	// finalizando o programa
	getch();
	return 0;
}
// FUNÇOES
void print_pares(int inicio, int final)
{
	// verificando paridade
	if(inicio%2 != 0)
		inicio += 1;
	// caso base
	if(inicio>final)
		return;
	// recursao
	printf("%d ", inicio);
	print_pares(inicio+2, final);
}
void print_impares(int inicio, int final)
{
	// verificando paridade
	if(inicio%2 == 0)
		inicio += 1;
	// caso base
	if(inicio>final)
		return;
	// recursao
	printf("%d ", inicio);
	print_impares(inicio+2, final);
}
