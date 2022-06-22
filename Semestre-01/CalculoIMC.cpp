/*
Fa�a um programa que calcule o IMC. O �ndice de Massa Corporal (IMC) � uma medida do grau de obesidade uma
pessoa. Atrav�s do c�lculo de IMC � poss�vel saber se algu�m est� acima ou abaixo dos par�metros ideais de peso
para sua estatura. IMC = peso/altura2
.

C�lculo IMC Situa��o
Abaixo de 18,5 Voc� est� abaixo do peso ideal
Entre 18,5 e 24,9 Parab�ns � voc� est� em seu peso normal!
Entre 25,0 e 29,9 Voc� est� acima de seu peso (sobrepeso)
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
	
	if (idh < 18.5) printf("Abaixo de 18,5 Voc� est� abaixo do peso ideal");
	else if (idh < 24.9) printf("Entre 18,5 e 24,9 , Parab�ns � voc� est� em seu peso normal!");
	else if (idh < 29.9) printf("Entre 25,0 e 29,9 , Voc� est� acima de seu peso (sobrepeso)");
	else if (idh < 34.9) printf("Entre 30,0 e 34,9 , Obesidade grau I");
	else if (idh < 39.9) printf("Entre 35,0 e 39,9 , Obesidade grau II");
	else printf("40,0 e acima Obesidade grau III");
 	getch();
 			return 0;
}
