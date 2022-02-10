#include<iostream>

using namespace std;

int main()
{
    string kata_kunci;
    string data[3] = {"Laptop ada diatas meja", "Pulpen ada di tas", "Minum ada di kulkas"};
    int i;

    cout<<"Daftar kata kunci pencarian : Laptop, Pulpen dan Minum"<<endl;

    cout<<"Masukkan kata kunci pencarian : ";
    cin>>kata_kunci;

    for(i = 0; i < 3; i++){
        if(data[i].find(kata_kunci) != string::npos){
            cout<<data[i];
        }
    }

    return 0;
}
