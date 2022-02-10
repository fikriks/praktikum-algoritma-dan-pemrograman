#include<iostream>

using namespace std;

int main()
{
    int data[100], cari;
    int i, j = 0, n;

    cout<<"Masukkan banyaknya angka : ";
    cin>>n;

    cout<<endl;

    for(i = 0; i < n; i++){
        cout<<"Masukkan angka ke - "<<i + 1<<" : ";
        cin>>data[i];
    }

    cout<<endl;

    cout<<"Masukkan angka yang ingin dicari : ";
    cin>>cari;

    for(i = 0; i < n; i++){
        if(cari == data[i]){
            j = i;
        }
    }

    if(j == 0){
        cout<<"Data yang dicari tidak ditemukan";
    } else {
        cout<<"Data yang dicari ditemukan "<<endl;
        cout<<"Data ditemukan di baris : "<<j + 1;
    }

    return 0;
}
