#include <stdio.h>
#include <stdlib.h>

double min(double a, double b){
    if(a > b) return b;
    return a;
}

int main(){
    double a = 10, b = 5;
    printf("%g %g\n", a, b);
    printf("Mniejsze jest: ");
    printf("%g", min(a, b));

    return 0;
}
