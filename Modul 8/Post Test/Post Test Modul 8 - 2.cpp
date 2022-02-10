#include<iostream>

using namespace std;

int hitung;

void cekDeret(int angka)
{
    int i;

    hitung = 0;
    for(i = 1; i <= angka; i++){
        hitung += i;
        if(i != angka){
            cout<<i<<" + ";
        }else{
            cout<<i;
        }
    }
}

int main()
{
    int a;

    cout<<"Masukkan angka : ";
    cin>>a;

    cout<<"Hasil : ";
    cekDeret(a);
    cout<<endl;
    cout<<"Hasilnya adalah : "<<hitung;
}
