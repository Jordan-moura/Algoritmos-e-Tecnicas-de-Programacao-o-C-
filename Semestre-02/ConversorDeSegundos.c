// Conversor de segundos para horario normal (horas, minutos e segundos)

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
// REGISTROS
typedef struct Time{
    int h;
    int m;
    int s;
}Time;
// prototipos
Time * time_conversor(int s);
// principal
int main()
{
  int s;
  Time *tempo;
  scanf("%d",&s);
  tempo = time_conversor(s);

  printf("H: %d\nM: %d\nS: %d", (*tempo).h, (*tempo).m, (*tempo).s);
}
// funçoes
Time * time_conversor(int s)
{
    int rest;
    Time *tempinho;
    tempinho = malloc(sizeof(Time));

    (*tempinho).h = (int)s/3600;
    rest = s % 3600;
    (*tempinho).m = (int) rest/60;
    (*tempinho).s = rest % 60;

    return tempinho;
    free(tempinho);
}
