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

int main() {

    int angka, hasil;

    cout<<"Masukkan Berapa Deret Bilangan Fibonacci :  ";
    cin>>angka;

    cout<<"Deret Fibonacci: ";
    for (int i = 1; i <= angka; i++){
        hasil += fibonacci(i);
        cout <<fibonacci(i)<<" ";
    }

    cout<<endl;
    cout<<"Jumlahnya adalah : "<<hasil<<endl;

	return 0;
}
