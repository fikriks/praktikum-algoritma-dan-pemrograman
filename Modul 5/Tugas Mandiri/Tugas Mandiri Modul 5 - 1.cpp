#include <iostream>

using namespace std;

int main ()
{
    int i,j, jumlah_kolom = 8;

    for(i = 1; i <= jumlah_kolom; i++){
        for(j = 1; j <= (jumlah_kolom - i); j++)
            cout<<" ";
        for(j = 1; j <= i; j++)
            cout<<"@";
            cout<<" \n";
    }

    return 0;
}
