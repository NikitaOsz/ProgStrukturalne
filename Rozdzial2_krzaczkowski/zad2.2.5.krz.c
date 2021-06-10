#include <stdio.h>
#include <stdlib.h>

int pot(int n){
    int w = 2;
    for(int i = 1; i < n; i++){
       w *= 2;
    }
    return w;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", pot(n));
    return 0;
}


