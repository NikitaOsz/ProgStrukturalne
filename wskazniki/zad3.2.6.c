#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 131, b;
    int *w = &b;
    wsk(n, w);
    printf("%d %d", n, *w);
    return 0;
}

void wsk(int n, int *w){
    *w = n;
    printf("%d %d\n", n, *w);
}

