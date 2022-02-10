#include<conio.h>
#include<iostream>
// Matrix 2x2
using namespace std;

int main()
{
    int i, j;
    int data[2][2] = {{1,2}, {2,1}};

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout<<data[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    getch();

    return 0;
}
