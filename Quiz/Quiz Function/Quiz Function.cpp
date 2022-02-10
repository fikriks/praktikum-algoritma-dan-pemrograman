#include<iostream>
#include<string>

using namespace std;

void cek(int awal, int akhir)
{
    int i;
    string konversi;

    for(i=1900; i<=2020; i++)
    {
        if (i%400 == 0 || i%4 == 0){
            konversi = to_string(i).substr(3,1);

            if(konversi == "0"){
                cout<<i<<endl;
            }
        }
    }
}

int main(){
    int n_awal = 1900, n_akhir = 2020;

    cout<<"Program Menampilkan Tahun Kabisat dari n_awal hingga n_akhir yang angka terakhirnya 0"<<endl;
    cout<<"Dari tahun "<<n_awal<<" hingga "<<n_akhir<<endl;
    cout<<endl;

    cek(n_awal, n_akhir);

    return 0;
}
