#include<iostream>

using namespace std;

int main()
{
    int debit, hasil;

    cout<<"Menghitung jumlah pemakaian air PDAM beserta tarifnya"<<endl;
    cout<<"Masukan debit pemakaian air (m3) = ";
    cin>>debit;

    if(debit > 1 && debit <= 10){
        hasil = debit * 5000;
    }else if(debit >= 11 && debit <= 20){
        hasil = debit * 7500;
    }else if(debit >= 21 && debit <= 40){
        hasil = debit * 10000;
    }else if(debit >= 41){
        hasil = debit * 15000;
    }

    cout<<"Jadi, jumlah yang harus dibayar dengan pemakaian debit air "<<debit<<" m3 adalah Rp."<<hasil<<endl;

    return 0;
}
