#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int a = 9;

void lokal();

int main()
{
    cout<<" Penggunaan Variabel Global "<<endl;
    cout<<" \nNilai a didalam fungsi main () = "<<a;

    lokal();

    cout<<" \nNilai a setelah pemanggilan fungsi lokal() = "<<a;
    cout<<" \nHal ini terlihat bahwa variabel a yang dideklarasikan diluar ";
    cout<<" \nFungsi main (), dapat digunakan dalam fungsi main dan fungsi lokal ";
}

void lokal()
{
    a = a + 90;
}
