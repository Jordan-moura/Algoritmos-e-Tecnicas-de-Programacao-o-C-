// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
// Registros
typedef struct index_s {
   char kindex; //valor de chave
   int pos;    //posição na tabela principal
}index;
typedef struct Funcio_S
{
    int index_;
    char letra;
    float sal;
}funcionario;
// Prototipos
void cria_indice(index I[], int t, funcionario D[], int n);
int busca_seq_ind_inf(funcionario D[], int n, char k, index I[], int t);
int busca_seq_ind_sup(funcionario D[], int n, char k, index I[], int t);
// Principal
int main()
{
    // variaveis
    int qtd_ind, qtd_func, low, hi;
    char l;
    // inserindo o tamanho da index e criando
    scanf("%d",&qtd_ind);
    index ind[qtd_ind];
    for(int i=0; i<qtd_ind; i++)
    {
        scanf(" %c",&ind[i].kindex);
        scanf("%d",&ind[i].pos);
    }
    // inserindo a quantidade de funcionarios e a criando
    scanf("%d",&qtd_func);
    funcionario func[qtd_func];
    for(int i=0; i<qtd_func; i++)
    {
        scanf("%d",&func[i].index_);
        scanf(" %c",&func[i].letra);
        scanf("%f",&func[i].sal);
    }
    // inserindo a letra a ser buscada
    scanf(" %c",&l);
    // analisando a busca por indice do limite inferior
    low = busca_seq_ind_inf(func, qtd_func, l, ind, qtd_ind);
    // indice do limite superior
    hi = busca_seq_ind_sup(func, qtd_func, l, ind, qtd_ind);
    // printando a resposta
    for(int i=low; i<=hi; i++)
    {
        if(func[i-1].letra == l)
            printf("%.2f\n", func[i-1].sal);
    }
    return 0;
}
// Funçoes
void cria_indice(index I[], int t, funcionario D[], int n) {
   for (int j = 0; j < t; j++) {
      int pos = (j+1) * n / (t+1);
      I[j].kindex = D[pos].letra;
      I[j].pos = pos;
   }
}

int busca_seq_ind_inf(funcionario D[], int n, char k, index I[], int t) {
   int j;
   for (j = 0; j < t && I[j].kindex != k; j++)
      ;
   int lowLim = (j == 0) ? 0 : I[j].pos;
   return lowLim;
}

int busca_seq_ind_sup(funcionario D[], int n, char k, index I[], int t) {
   int j;
   for (j = 0; j < t && I[j].kindex != k; j++)
      ;
   int hiLim = (j == t-1) ? n : I[j+1].pos;
   return hiLim;
}

