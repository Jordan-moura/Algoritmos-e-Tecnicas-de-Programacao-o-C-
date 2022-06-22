/*
Fulano tem 1,50 metros e cresce 2 centímetros por ano, enquanto Ciclano tem
1,10 metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule
e exiba quantos anos serão necessários para que Ciclano seja maior que
Fulano.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ano;
	float hfulano, hciclado;

	ano = 0;
	hciclado = 1.1;
	hfulano = 1.5;
	while (hciclado <= hfulano)
	{
		hciclado += 0.03;
		hfulano += 0.02;
		ano++;
	}
	printf("Sao necessarios %d anos para o Ciclano ultrapassar o Fulano!", ano);
	getch();
	return 0;
}
