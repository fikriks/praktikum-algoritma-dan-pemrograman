#include<iostream>

using namespace std;

int main()
{
    char nopol;
    cout<<"Masukkan Huruf Depan Nopol Anda [Pilihan:A/B/D/E/Z] = ";
    cin>>nopol;
    switch(nopol){
        case 'A' :
            cout<<"Wilayah Banten"<<endl;
            break;
        case 'B' :
            cout<<"Wilayah Jakarta"<<endl;
            break;
        case 'D' :
            cout<<"Wilayah Bandung"<<endl;
            break;
        case 'E' :
            cout<<"Wilayah Cirebon"<<endl;
            break;
        case 'Z' :
            cout<<"Wilayah Sumedang"<<endl;
            break;
        default :
            cout<<"Wilayah DKI"<<endl;
            break;
    }

    return 0;
}
