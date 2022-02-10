#include<iostream>

using namespace std;

void salin(string str)
{
    cout<<"Kata/Kalimat yang dimasukkan adalah : "<<str<<endl;
}

int main()
{
    string input;

    cout<<"Masukkan Kata/Kalimat : ";
    getline(cin, input);

    salin(input);

    return 0;
}
