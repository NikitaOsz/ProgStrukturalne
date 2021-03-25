#include <stdio.h>
#include <stdlib.h>

int main(){

    const int a = 100, b = 2137;
    printf("%d + %d = %d", a, b, dod(&a, &b));

    return 0;
}

int dod(const *wska, const *wskb){
    int c = *wska + *wskb;
    return c;
}

