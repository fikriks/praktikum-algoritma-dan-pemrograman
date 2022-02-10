#include<iostream>

using namespace std;

int data1[50], data2[50], data3[100];
int angka1, angka2, i, j, total;

void dataSatu(int angka1)
{
    for(i = 0; i < angka1; i++){
        cout<<"Masukkan data ke-"<<i+1<<" : ";
        cin>>data1[i];

        data3[i] = data1[i];
    }
}

void dataDua(int angka2)
{
     for(i = 0; i < angka2; i++){
        cout<<"Masukkan data ke-"<<i+1<<" : ";
        cin>>data2[i];

        data3[j] = data2[i];
        j++;
    }
}

void ascending()
{
    for(i = 0; i < (total - 1); i++){
        for(j = i; j < total; j++){
            if(data3[i] > data3[j]){
                int tmp = data3[i];
                data3[i] = data3[j];
                data3[j] = tmp;
            }
        }
    }
}

void hasil()
{
    for(i = 0; i < total; i++){
        cout<<data3[i]<<" ";
    }
}

int main()
{
    cout<<"Masukkan banyaknya data pertama : ";
    cin>>angka1;

    dataSatu(angka1);

    cout<<endl;

    j = i;

    cout<<"Masukkan banyaknya data kedua : ";
    cin>>angka2;

    dataDua(angka2);

    total = angka1 + angka2;

    ascending();

    cout<<endl;

    cout<<"Hasilnya adalah (ascending) : ";
    hasil();

    cout<<endl;

    return 0;
}
