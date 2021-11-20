#include<iostream>

using namespace std;

int main()
{
    const int kilobyte = 1024, harga = 7;
    int megabyte, hasil1, hasil2;

    cout<<"Menghitung biaya dalam menggunakan akses data"<<endl;
    cout<<"Masukan satuan Mega Byte (MB) : ";
    cin>>megabyte;

    hasil1 = megabyte * kilobyte;

    hasil2 = hasil1 * harga;

    cout<<"Penggunaan Data = "<<megabyte<<" MB"<<endl;
    cout<<"Biaya Penggunaan Data Per-KB adalah Rp.7"<<endl;
    cout<<"Jadi, Total Biaya Penggunaan Data adalah RP."<<hasil2<<endl;

    return 0;
}
