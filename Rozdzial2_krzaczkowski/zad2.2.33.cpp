#include <iostream>

using namespace std;

unsigned int suma(int liczba, unsigned int *tab){
    unsigned int sumaL = 0;
    for(int x = 0; x < liczba; x++){
        sumaL += tab[x];
    }
    return sumaL;
}

int main(){
    unsigned int a;
    unsigned int tab[1000];
    int liczba;
    cout<<"Podaj liczbe liczb, jakie chcesz posumowac: ";
    cin>> liczba;
    for(int i = 0; i < liczba; i++){
        cin>> a;
        tab[i] = a;
    }

    cout<<suma(liczba, tab)<<endl;
    return 0;
}

