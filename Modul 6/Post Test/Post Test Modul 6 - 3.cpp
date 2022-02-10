#include<iostream>

using namespace std;

int main()
{
    int i, j;
    int data[2][3], data2[3][3], hasil[2][3];

    cout<<"Pengisian Matriks A"<<endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout<<"Masukkan angka baris ke "<<i+1<<" kolom ke "<<j+1<<" :";
            cin>>data[i][j];
        }
    }

    cout<<endl;
    cout<<"Matriks A :"<<endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"Pengisian Matriks B"<<endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout<<"Masukkan angka baris ke "<<i+1<<" kolom ke "<<j+1<<" :";
            cin>>data2[i][j];
        }
    }

    cout<<endl;
    cout<<"Matriks B :"<<endl;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout<<data2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Perkalian Matriks A dan B :"<<endl;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            hasil[i][j] = data[i][0] * data2[0][j] + data[i][1] * data2[1][j] + data[i][2] * data2[2][j];
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
