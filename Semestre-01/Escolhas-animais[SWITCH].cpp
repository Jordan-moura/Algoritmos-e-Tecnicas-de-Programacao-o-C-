/*
[Switch] Faça um programa que seja capaz de concluir qual dentre os animais seguintes foi escolhido por meio de
perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato,
águia, tartaruga, crocodilo e cobra.
Exemplo:
Mamífero (1), Ave (2) ou Réptil (3)? 2
Não voadora (1), Nadadora (2) ou Rapina (3)? 3
Então o animal escolhido foi o águia.
Utilize as seguintes classificações:
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(void)
{
// Declaraçao de variaveis
		setlocale(LC_ALL,"portuguese");	
	int op;
// Pedir ao usuario a primeira opçao
	printf("Vamos selecionar um animal desejado!\n");
	printf("Mamiferos(1)\nAve(2)\nRéptil(3):\n");
	scanf("%d", &op);

	switch(op)
	{
		case 1:
			printf("Você escolheu os mamiferos, agora selecione algo mais especifico!\n");
			printf("Quadrupede(1)\nBipede(2)\nVoadores(3)\nAquaticos(4):\n");
			scanf("%d", &op);
			
			switch(op)
			{
				case 1:
					printf("Selecionou o Quadrupede!\nAgora há mais uma escolha!\n");
					printf("Carnivoro(1)\nHerbivoro(2):\n");
					scanf("%d", &op);
					
					switch(op)
					{
						case 1:
							printf("O animal escolhido é o leão!");
							break;
						case 2:
							printf("O animal escolhido é o cavalo!");
							break;
					}
							break;
				case 2:
					printf("Selecionou o Bipede!\nAgora há mais uma escolha:\n");
					printf("Onivoro(1)\nFrutifero(2):\n");
					scanf("%d", &op);
					
					switch(op)
					{
						case 1:
							printf("O animal escolhido é o homem!");
							break;
						case 2:
							printf("O animal escolhido é o macaco!");
							break;
					}
						break;
				case 3:
					printf("Selecionou o voador!\nLogo o seu animal é o morcego!");
					break;
				
				case 4:
					printf("Selecionou o aquatico!\nLogo o seu animal é a baleia!");
					break;		
			}
			break;
		case 2:
			printf("Você escolheu as aves, agora selecione algo mais especifico!\n");
			printf("Não voadores(1)\nNadadoras(2)\nDe rapina(3):\n");
			scanf("%d", &op);
			
			switch(op)
			{
				case 1:
					printf("Selecionou os não voadores!\nAgora há mais uma escolha!\n");
					printf("Tropical(1)\nPolar(2):\n");
					scanf("%d", &op);
					
					switch(op)
					{
						case 1:
							printf("O animal escolhido é a avestruz!");
							break;
						case 2:
							printf("O animal escolhido é o pinguim");
							break;
					}
					break;
				case 2:
					printf("Selecionou as nadadoras!\nLogo o seu animal é o pato!");
					break;
				case 3:
					printf("Você selecionou as de rapina!\nLogo o seu animal é a águia!");
					break;
				}
				break;
		case 3:
			printf("Você escolheu os répteis!\nAgora selecione algo mais especifico:\n");
			printf("Com casco(1)\nCarnivoro(2)\nSem patas(3):\n");
			scanf("%d", &op);
			
			switch(op)
			{
				case 1:
					printf("Selecionou o com casco!\nLogo o seu animal é a tartaruga!");
					break;
				case 2:
					printf("Selecionou o carnivoro!\nLogo o seu animal é o crocodilo!");
					break;
				case 3:
					printf("Selecionou o sem patas!\nLogo o seu animal é a cobra!");
					break;		
			}
			break;
	}
	getch();
									return 0;
}
