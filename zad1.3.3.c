#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Podaj trzy liczby: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c){
        printf("Najwieksza: %d", a);
    }
    else if(b >= c){
        printf("Najwieksza: %d", b);
    }
    else{
        printf("Najwieksza: %d", c);
    }

    return 0;
}
