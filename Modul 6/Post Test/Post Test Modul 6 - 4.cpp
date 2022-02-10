#include<iostream>

using namespace std;

int main()
{
    int i, j, data[100];
    float rata_rata, hasil;

    cout<<"Masukkan banyaknya data : ";
    cin>>j;

    cout<<endl;

    for(i = 0; i < j; i++){
        cout<<"Masukkan data ke - "<<i+1<<" : ";
        cin>>data[i];
        hasil += data[i];
    }

    cout<<endl;

    rata_rata = hasil/j;

    cout<<"Jumlah data yang dimasukkan : "<<hasil<<endl;
    cout<<"Jumlah rata-rata data yang dimasukkan : "<<rata_rata<<endl;

    return 0;
}
