  
#include <stdio.h>
#include <stdlib.h>
int (** stworz(int n, int m, int k))[]
{
    return malloc(n*m*sizeof(int[k]));
}
void zwolnij(int n,int m, int t[][n][m])
{
    free(t);
}
int main()
{
    int n=2, m=3, k=2;
    printf("%d", stworz(&n,&m,&k));
    return 0;
}