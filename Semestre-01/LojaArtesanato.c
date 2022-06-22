#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Uma pequena loja de artesanato comercializa dez tipos de objetos. O valor
unitário dos objetos deve ser informado e armazenado em um vetor; a
quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma
posição. Crie um programa que receba os preços e as quantidades vendidas
armazenando-os em seus respectivos vetores (ambos com tamanho dez).
- Depois, determine e mostre: Um relatório contendo a quantidade vendida, o
valor unitário e o valor total de cada objeto. Ao final, deverá ser mostrado o
valor geral das vendas;
- O valor do objeto mais vendido e sua posição no vetor (não se preocupe com
empates).
*/


int main(void)
{
  int Q_obj[10], cont=0, pos;
  float Preco[10], soma=0, Mvendido;

  printf("Aula 07 ----- Tarefa 02 ----\n");
  for(cont; cont < 10; cont++)
  {
      printf("\nInsira o valor unitario do objeto %d: R$", cont + 1);
      scanf("%f", &Preco[cont]);
      printf("Agora, a quantidade do objeto %d vendidos: ", cont + 1);
      scanf("%d",&Q_obj[cont]);
      if (Mvendido < Q_obj[cont])
        {
            Mvendido = Preco[cont];
            pos = cont + 1;
        }
      soma += Q_obj[cont]*Preco[cont];
  }
  printf("-------------------\n\n");
  for(cont=0; cont < 10; cont++)
  {
      printf("Objeto %d: %d produtos vendidos no valor de R$%.2f\nAssim o seu lucro total foi de R$%.2f\n\n", cont+1, Q_obj[cont], Preco[cont], Q_obj[cont]*Preco[cont]);
  }
  printf("O Lucro de todas as vendas foi de R$%.2f!!!\n", soma);
  printf("O objeto mais vendido foi de valor R$%.2f na posicao %d", Mvendido, pos);
  printf("\n\nTarefa finalizada...");
  getche();
  return 0;
}
