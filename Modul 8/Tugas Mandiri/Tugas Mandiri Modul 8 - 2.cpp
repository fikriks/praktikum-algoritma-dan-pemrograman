#include<iostream>

using namespace std;

int fibonacci(int angka) {
    int hasil;

    if (angka == 0 || angka == 1){
        return angka;
      } else {
        hasil = fibonacci(angka-1) + fibonacci(angka-2);

        return hasil;
      }
}

int main(){
    cout<<"Bulan ke\t\t\t: ";

    for(int i=1; i<=4; i++){
        cout<<i<<"\t";
    }

    cout<<endl;
    cout<<"Jumlah Pasangan Bayi Kelinci\t: ";

    for (int i=1; i<=4; i++){
        cout<<fibonacci(i)<<"\t";
    }

    return 0;
}
