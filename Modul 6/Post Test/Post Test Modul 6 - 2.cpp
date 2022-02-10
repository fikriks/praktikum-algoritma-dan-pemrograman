#include<iostream>

using namespace std;

int main()
{
    int data[5];
    int i, j;
    int jumlah_data = 5;

    for(i = 0; i <= 4; i++){
        cout<<"Masukkan Data Ke - "<<i + 1<<": ";
        cin>>data[i];
    }

    cout<<"Data sebelum diurutkan : ";
    for(i = 0; i < jumlah_data; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    for(i = 0; i < jumlah_data - 1; i++){
        for(j = i; j < jumlah_data; j++){
                if(data[i] < data[j]){
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    cout<<"Data setelah diurutkan : ";
    for(i = 0;i < jumlah_data; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    return 0;
}
