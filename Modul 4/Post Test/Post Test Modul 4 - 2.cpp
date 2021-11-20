#include<iostream>

using namespace std;

int main()
{
    int pilihan, celcius;
    string satuan;
    char simbol;
    float hasil;

    cout<<"Konversi Celcius (C) ke Reamur (R), Fahrenheit (F), Kelvin (K)"<<endl;
    cout<<"Masukan suhu dalam satuan Celcius (C) : ";
    cin>>celcius;
    cout<<"Pilih akan dikonversi kedalam satuan apa [Pilihan: 1,2,3]"<<endl;
    cout<<"1. Reamur \n2. Fahrenheit \n3. Kelvin"<<endl;
    cout<<"Masukan pilihan: ";
    cin>>pilihan;

    switch(pilihan){
        case 1:
            satuan = "Reamur";
            simbol = 'R';
            hasil = celcius * 0.8;
            break;
        case 2:
            satuan = "Fahrenheit";
            simbol = 'F';
            hasil = (celcius * 1.8) + 32;
            break;
        case 3:
            satuan = "Kelvin";
            simbol = 'K';
            hasil = celcius + 273;
            break;
        default:
            cout<<"Masukan pilihan yang benar!"<<endl;
            break;
    }

    cout<<"Hasil Konversi dari Celcius Ke "<<satuan<<" adalah "<<hasil<<" "<<simbol<<endl;

    return 0;
}
