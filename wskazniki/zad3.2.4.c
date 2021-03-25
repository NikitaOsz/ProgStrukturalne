#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 1000, b = 2000;
    wsk(&a, &b);

    return 0;
}

void wsk(int *wska, int *wskb){
    if(*wska > *wskb){
        int bufor = *wska;
        *wska = *wskb;
        *wskb = bufor;
        printf("Zamieniono!\n");
    }
    printf("a: %d, b: %d", *wska, *wskb);
}
