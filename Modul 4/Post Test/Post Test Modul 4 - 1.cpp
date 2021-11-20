#include<iostream>

using namespace std;

int main()
{
    int suhu;

    cout<<"Masukan suhu tubuh anda = ";
    cin>>suhu;

    if(suhu <=33){
        cout<<"Masih dinyatakan hidup"<<endl;
    }else if(suhu == 34){
        cout<<"Terlalu dingin"<<endl;
    }else if(suhu == 35){
        cout<<"Dingin"<<endl;
    }else if(suhu == 36){
        cout<<"Masih OK"<<endl;
    }else if(suhu == 37){
        cout<<"Keadaan FIT"<<endl;
    }else if(suhu == 38){
        cout<<"Demam Ringan"<<endl;
    }else if(suhu == 39){
        cout<<"Hampir Step"<<endl;
    }else if(suhu > 39){
        cout<<"Segera Panggil Ambulan"<<endl;
    }

    return 0;
}
