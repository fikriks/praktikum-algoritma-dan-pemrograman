#include<iostream>

using namespace std;

int main()
{
    int tinggi, lebar;
    cout<<" Tinggi kotak: ";
    cin>>tinggi;
    cout<<" Lebar kotak: ";
    cin>>lebar;

    int baris, kolom;
    // Buat bingkai atas
    for(kolom = 1; kolom <= lebar; kolom++)
        cout<<'@';
        cout<<endl;
    // Buat kiri dan kanan untuk
    // Baris = 2 s/d (tinggi-1)
    for(baris = 2; baris <= tinggi - 1; baris++){
        cout<<'@';
        for(kolom = 2;kolom <= lebar - 1;kolom++)
            cout<<' '; //spasi
            cout<<'@'<<endl;
    }
    // Buat bingkai bawah
    for(kolom = 1; kolom <= lebar; kolom++)
        cout<<'@';
        cout<<endl;

    return 0;
}
