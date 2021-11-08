/*
Author    : Fikri Khairul Shaleh
Tanggal   : 30 Oktober 2021
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int kecepatan_berkabut = 40;
    int kecepatan_cerah = 65;
    int jarak_perjalanan = 240;
    float pembilang = 2;
    float penyebut = 7;
    float hasil1, hasil2, hasil3, hasil4, hasil_akhir;

    hasil1 = pembilang / penyebut * jarak_perjalanan;
    hasil2 = jarak_perjalanan - hasil1;
    hasil3 = hasil1 / kecepatan_berkabut;
    hasil4 = hasil2 / kecepatan_cerah;
    hasil_akhir = hasil3 + hasil4;

    cout<<"Waktu Tempuh Saat Cuaca Berkabut = "<<setprecision(4)<<hasil3<<endl;
    cout<<"Waktu Tempuh Saat Cuaca Cerah = "<<setprecision(4)<<hasil4<<endl;

    cout<<"Hasil Akhir Waktu Tempuh Keduanya Adalah = "<<setprecision(1)<<hasil_akhir<<" Jam ";
    cout<<setprecision(2)<<to_string(hasil_akhir).substr(2,2)<<" Menit"<<endl;
}
