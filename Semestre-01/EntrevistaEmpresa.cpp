/*
A empresa Cara de Pau Ltda. resolveu fazer uma pesquisa de mercado,
abrangendo o maior n�mero de pessoas poss�veis, para saber se as pessoas
est�o gostando ou n�o de um novo produto lan�ado no mercado. As
informa��es coletadas eram: o sexo(M,F), a idade e uma resposta(S=sim,
N=n�o, I=indiferente) de cada entrevistado. Fa�a um algoritmo que calcule:
- quantas pessoas foram entrevistadas;
- quantas pessoas disseram sim e quantas disseram n�o;
- o percentual de pessoas que disseram n�o;
- quantas mulheres disseram sim e quantos homens disseram n�o.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{


	char sexo, op, resp;
	int idade, bom=0, ruim=0,pessoas=0,M=0,H=0;
	float percent;

    setlocale(LC_ALL,"portuguese");
	printf("Bem-vindo a empresa CARA DE PAU!\n");
	printf("Gostariamos de saber sua satisfação...\n");
	do
	{
		printf("\nInsira (M) caso seu sexo for masculino e (F) caso o seu sexo for feminino: \n");
		sexo = getche();
        getch();
		printf("\nInsira sua idade: \n");
		scanf("%d",&idade);
		printf("Qual o seu grau de satisfação com o nosso produto?\n");
		printf("Bom(S)\n");
		printf("Ruim(N)\n");
		printf("Indiferente(I):\n");
		op = getche();
		getch();
		switch(op)
		{
			case 'S':
				bom += 1;
				if (sexo == 'F')
					M += 1;
					break;
			case 'N':
				ruim += 1;
				if (sexo == 'M')
					H += 1;
					break;
		}
		pessoas += 1;
		printf("\nDeseja adicionar a opinião de mais alguem? (S)(N)\n");
		resp = getche();
		getch();
	}while(resp == 'S');

	printf("\nForam entrevistadas %d pessoas!\n", pessoas);
	printf("%d disseram que gostaram e %d que não gostaram.\n", bom, ruim);
	ruim = ruim*100;
	percent = (float)ruim/pessoas;
	printf("O percentual de insatisfação é de %.2f %\n", percent);
	printf("Tivemos %d mulheres que gostaram e %d homens que não gostaram.\n", M, H);
	getch();
	return 0;
}
