#include<iostream>

using namespace std;

void cek(int deret){
    int hasil[100];

    for(int i = 0; i < deret; i++){
        hasil[i] = 3 *  i + 1;
    }

    for(int i = 0; i < deret; i++){
        for(int j = i; j < deret; j++){
            if(hasil[i] < hasil[j]){
                int tmp = hasil[i];
                hasil[i] = hasil[j];
                hasil[j] = tmp;
            }
        }
    }

    for(int i = 0; i < deret; i++){
        if(hasil[i] % 2 == 0){
            cout<<hasil[i]<<" ";
            cout<<hasil[i] * 0.5<<" ";
        }else{
            cout<<hasil[i]<<" ";
        }
    }
}

int main()
{
    int deret;

    cout<<"Masukkan jumlah deret = ";
    cin>>deret;

    cek(deret);

    return 0;
}
