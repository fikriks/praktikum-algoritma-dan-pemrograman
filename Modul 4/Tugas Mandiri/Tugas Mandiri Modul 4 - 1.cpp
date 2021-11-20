#include<iostream>

using namespace std;

int main()
{
    string rasa;

    cout<<"Apa yang anda rasakan? = ";
    cin>>rasa;

    if(rasa == "Lapar"){
        cout<<"Makan"<<endl;
    }else if(rasa == "Haus"){
        cout<<"Minum"<<endl;
    }else if(rasa == "Ngantuk"){
        cout<<"Tidur"<<endl;
    }else{
        cout<<"Tidak kenapa-kenapa"<<endl;
    }

    return 0;
}
