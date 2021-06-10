#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%p", fun());
    return 0;
}

int fun(){
    double b;
    double *wskaznik;
    wskaznik = (double*) malloc(b * sizeof(*wskaznik));

    return wskaznik;
}
