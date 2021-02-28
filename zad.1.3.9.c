#include <stdio.h>
#include <stdlib.h>

int main(){
    float liczba1, liczba2;
    int wybor;
    printf("______________\n");
    printf("MENU\n");
    printf("______________\n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    printf("______________\n");
    printf("Wybierz operacje wpisujac cyfre przy niej: ");
    scanf("%d", &wybor);
    printf("\nPodaj dwie liczby: ");
    scanf("%f %f", &liczba1, &liczba2);
    if(wybor == 1){
        float wynik = liczba1 + liczba2;
        printf("%.f + %.f = %.f", liczba1, liczba2, wynik);
    }
    else if(wybor == 2){
        float wynik = liczba1 - liczba2;
        printf("%.f - %.f = %.f", liczba1, liczba2, wynik);
    }
    else if(wybor == 3){
        float wynik = liczba1 * liczba2;
        printf("%.f * %.f = %.f", liczba1, liczba2, wynik);
    }
    else if(wybor == 4){
        float wynik = liczba1 / liczba2;
        printf("%f / %f = %g", liczba1, liczba2, wynik);
    }
    else{
        pritnf("ERROR");
    }


    return 0;
}
