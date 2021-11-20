#include<iostream>

using namespace std;

int main()
{
    int celcius;
    float hasil1, hasil2, hasil3;

    cout<<"Konversi Celcius (C) ke Kelvin (K), Reamur (R) , Fahrenheit (F)"<<endl;
    cout<<"Masukan suhu dalam satuan Celcius (C) : ";
    cin>>celcius;

    hasil1 = celcius + 273;
    hasil2 = celcius * 0.8;
    hasil3 = (celcius * 1.8) + 32;

    cout<<"Hasil Kelvin = "<<hasil1<<" K"<<endl;
    cout<<"Hasil Reamur = "<<hasil2<<" R"<<endl;
    cout<<"Hasil Fahrenheit = "<<hasil3<<" F"<<endl;

    return 0;
}
