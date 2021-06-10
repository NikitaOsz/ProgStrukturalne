#include <iostream>
#include <cstring>

using namespace std;
void wypisz(char [],int);
void kopiujn (char [], char[], int);
int main()
{
    char nap1[]={'n','a','p','i','s','$'};
    char nap2[]={'t','e','s','t','1'};
    wypisz(nap1,6);
    wypisz(nap2,5);
    cout<<"\n\n";
    kopiujn(nap1,nap2,3);
    wypisz(nap2,11);


    return 0;
}
void wypisz (char tablica[],int rozmiar)
{
    for(int i=0;i<rozmiar;++i)
    {
        cout<<tablica[i];
    }
}
void kopiujn(char nap1[], char nap2[], int n)
{
    char pomocnicza[6], pomocnicza1[6];
    strcpy(nap1,pomocnicza);
    wypisz(pomocnicza,6);


    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
            {
            pomocnicza1[j] = pomocnicza[i];
            };
    }
    strcpy(nap2,pomocnicza1);

}