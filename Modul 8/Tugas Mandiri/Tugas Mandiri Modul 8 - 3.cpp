#include<iostream>

using namespace std;

void cek(int angka1, int angka2, float angka3, float angka4){
    if(angka1 == angka2){
        cout<<"Kedua integer bernilai sama";
    }else{
        cout<<"Kedua integer bernilai berbeda";
    }

    cout<<" dan ";

    if(angka3 == angka4){
        cout<<"Kedua float bernilai sama";
    }else{
        cout<<"Kedua float bernilai berbeda";
    }
}

int main()
{
    int angka1, angka2;
    float angka3, angka4;

    cout<<"Ketik dua integer = ";
    cin>>angka1>>angka2;

    cout<<"Ketik dua float = ";
    cin>>angka3>>angka4;

    cek(angka1, angka2, angka3, angka4);

    return 0;
}
