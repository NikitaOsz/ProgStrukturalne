#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, wynik = 0;
    printf("Podaj nieujemne n: ");
    scanf("%d", &n);
    if(n < 0){
        printf("ERROR");
        return -1;
    }
    for(int i = 0; i <= n; i++){
        wynik += i * i;
    }
    printf("Suma kwadratow n elementow wynosi %d", wynik);
    return 0;
}
