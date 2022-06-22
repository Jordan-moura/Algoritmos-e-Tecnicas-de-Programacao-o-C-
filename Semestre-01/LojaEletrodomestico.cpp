/*
Numa certa loja de eletrodomésticos, o comerciário encarregado da seção de televisores recebe, mensalmente, um
salário mínimo mais comissão. Essa comissão é calculada em relação ao tipo e ao número de televisores vendidos
por mês, obedecendo ao quadro abaixo.
Sabe-se ainda que ele tem um desconto de 8% sobre seu salário bruto para o INSS. Se o seu salário total (mínimo +
comissões - INSS) for maior que o limite de isenção do imposto de renda, ele ainda terá um desconto de 15% sobre o
que ultrapassar o limite de isenção retido na fonte. Leia o valor do salário mínimo, do limite de isenção do IRFP, os preços
dos televisores LED e LCD, o número de televisores LED e o número de televisores LCD vendidos; calcule e escreva
seu salário bruto e seu salário líquido.
1100
2380
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	float salB, salL,Vled,Vlcd, Vaux,Vbruto,prov;
	int led, lcd;
	const int minimo = 1100;

	printf("Digite a quantidade de televisores LED vendidos: ");
	scanf("%d",&led);
	printf("Por qual valor? R$");
	scanf("%f",&Vled);
	printf("Digite a quantidade de televisores LCD vendidos: ");
	scanf("%d",&lcd);
	printf("Por qual valor? R$");
	scanf("%f",&Vlcd);
	
	if (led >= 10)
	{
		Vbruto = minimo + (Vled*0.14)*led;
		Vaux = Vbruto*0.92;
		
		if (Vaux > 2380)
		{
			prov = (Vaux - 2380)*0.85;
			Vaux = Vaux - prov;
		}	
	}
	else if (led < 10)
	{
		Vbruto = minimo + (Vled*0.13)*led;
		Vaux = Vbruto*0.92;
	
		if (Vaux > 2380)
		{
			prov = (Vaux - 2380)*0.85;
			Vaux = Vaux - prov;
		}
	}
	salB = Vbruto;
	salL = Vaux;
	if (lcd >= 20)
	{
		Vbruto = minimo + (Vlcd*0.13)*lcd;
		Vaux = Vbruto*0.92;
		
		if (Vaux > 2380)
		{
			prov = (Vaux - 2380)*0.85;
			Vaux = Vaux - prov;
		}
	}
	else if (lcd < 20)
	{
		Vbruto = minimo + (Vlcd*0.12)*lcd;
		Vaux = Vbruto*0.92;
		
			if (Vaux > 2380)
		{
			prov = (Vaux - 2380)*0.85;
			Vaux = Vaux - prov;
		}
	}
	salB += Vbruto;
	salL += Vaux;
	
	printf("Dessa forma o seu salario bruto sera de R$%.2f e o seu salario liquido sera de R$%.2f", salB, salL);
	getch();
				return 0;
}
