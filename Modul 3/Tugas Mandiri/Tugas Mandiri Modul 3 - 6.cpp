#include<iostream>

using namespace std;

int main()
{
    // k = kubus
    int sisi_k, hasil_keliling_k, hasil_luas_k;

    // b = balok
    int panjang_b, lebar_b, tinggi_b, hasil_keliling_b, hasil_luas_b;

    // t = tabung
    float pi = 22.0 / 7;
    float jari_jari_t, tinggi_t, hasil_keliling_t, hasil_luas_t;

    cout<<"Menghitung Keliling dan Luas Kubus, Balok dan Tabung"<<endl;
    cout<<"- Keliling dan Luas Kubus"<<endl;
    cout<<"Masukan Panjang Sisi Kubus = ";
    cin>>sisi_k;
    cout<<endl;

    cout<<"- Keliling dan Luas Balok"<<endl;
    cout<<"Masukan Panjang Balok = ";
    cin>>panjang_b;
    cout<<"Masukan Lebar Balok = ";
    cin>>lebar_b;
    cout<<"Masukan Tinggi Balok = ";
    cin>>tinggi_b;
    cout<<endl;

    cout<<"- Keliling Alas dan Luas Selimut Tabung"<<endl;
    cout<<"Masukan Jari-Jari Tabung = ";
    cin>>jari_jari_t;
    cout<<"Masukan Tinggi Tabung = ";
    cin>>tinggi_t;

    // Proses
    // Keliling dan Luas Kubus
    hasil_keliling_k = 12 * sisi_k;
    hasil_luas_k = 6 * sisi_k * sisi_k;

    // Keliling dan Luas Balok
    hasil_keliling_b = 4 * (panjang_b + lebar_b + tinggi_b);
    hasil_luas_b = 2 * (panjang_b * lebar_b + panjang_b * tinggi_b + lebar_b * tinggi_b);

    // Keliling Alas dan Luas Selimut Tabung
    hasil_keliling_t = 2 *  pi * jari_jari_t;
    hasil_luas_t = 2 * pi * jari_jari_t * tinggi_t;

    cout<<endl;

    cout<<"Keliling Kubus Adalah = "<<hasil_keliling_k<<endl;
    cout<<"Luas Kubus Adalah = "<<hasil_luas_k<<endl;
    cout<<endl;
    cout<<"Keliling Balok Adalah = "<<hasil_keliling_b<<endl;
    cout<<"Luas Balok Adalah = "<<hasil_luas_b<<endl;
    cout<<endl;
    cout<<"Keliling Alas Tabung Adalah = "<<hasil_keliling_t<<endl;
    cout<<"Luas Selimut Tabung Adalah = "<<hasil_luas_t<<endl;

    return 0;
}
