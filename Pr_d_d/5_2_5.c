#include <iostream>
#include <cstring>

using namespace std;
void przepisz(char [], char []);
void wypisz(char [],int);

int main()
{
    char tab1[5], tab2[10];
    cout<<"podaj wartosci dla pierwszej tablicy(max 5 znakow): ";
    cin.getline(tab1,6);
    cout<<"\n\n";
    cout<<"podaj wartosci dla drugiej tablicy(max 5 znakow): ";
    cin.getline(tab2,6);
    //wypisz(tab1,5);
    cout<<"\n\n";
    //wypisz(tab2,5);
    przepisz(tab1,tab2);
    wypisz(tab2,10);

    return 0;
}
void wypisz (char tablica[],int rozmiar)
{
    for(int i=0;i<rozmiar;++i)
    {
        cout<<tablica[i];
    }
}

void przepisz(char tab1 [], char tab2 [])
{
    strcat(tab2, tab1);
}