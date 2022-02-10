#include <iostream>

using namespace std;

int main ()
{
    int i, j, k, jumlah_kolom = 7;

    for(i = 1; i <= jumlah_kolom; i++){
        for(j = 1; j <= i; j++)
            cout<<" ";
        for(k = 0; k >= (i - jumlah_kolom); k--)
            cout<<"$ ";
            cout<<"\n";
    }

    return 0;
}
