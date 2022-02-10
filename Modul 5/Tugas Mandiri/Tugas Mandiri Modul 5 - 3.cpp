#include <iostream>

using namespace std;

int main ()
{
    int i, jumlah_siswa;
    float hasil, nilai, rata_rata;

    cout<<"Masukan Jumlah Siswa = ";
    cin>>jumlah_siswa;

    for(i = 1; i <= jumlah_siswa; i++){
        cout<<"Masukan Nilai Siswa Ke-"<<i<<" = ";
        cin>>nilai;

        hasil += nilai;
    }

    cout<<endl;
    cout<<"Total Nilai = "<<hasil<<endl;

    rata_rata = hasil / jumlah_siswa;
    cout<<"Jadi, Total Nilai Rata-Ratanya Adalah = "<<rata_rata;

    return 0;
}
