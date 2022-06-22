#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
ENUNCIADO
1- Escreva um programa que delete (remova) um valor de um vetor dado dada a sua
posição. Por exemplo, se o vetor dado for v = {2, 5, 7, 10, 12, 13} e o valor a ser
deletado for o da posição 4, o programa deve fornecer o vetor v = {2, 5, 7, 12, 13}.
Supõe-se que espaços vazios só existem no final do vetor, i.e., não existem espaços
vazios entre elementos válidos. Supõe-se também que inicialmente o vetor
encontra-se cheio.
*/
///////////////////////////////////////////// REGISTROS
typedef struct S_vetores
{
    int num;
    int Em_uso;
}vetores;

///////////////////////////////////////////// PROTOTIPOS
void CriaVetor(vetores *vet, int tam);
void RemoverPosi(vetores *vet, int tam);
////////////////////////////////////////////// PRINCIPAL
int main()
{
  const int tam = 6;
  vetores vet[tam];
  // Criar o vetor
  CriaVetor(&vet, tam);
  // Mostrar o vetor e perguntar se quer remover
  int op;
  do
  {
      int i=0;
      printf("Vetor: \n");
      for(i=0;i<tam;i++)
      {
          if(vet[i].Em_uso)
              printf("%d, ", vet[i].num);
      }
      printf("\n\n**************************");
      printf("\nDeseja excluir alguma posicao?  (1) SIM   (2) NAO\n");
      scanf("%d",&op);
      if(op != 2)
        RemoverPosi(&vet, tam);
      system("cls");
  }while (op != 2);

  printf("\nTarefa finalizada...");
  getch();
  return 0;
}
///////////////////////////////////////////// FUNÇOES
void CriaVetor(vetores *vet, int tam)
{
    srand(time(NULL));
    int i;
    for(i=0;i<tam;i++)
    {
        vet[i].num = rand() % 10;
        vet[i].Em_uso = 1;
    }
}
void RemoverPosi(vetores *vet, int tam)
{
    int posi, i;
    vetores aux;

    printf("Qual posicao voce deseja excluir?\n");
    scanf("%d", posi);
    posi = posi - 1;
    vet[posi].Em_uso = 0;

    for(i=posi; i<tam-1; i++)
    {
        aux = vet[i+1];
        vet[i+1] = vet[i];
        vet[i] = aux;
    }
}
