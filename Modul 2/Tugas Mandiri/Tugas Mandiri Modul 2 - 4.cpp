/*
Deskripsi : Program Tugas Mandiri Ke-3 Modul 2
Author    : Fikri Khairul Shaleh
Tanggal   : 05 November 2021
*/
#include<iostream>

using namespace std;

int main()
{
    float a, b, hasil1, hasil2, hasil3, hasil4, hasil5;

    cout<<"Ketik dua bilangan bulat : ";
    cin>>a;
    cin>>b;

    hasil1 = a + b;
    hasil2 = a - b;
    hasil3 = a * b;
    hasil4 = a / b;
    hasil5 = int(a) % int(b);

    cout<<"Formulasi kedua bilangan adalah :"<<endl;
    cout<<a<<" + "<<b<<" = "<<hasil1<<endl;
    cout<<a<<" - "<<b<<" = "<<hasil2<<endl;
    cout<<a<<" * "<<b<<" = "<<hasil3<<endl;
    cout<<a<<" / "<<b<<" = "<<hasil4<<endl;
    cout<<a<<" % "<<b<<" = "<<hasil5<<endl;

    return 0;
}
