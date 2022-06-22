/*
Faca um programa que receba dois numeros, verifique se estes sao pares ou impares e exiba a mensagem sobre a
situacao de cada um. Alem disso, exiba o resultado das seguintes operacoes
*/

#include <stdio.h>
#include <conio.h>


int main(void)
{

	//Variaveis
	int n1, n2;
	//Pedindo ao usuario os dois numeros para analise
	printf("Insira um numero: ");
	scanf("%d",&n1);
	printf("Insira outro numero: ");
	scanf("%d",&n2);

	//Analisando se eh par ou nao
	if (n1 % 2 == 0 && n2 % 2 == 0)
	{
		printf("Os dois numeros sao pares!\n");
	}
	else if (!(n1 % 2 == 0) && !(n2 % 2 == 0))
	{
		printf("Os dois numeros sao impares!\n");
	}
	else if (n1 % 2 == 0)
	{
		printf("O primeiro numero e par e o segundo e impar!\n");
	}
	else
		printf("O primeiro numero e impar e o segundo e par!\n");

	printf("A soma entre eles e %d\n", n1 + n2);
	printf("A divisao e %.2f\n",(float)n1/n2);
	printf("A multiplicacao e %d\n", n1*n2);
	printf("A subtracao e %d",n1-n2);
	getch();
			return 0;
}


