/* 
Uma empresa precisa de um programa onde são informados os dados de um funcionário específico (idade, sexo,
salário base e ano de contratação) para que se exiba os dados do funcionário além do novo salário que deve ser
calculado de acordo com o quadro abaixo.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	int idade, ano, sexo;
	float salario;
	
	printf("Preciso de alguns dados para prosseguir!\n");
	printf("Quantos anos voce tem? ");
	scanf("%d",&idade);
	printf("Qual o salario? R$");
	scanf("%f",&salario);
	printf("Ano de contratacao: ");
	scanf("%d",&ano);
	printf("Sexo Masculino(1) ou feminino(2): ");
	scanf("%d",&sexo);
	
	if (idade <= 39)
	{
		switch(sexo)
		{
			case 1:
				salario = salario * 1.1;
				if (2021 - ano < 10)
				{
					salario -= 10;
				}
				else salario += 17;
				break;
			case 2:
				salario = salario * 1.08;
				if (2021 - ano < 10) salario -= 11;
				else salario += 16;
				break;
		}
	}
	else if (idade >= 70)
	{
		switch(sexo)
		{
			case 1:
				salario = salario * 1.15;
				if (2021 - ano < 10)
				{
					salario -= 15;
				}
				else salario += 13;
				break;
			case 2:
				salario = salario * 1.17;
				if (2021 - ano < 10) salario -= 17;
				else salario += 12;
				break;
		}
	}
	else
	{
		switch(sexo)
		{
			case 1:
				salario = salario * 1.08;
				if (2021 - ano < 10)
				{
					salario -= 5;
				}
				else salario += 15;
				break;
			case 2:
				salario = salario * 1.10;
				if (2021 - ano < 10) salario -= 7;
				else salario += 14;
				break;
		}
	}
	printf("Idade: %d\n", idade);
	switch (sexo)
	{
		case 1:
			printf("sexo: Masculino\n");
			break;
		case 2:
			printf("sexo: Feminino\n");
			break;
	}
	printf("Ano de contratacao: %d\n", ano);
	printf("Novo Salario: %.2f\n", salario);
	getch();
		return 0;
}
