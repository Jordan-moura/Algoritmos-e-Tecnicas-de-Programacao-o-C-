//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// PROTOTIPOS
void inverter(char palavra[], int pos);

// PROGRAMA PRINCIPAL
void main()
{
  // variaveis
  char palavra[50];
  // Pedindo o string para o usuario
  printf("Atividade 01 --- Aula 01\n\n");
  printf("Insira uma string: ");
  scanf("%[^\n]%*c",&palavra);
  // Usando a função para inverter
  printf("A palavra invertida: ");
  inverter(palavra ,(int) strlen(palavra) - 1);
  getch();
  return 0;
}
// FUNÇOES
void inverter(char palavra[], int pos)
{
    // Caso Base
    if(pos == 0)
    {
        printf("%c", palavra[pos]);
        return;
    }
    printf("%c", palavra[pos]);
	inverter(palavra, pos - 1);

}
