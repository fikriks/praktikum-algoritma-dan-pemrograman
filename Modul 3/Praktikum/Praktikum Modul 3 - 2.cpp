#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int nilai1,nilai2,h;

    cout<<" Melakukan Operasi Relasi Terhadap Dua Nilai "<<endl;
    cout<<" Masukkan Nilai 1 = ";
    cin>>nilai1;
    cout<<" Masukkan Nilai 2 = ";
    cin>>nilai2;
    getch();

    cout<<" Apakah Nilai 1 == Nilai 2 "<<endl;
    getch();

    h = nilai1==nilai2;
    cout<<" Hasilnya = "<<h<<endl;
    cout<<" Apakah Nilai 1 != Nilai 2 "<<endl;
    getch();

    h = nilai1!=nilai2;
    cout<<" Hasilnya = "<<h<<endl;
    cout<<" Apakah Nilai 1 < Nilai 2 "<<endl;
    getch();

    h = nilai1<nilai2;
    cout<<" Hasilnya = "<<h<<endl;
    cout<<" Apakah Nilai 1 > Nilai 2 "<<endl;
    getch();

    h = nilai1>nilai2;
    cout<<" Hasilnya = "<<h<<endl;
    cout<<" Apakah Nilai 1 <= Nilai 2 "<<endl;
    getch();

    h = nilai1<=nilai2;
    cout<<" Hasilnya = "<<h<<endl;
    cout<<" Apakah Nilai 1 >= Nilai 2 "<<endl;
    getch();

    h = nilai1>=nilai2;
    cout<<" Hasilnya = "<<h<<endl;
    getch();
    cout<<" Demikianlah Operasi Relasi Dilakukan Dalam Bahasa C/C++";

    return 0;
}
