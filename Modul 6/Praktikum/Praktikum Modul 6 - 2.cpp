#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int data[10]; // Array dengan 10 elemen bertipe integer
    int n;

    // entri 10 data
    for(n = 0; n <= 9; n++){
        cout<<"Masukan Data - "<< n << ": ";
        cin>>data[n];
    }

    // Tampilkan data setelah entri
    for(n = 0; n <= 9; n++){
        cout<<"\nData ke - "<<n<< ": "<<data[n];
    }

    return 0;
}
