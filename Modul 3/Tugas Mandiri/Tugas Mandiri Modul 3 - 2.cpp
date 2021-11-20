#include<iostream>

using namespace std;

int main()
{
    const float inci = 0.393701;
    int cm;
    float hasil;

    cout<<"Konveri centimeter (cm) ke inci (in)"<<endl;
    cout<<"Masukan satuan centimeter (cm) : ";
    cin>>cm;

    hasil = cm * inci;

    cout<<"Hasil = "<<hasil<<" inci"<<endl;

    return 0;
}
