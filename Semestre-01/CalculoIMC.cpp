/*
Faça um programa que calcule o IMC. O Índice de Massa Corporal (IMC) é uma medida do grau de obesidade uma
pessoa. Através do cálculo de IMC é possível saber se alguém está acima ou abaixo dos parâmetros ideais de peso
para sua estatura. IMC = peso/altura2
.

Cálculo IMC Situação
Abaixo de 18,5 Você está abaixo do peso ideal
Entre 18,5 e 24,9 Parabéns — você está em seu peso normal!
Entre 25,0 e 29,9 Você está acima de seu peso (sobrepeso)
Entre 30,0 e 34,9 Obesidade grau I
Entre 35,0 e 39,9 Obesidade grau II
40,0 e acima Obesidade grau III
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL,"portuguese");
	float peso, h,idh;
	
	printf("Digite a sua altura: ");
	scanf("%f",&h);
	printf("Digite a sua massa corporal: ");
	scanf("%f",&peso);
	
	idh = peso/(h*h);
	
	if (idh < 18.5) printf("Abaixo de 18,5 Você está abaixo do peso ideal");
	else if (idh < 24.9) printf("Entre 18,5 e 24,9 , Parabéns — você está em seu peso normal!");
	else if (idh < 29.9) printf("Entre 25,0 e 29,9 , Você está acima de seu peso (sobrepeso)");
	else if (idh < 34.9) printf("Entre 30,0 e 34,9 , Obesidade grau I");
	else if (idh < 39.9) printf("Entre 35,0 e 39,9 , Obesidade grau II");
	else printf("40,0 e acima Obesidade grau III");
 	getch();
 			return 0;
}
