/*
[Switch] Fa�a um programa que seja capaz de concluir qual dentre os animais seguintes foi escolhido por meio de
perguntas e respostas. Animais poss�veis: le�o, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato,
�guia, tartaruga, crocodilo e cobra.
Exemplo:
Mam�fero (1), Ave (2) ou R�ptil (3)? 2
N�o voadora (1), Nadadora (2) ou Rapina (3)? 3
Ent�o o animal escolhido foi o �guia.
Utilize as seguintes classifica��es:
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(void)
{
// Declara�ao de variaveis
		setlocale(LC_ALL,"portuguese");	
	int op;
// Pedir ao usuario a primeira op�ao
	printf("Vamos selecionar um animal desejado!\n");
	printf("Mamiferos(1)\nAve(2)\nR�ptil(3):\n");
	scanf("%d", &op);

	switch(op)
	{
		case 1:
			printf("Voc� escolheu os mamiferos, agora selecione algo mais especifico!\n");
			printf("Quadrupede(1)\nBipede(2)\nVoadores(3)\nAquaticos(4):\n");
			scanf("%d", &op);
			
			switch(op)
			{
				case 1:
					printf("Selecionou o Quadrupede!\nAgora h� mais uma escolha!\n");
					printf("Carnivoro(1)\nHerbivoro(2):\n");
					scanf("%d", &op);
					
					switch(op)
					{
						case 1:
							printf("O animal escolhido � o le�o!");
							break;
						case 2:
							printf("O animal escolhido � o cavalo!");
							break;
					}
							break;
				case 2:
					printf("Selecionou o Bipede!\nAgora h� mais uma escolha:\n");
					printf("Onivoro(1)\nFrutifero(2):\n");
					scanf("%d", &op);
					
					switch(op)
					{
						case 1:
							printf("O animal escolhido � o homem!");
							break;
						case 2:
							printf("O animal escolhido � o macaco!");
							break;
					}
						break;
				case 3:
					printf("Selecionou o voador!\nLogo o seu animal � o morcego!");
					break;
				
				case 4:
					printf("Selecionou o aquatico!\nLogo o seu animal � a baleia!");
					break;		
			}
			break;
		case 2:
			printf("Voc� escolheu as aves, agora selecione algo mais especifico!\n");
			printf("N�o voadores(1)\nNadadoras(2)\nDe rapina(3):\n");
			scanf("%d", &op);
			
			switch(op)
			{
				case 1:
					printf("Selecionou os n�o voadores!\nAgora h� mais uma escolha!\n");
					printf("Tropical(1)\nPolar(2):\n");
					scanf("%d", &op);
					
					switch(op)
					{
						case 1:
							printf("O animal escolhido � a avestruz!");
							break;
						case 2:
							printf("O animal escolhido � o pinguim");
							break;
					}
					break;
				case 2:
					printf("Selecionou as nadadoras!\nLogo o seu animal � o pato!");
					break;
				case 3:
					printf("Voc� selecionou as de rapina!\nLogo o seu animal � a �guia!");
					break;
				}
				break;
		case 3:
			printf("Voc� escolheu os r�pteis!\nAgora selecione algo mais especifico:\n");
			printf("Com casco(1)\nCarnivoro(2)\nSem patas(3):\n");
			scanf("%d", &op);
			
			switch(op)
			{
				case 1:
					printf("Selecionou o com casco!\nLogo o seu animal � a tartaruga!");
					break;
				case 2:
					printf("Selecionou o carnivoro!\nLogo o seu animal � o crocodilo!");
					break;
				case 3:
					printf("Selecionou o sem patas!\nLogo o seu animal � a cobra!");
					break;		
			}
			break;
	}
	getch();
									return 0;
}
