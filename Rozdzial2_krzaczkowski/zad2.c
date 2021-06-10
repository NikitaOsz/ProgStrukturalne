#include <stdio.h>
#include <stdlib.h>

void rzad_ch(char ch[], int i, int j){
    for(int x = 0; x < j; x++){
        for(int y = 0; y < i; y++){
            printf("%c", ch[0]);
        }
        printf("\n");
    }
}

int main(){
    char ch[] = "#";
    int i = 10, j = 2;
    rzad_ch(ch, i, j);
    printf("\n Nie rozumiem polecenia, zrobilem tak jak uwazam.\n");
    return 0;
}

