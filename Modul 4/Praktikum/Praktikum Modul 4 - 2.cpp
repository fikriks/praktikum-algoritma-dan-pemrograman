#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    float n4;

    cout<<"Program Menentukan Kelayakan Penerima BLT"<<endl;
    cout<<"Masukan Nilai Ekonomi [1..5] = ";
    cin>>n1;
    cout<<"Masukan Nilai Resiko [1..5] = ";
    cin>>n2;
    cout<<"Masukan Nilai Tanggungan [1..5] = ";
    cin>>n3;

    //proses
    n4 = (n1 + n2 + n3)/3;
    if(n4>2.75){
        cout<<"Nilai Rata-Rata = "<<n4<<" Hasil Dinyatakan LAYAK ";

        return 0;
    }else{
        cout<<"Nilai Rata-Rata = "<<n4<<" Hasil Dinyatakan TIDAK LAYAK ";
        return 0;
    }
}
