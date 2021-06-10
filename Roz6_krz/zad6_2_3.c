#include <stdio.h>
#include <stdlib.h>

void zwolnij(unsigned int n, unsigned int m, int ** t){
    for(int i = 0;i < n;i++){
        free(t[i]);
    }
    free(t);
}

int main(){
    return 0;
}
