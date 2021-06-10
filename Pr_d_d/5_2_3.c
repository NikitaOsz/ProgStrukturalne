#include <iostream>
#include<string.h>

using namespace std;
int porownaj(string, string);

int main()
{
    string napis1, napis2;
    cout<<"podaj pierwszy napis: ";
    getline(cin, napis1);
    cout<<"podaj drugi napis: ";
    getline(cin, napis2);
    //cout<<napis1<<napis2;
    cout<<porownaj(napis1, napis2);

    return 0;
}
porownaj (string napis1, string napis2)
{
    int k= napis1.compare(napis2);
    if(k==0)
         return 1;
     else
       return 0;
}