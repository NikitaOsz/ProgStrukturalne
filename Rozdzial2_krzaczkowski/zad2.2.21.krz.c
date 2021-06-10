#include <stdio.h>
#include <stdlib.h>

int rek(int n){
    if(n == 0) return 1;
    return 2 * rek(n - 1) + 5;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("ERROR\n");
        return -1;
    }
    printf("%d", rek(n));
    return 0;
}


