// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
// Prototipos
int * nextPrime(int n);
// Principal
int main()
{
    int n;
    scanf("%d",&n);
    if(n<2 || n>1000)
        return 0;
    printf("%d", *nextPrime(n));
}
// Funçoes
int * nextPrime(int n)
{
    int *a;
    a = (int*) malloc(sizeof(int));
    a = &n;

    *a = *a+1;
    while(1)
    {
        int i, div=0;
        for(i=2; i<=*a/2; i++)
        {
            if(*a%i==0)
            {
                div = div+1;
                break;
            }
        }
        if(div==0)
            return a;
        else
            *a = *a+1;
    }
}
