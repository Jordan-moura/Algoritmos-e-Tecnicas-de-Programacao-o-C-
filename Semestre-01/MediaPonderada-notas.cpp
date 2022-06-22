/*
Fa�a um programa para ler 2 valores, sabendo-se que estes valores correspondem as notas de duas provas (P1 e
P2). Voc� deve verificar se os valores fornecidos s�o v�lidos, ou seja, se as notas est�o no intervalo de 0.0 a 10.0,
onde caso uma nota inv�lida seja fornecida, o programa deve ser encerrado. Calcular a m�dia ponderada entre as
notas, considerando um peso de 40% para a prova P1 e 60% para a prova P2. Exibir na tela o resultado da m�dia
das notas.
*/

#include <stdio.h>
#include <conio.h>


int main(void)
{
	
	float n1,n2,media;
	
	printf("Digite a nota da primeira prova: ");
	scanf("%f",&n1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f",&n2);
	
	if ( n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
	{
		printf("Informacao invalida");
	}
	else
	{
		media = (n1*40 + n2*60) / 100;
		printf("A media e de %.2f", media);
	}
	getch();
				return 0;	
}
