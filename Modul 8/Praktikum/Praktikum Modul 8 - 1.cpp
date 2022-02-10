#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int a = 15;

    cout<<" Pemanggilan Variabel Lokal "<<endl;
    cout<<" \nNilai Variabel didalam fungsi main (): "<<a;
    cout<<" \nNilai Variabel didalam fungsi main (): "<<a;
    cout<<" \nNilai ini Terlihat bahwa variabel a Tidak Berada Diluar ";
    cout<<" \nFungsi lokal ";
    cout<<" \nFungsi Lokal sendiri tidak dikenal oleh fungsi lokal ";
    cout<<" \nYang dideklarasikan pada fungsi main() ";
    getch();

    return 0;
}
