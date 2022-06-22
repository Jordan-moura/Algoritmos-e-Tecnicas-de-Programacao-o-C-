/*
Ler os seguintes dados de uma pessoa: nome, sexo (M ou F), idade (0 a 150) e nacionalidade (brasileira (b) ou
estrangeira (e)). Testar a validade dos dados fornecidos, indicando se o sexo, a idade e a nacionalidade são válidos
ou inválidos. Se um dos dados fornecidos for inválido indicar ao usuário. Se todos os dados forem válidos, exibir uma
mensagem como segue, onde aparecem os dados fornecidos:
José Silva, brasileiro do sexo masculino e maior de idade, está habilitado a dirigir
Maria Silva, brasileira do sexo feminio e maior de idade, está habilitada a dirigir
Junior Silva, brasileiro do sexo masculino e menor de idade, não está habilitado a dirigir
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
	char nome, nasci, sexo, hab, Mm;
	int idade, x;
	
	printf("Digite o seu nome: ");
	scanf(" %s",&nome);
	printf("Digite a sua idade: ");
	scanf(" %d",&idade);
	printf("Digite a sua nacionalidade como brasileiro(b) ou estrangeiro(e): ");
	scanf(" %s",&nasci);
	printf("Digite o seu sexo como masculino(M) ou feminino(F): ");
	scanf(" %s",&sexo);
	
	printf("%s", nasci);
	x = 0;
	if (0 < idade < 150){printf("%d",x);}
	else x = 1;
	if ((nasci == 'b' || nasci == 'e') && x == 0) {printf("%d",x);}
	else x = 1;
	if ((sexo == 'F' || sexo == 'M') && x == 0){printf("%d",x);}
	else x = 1;
	if (x == 1) printf("Informacao invalida");
	








/*	if (nasci == 'b' && sexo == 'M') nasci = "brasileiro";
	else if (nasci == 'b' && sexo == 'F') nasci = "brasileira";
	else if (nasci == 'e' && sexo == 'M') nasci = "estrangeiro";
	else if (nasci == 'e' && sexo == 'F') nasci = "estrangeira";
	
	if(sexo == 'F') sexo = "Feminino";
	else sexo = "Masculino";
	
	if(idade >= 18) Mm = "maior";
	else
	{
	 	Mm = "menor";
	 	hab = "nao";
	}
	
	printf("%s, %s do sexo %s e %s de idade, %s esta habilitado a dirigir",nome, nasci, sexo, Mm, hab);
*/	getch();
		return 0;
}

