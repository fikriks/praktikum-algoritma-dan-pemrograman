/*
Deskripsi : Program Tugas Mandiri Ke-2 Module Ke-1
Author    : Fikri Khairul Shaleh
Tanggal   : 29 Oktober 2021
*/
#include<iostream>
using namespace std;

int main()
{
    // Deklarasikan variabel dan mengisi nilainya
    const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    // Tampilkan nilai dari variabel menggunakan perulangan
    for(int i=0; i < sizeof(alphabet); i++){
        cout<<alphabet[i];
    }

    cout<<endl;

    return 0;
}
