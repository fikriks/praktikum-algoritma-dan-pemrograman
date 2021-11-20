#include<iostream>

using namespace std;

int main()
{
    const float meter = 0.3048;
    int feet;
    float hasil;

    cout<<"Konversi kaki (ft) ke meter(m)"<<endl;
    cout<<"Masukan satuan kaki (ft) : ";
    cin>>feet;

    hasil = feet * meter;

    cout<<"Hasil = "<<hasil<<" m"<<endl;

    return 0;
}
