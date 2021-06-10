#include <stdio.h>
#include <stdlib.h>

int main(){

    char c;
    printf("Podaj wielka litere alfabetu angielskiego: ");
    scanf("%c", &c);
    int lit = (int)c - 65;
    for(int i = 65; i <= (int)c; i++){
        for(int z = 0; z < lit; z++){
            printf(" ");
        }
        int x;
        for(x = 65;x <= (int)c - lit; x++){
            printf("%c", x);
        }
        lit--;
        x -= 2;
        for(int j = 65; j <  i; j++){
            printf("%c", x);
            x -= 1;
        }
        printf("\n");
    }
    return 0;
}

