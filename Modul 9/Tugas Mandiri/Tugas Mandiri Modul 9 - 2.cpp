#include<iostream>

using namespace std;

int angka1;
float data[40], hasil;

float proses(int angka1)
{
    for(int i = 0; i < angka1; i++){
            cout<<"Masukkan data ke-"<<i+1<<" : ";
            cin>>data[i];

            hasil += data[i];
    }

    return hasil;
}

void tampil()
{
    for(int i = 0; i < angka1; i++){
        cout<<data[i];

        if(i < (angka1 - 1)){
            cout<<" + ";
        }
    }

    cout<<" = "<<hasil<<endl;
}

int main()
{
    cout<<"Masukkan banyaknya data (maksimal 40 data) : ";
    cin>>angka1;

    proses(angka1);

    cout<<"Hasilnya adalah : ";

    tampil();

    return 0;
}
