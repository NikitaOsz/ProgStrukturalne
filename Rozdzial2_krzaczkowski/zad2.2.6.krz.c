#include <stdio.h>
#include <stdlib.h>

int pot(int n, int m){
    if(n == 0 && m == 0){
        printf("ERROR\n");
        return -1;
    }
    if(n < 0 || m < 0){
        printf("ERROR\n");
        return -1;
    }
    int w = n;
    for(int i = 1;i < m; i++){
        w *= n;
    }
    return w;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", pot(n, m));
    return 0;
}


