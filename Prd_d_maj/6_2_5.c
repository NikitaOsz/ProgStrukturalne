#include <stdio.h>
#include <stdlib.h>
int*** stworz(int n,int m,int k)
{
    int *** t = malloc(n*sizeof(int**));
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i < m; j++)
            t[j] = malloc(k*sizeof(int));
    }
    return t;
}
void usun(int n, int m, int k, int ***t)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i <m; i++)
            free(t[i]);
        free(t);
    }
}
int main()
{
    int n=2, m=3, k=2;
    printf("%d", stworz(&n,&m,&k));
    return 0;
}