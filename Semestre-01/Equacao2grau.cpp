/*
Faça um programa para resolver equações do 2? grau: ax2 + bx + c = 0. Observações:
? A variável a deve ser diferente de zero
? ? = b2 – 4*a*c
? ? < 0 ? não existe raiz real
? ? = 0 ? existe uma raiz real
o x = (-b) / (2*a)
? ? > 0 ? existem duas raízes reais
o x1 = (-b + v?) / (2*a)
o x2 = (-b - v?) / (2*a)
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	float a, b, c,delta,x1, x2;
	
	printf("Digite o valor de 'a' da equacao: ");
	scanf("%f",&a);
	printf("Digite o valor de 'b' da equacao: ");
	scanf("%f",&b);
	printf("Digite o valor de 'c' da equacao: ");
	scanf("%f",&c);
	
	if (a == 0) printf("Nao sera uma equacao de segundo grau.");
	else
	{
		delta = (b*b) - (4*a*c);
		
		if (delta < 0) printf("Nao existe raiz real!");
		else if (delta == 0)
		{
			x1 = -b/(2*a);
			printf("O valor da raiz sera de %.1f",x1);
		}
		else 
		{
			x1 = (-b + sqrt(delta))/ (2*a);
			x2 = (-b - sqrt(delta))/ (2*a);	
			printf("As raizes da equacao sao %.1f e %.1f",x1,x2);
		}
	}
	
	getch();
		return 0;
}
