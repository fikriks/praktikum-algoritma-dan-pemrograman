#include<iostream>
#include<conio.h>

using namespace std;

int segitiga(int alas, int t)
{
    int LS;
    LS = 0.5 * alas * t;
    return LS;
}

int persegi(int s)
{
    int LP;
    LP = s * s;
    return LP;
}

int main()
{
    int a;
    float lagi, LP, LS, s, alas, t;
    char ulang;

    show:
        cout<<"\n";
        cout<<" 1. Menghitung Luas Persegi. "<<endl;
        cout<<" 2. Menghitung Luas Segitiga. "<<endl;
        cout<<" Masukkan Pilihan : ";
        cin>>a;

    switch(a)
    {
        case 1:
            cout<<" Masukkan sisi ";
            cin>>s;
            LP = persegi(s);
            cout<<" Luas persegi adalah "<<LP;
            break;
        case 2:
            cout<<" Masukkan alas ";
            cin>>alas;
            cout<<" Masukkan tinggi ";
            cin>>t;
            LS = segitiga(alas,t);
            cout<<" Luas segitiga adalah "<<LS;
            break;
    }

    cout<<" Mau Mencoba Lagi ? [Y/T] ";
    ulang = getch();
    if(ulang == 'Y' || ulang == 'y')
        goto show;
    if(ulang == 'T' || ulang == 't')
        cout<<" T E R I M A K A S I H ";
    cout<<"\n";
}
