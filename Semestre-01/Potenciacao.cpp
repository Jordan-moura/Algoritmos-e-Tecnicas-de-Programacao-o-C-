/*
Implemente um programa que faça a potenciação X^n (não usar a função
pow())
- Entrada: dois inteiros X e n
- Considere n = 0, n < 0 e n > 0
- Saída: X^n
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int x,n,i;
	float resp=1;
	
	printf("Bem Vindo ao exercicio 01!\n");
	printf("Exercicio de potenciacao.\n");
	printf("");
	printf("Insira um valor da base: ");
	scanf("%d",&x);
	printf("Agora, insira um valor para a sua potencia: ");
	scanf("%d",&n);
	
	if (n == 0) 
		printf("%d^%d = 1", x, n);
	
	else if (n < 0)
	{
		for (i = 1; i <= -1*n; i++)
			resp =(float) 1 / x*resp;
		printf("%d^%d = %.2f", x, n, resp);
	}
	else
	{
		for (i = 1; i <= n; i++)
			resp = resp*x;
		printf("%d^%d = %.2f", x, n, resp);		
	}
	getch();
		return 0;
}
