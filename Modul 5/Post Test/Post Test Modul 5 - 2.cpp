#include <iostream>

using namespace std;

int main ()
{
    int i, j, jumlah_kolom = 8;

    for(i = 1; i <= jumlah_kolom; i++){
        for(j = 1; j <= jumlah_kolom; j++){
            cout<<"@ ";
        }
        cout<<"\n";
    }

    return 0;
}
