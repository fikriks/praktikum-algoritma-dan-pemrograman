#include<iostream>
#include<conio.h>

using namespace std;

main()
{
    int k,l,m,n,o,p,q,r;
    cout<<" Masukkan Nilai Ke-1 = ";
    cin>>k;
    cout<<" Masukkan Nilai Ke-2 = ";
    cin>>l;
    cout<<" Masukkan Nilai Ke-3 = ";
    cin>>m;

    //proses
    o = (k + l)*m;
    p = k * l * m;
    q = o + p * m;
    r = o - p + q;

    //menampilkan
    cout<<"Hasil Operasi (k + l)*m: "<<o<<endl;
    cout<<"Hasil Operasi k * l *m: "<<p<<endl;
    cout<<"Hasil Operasi o + p *m: "<<q<<endl;
    cout<<"Hasil Operasi o - p +q: "<<r<<endl;
}
