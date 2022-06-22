/*enunciado:
Desenvolva um programa em C para printar somente os n�meros �mpares e
pares de uma sequ�ncia pr�-determinada. Por exemplo:
Printar n�meros no intervalo: 1 : 10
Todos os n�meros pares de 1 � 10 s�o: 2 4 6 8 10
Todos os n�meros �mpares de 1 � 10 s�o: 1 3 5 7 9
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
	printf("Digite um numero inteiro positivo para come�ar: ");
	scanf("%d",&start);
	printf("Digite um numero inteiro positivo para terminar: ");
	scanf("%d",&finish);
	// Chamando as fun�oes
	printf("Os numeros pares sao: ");
	print_pares(start, finish);
	printf("\nOs numeros impares sao: ");
	print_impares(start, finish);
	// finalizando o programa
	getch();
	return 0;
}
// FUN�OES
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
