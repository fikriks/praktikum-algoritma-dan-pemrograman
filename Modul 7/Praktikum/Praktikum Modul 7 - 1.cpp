#include<iostream>

using namespace std;

int main()
{
    int data[] = {52, 19, 62, 87, 30, 32, 49, 80, 41, 20};
    int i, j;
    int jumData = sizeof(data) / sizeof(int);

    // Tampilkan data
    cout<<" Data sebelum diurutkan : "<<endl;
    for(i = 0; i < jumData; i++)
        cout<<data[i]<<" ";
    cout<<endl; // Pindah baris

    // Lakukan pengurutan data
    for(i = 0; i < jumData - 1; i++)
        for(j = i; j < jumData; j++)
    if(data[i] > data[j]){
        // Tukarkan
        int tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
    }

    // Tampilkan data
    cout<<" Data setelah dirutukan : "<<endl;
    for(i = 0; i < jumData; i++)
        cout<<data[i]<<" ";
    cout<<endl; // Pindah baris

    return 0;
}
