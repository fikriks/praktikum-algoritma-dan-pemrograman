#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<ctime>

using namespace std;

void menuUtama();
void dataBuku();
void menuPenjualan();
void menuLaporanPenjualan();
void header();
void garis();
string waktu();
void cariDataBuku();
int main();

string waktu()
{
    string tanggal, bulan, tahun;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    string tgl[3][1] = {
        {
            to_string(ltm->tm_mday)
        },
        {
            to_string(1 + ltm->tm_mon)
        },
        {
            to_string(1900 + ltm->tm_year)
        }
    };

    tanggal = to_string(ltm->tm_mday);
    bulan = to_string(1 + ltm->tm_mon);
    tahun = to_string(1900 + ltm->tm_year);

    return "Tanggal : " + tgl[0][0] +"-"+ tgl[1][0] +"-"+ tgl[2][0];
}

void header(string judul)
{
    for(int i = 0; i < 10; i++){
        cout<<"=";
    }

    cout<<judul;

    for(int i = 0; i < 10; i++){
        cout<<"=";
    }

    cout<<endl;
}

void garis()
{
    for(int i = 0; i < 40; i++){
        cout<<"=";
    }
        cout<<endl;
}

void login(string user, string pass)
{
    string username, password;
    ifstream Login("login.txt");

    getline(Login, username);
    getline(Login, password);

    system("CLS");
    if(username == user && password == pass){
        header("Login Berhasil");
        cout<<endl;
        system("PAUSE");
        menuUtama();
    }else{
        cout<<"Username atau Password Salah!"<<endl<<endl;
        system("PAUSE");
        system("CLS");
        main();
    }
}

void menuUtama()
{
    awal:
    int pilihan;

    system("CLS");
    header("MENU UTAMA");
    garis();
    cout<<"Selamat Datang"<<endl;
    cout<<waktu();
    cout<<endl;
    garis();
    cout<<"1.Data Buku"<<endl;
    cout<<"2.Penjualan"<<endl;
    cout<<"3.Laporan Penjualan"<<endl;
    cout<<"4.Log Out"<<endl;
    garis();
    cout<<"5.Keluar Aplikasi"<<endl<<endl;

    cout<<"Pilih : ";
    cin>>pilihan;

    switch(pilihan){
        case 1:
            system("CLS");
            dataBuku();
            break;
        case 2:
            system("CLS");
            menuPenjualan();
            break;
        case 3:
            system("CLS");
            menuLaporanPenjualan();
            break;
        case 4:
            system("CLS");
            main();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"Pilihan tidak tersedia"<<endl<<endl;
            system("PAUSE");
            goto awal;
    }
}

void menuPenjualan()
{
    awal:
    string no_buku[100], nama_buku[100], harga_buku[100];
    int i = 1, n = 1, total_harga = 0, total_pembayaran = 0, total_kembalian = 0;
    int pilih[100], qty[100];
    char yn, kembali;
    bool lanjut;

    ifstream Buku("buku.txt"), Trans("transaksi.txt");
    ofstream Trx;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    header("PENJUALAN");

    while(getline(Buku, no_buku[i])){
        getline(Buku, nama_buku[i]);
        getline(Buku, harga_buku[i]);

      cout<<"No Buku : "<<no_buku[i]<<endl;
      cout<<"Nama Buku : "<<nama_buku[i]<<endl;
      cout<<"Harga Buku : "<<harga_buku[i]<<endl;
      cout<<endl;
      i++;
    }

    garis();
    cout<<"0. Menu Utama"<<endl;
    garis();

    cout<<endl;

    lanjut = true;
    while(lanjut){
     cout<<"Pilih : ";
     cin>>pilih[n];

     if(pilih[n] == 0){
        lanjut = false;
        system("CLS");
        menuUtama();
     }else if(pilih[n] > (i - 1)){
        cout<<"Pilihan tidak ada"<<endl<<endl;
        system("PAUSE");
        system("CLS");
        goto awal;
     }

     cout<<"Jumlah : ";
     cin>>qty[n];

     cout<<"Berhasil menambahkan"<<endl;

     cout<<endl;

     cout<<"Beli Buku Lain? [y/n] : ";
     cin>>yn;

     switch(yn){
        case 'y':
            lanjut = true;
            break;
        case 'n':
            lanjut = false;
            break;
     }
     n++;
    }

    cout<<endl;
    system("CLS");
    garis();
    cout<<"\t\tTRANSAKSI"<<endl;
    for(int j = 1; j < n; j++){
        cout<<"Nama Buku\t : "<<nama_buku[pilih[j]]<<endl;
        cout<<"Jumlah Buku\t : "<<qty[j]<<endl;
        cout<<"Harga Buku\t : Rp."<<harga_buku[pilih[j]]<<endl;
        cout<<endl;

        total_harga += stoi(harga_buku[pilih[j]]) * qty[j];

        Trx.open("transaksi.txt", ios_base::app);
        Trans.seekg(0, ios_base::end);
        if(Trans.tellg() > 1){
            Trx<<"\n";
        }
        Trx<<ltm->tm_mday<<"-"<<1 + ltm->tm_mon<<"-"<<1900 + ltm->tm_year<<"\n";
        Trx<<no_buku[pilih[j]]<<"\n";
        Trx<<nama_buku[pilih[j]]<<"\n";
        Trx<<qty[j]<<"\n";
        Trx<<harga_buku[pilih[j]];
        Trx.close();
    }

    garis();
    cout<<"Total Harga\t : Rp."<<total_harga<<endl;
    garis();

    bayar:
    cout<<"Total Pembayaran : Rp.";
    cin>>total_pembayaran;

    total_kembalian = total_pembayaran - total_harga;

    if(total_kembalian < 0){
        cout<<"Uang yang dibayar, kurang"<<endl;
        goto bayar;
    }

    cout<<"Total Kembalian\t : Rp."<<total_kembalian<<endl;
    garis();

    system("PAUSE");
    system("CLS");
    goto awal;
}

void menuLaporanPenjualan()
{
    awal:
    system("CLS");
    string tgl[100], no_buku[100], nama_buku[100], harga_buku[100], terjual[100];
    int i = 1, total_harga = 0, total_pendapatan = 0, pilih;

    ifstream Trx("transaksi.txt");

    header("LAPORAN PENJUALAN");

    while(getline(Trx, tgl[i])){
        getline(Trx, no_buku[i]);
        getline(Trx, nama_buku[i]);
        getline(Trx, harga_buku[i]);
        getline(Trx, terjual[i]);

       total_harga = stoi(harga_buku[i]) * stoi(terjual[i]);

       total_pendapatan += total_harga;

       if(tgl[i] != tgl[i-1]){
            garis();
            cout<<"\tTRANSAKSI TANGGAL "<<tgl[i]<<endl;
            garis();
        };
      cout<<"Tanggal : "<<tgl[i]<<endl;

      cout<<"No Buku : "<<no_buku[i]<<endl;
      cout<<"Nama Buku : "<<nama_buku[i]<<endl;
      cout<<"Terjual : "<<terjual[i]<<endl;
      cout<<"Total Harga : "<<total_harga<<endl;

      cout<<endl;
    i++;
    }

    garis();
    cout<<"TOTAL PENDAPATAN "<<total_pendapatan<<endl;
    garis();

    cout<<endl;
    garis();

    cout<<"0. Menu Utama"<<endl;

    garis();
    cout<<endl;

    cout<<"Pilih : ";
    cin>>pilih;

    switch(pilih){
    case 0:
        system("PAUSE");
        system("CLS");
        menuUtama();
    default:
        cout<<"Pilihan tidak ada"<<endl<<endl;
        system("PAUSE");
        system("CLS");
        goto awal;
    }
}

void dataBuku()
{
    awal:
    system("CLS");

    header("DATA BUKU");

    string no_buku[100], nama_buku[100], harga_buku[100];
    int i = 1, pilih;

    ifstream Buku("buku.txt");

    while(getline(Buku, no_buku[i])){

        getline(Buku, nama_buku[i]);
        getline(Buku, harga_buku[i]);

      cout<<"No Buku : "<<no_buku[i]<<endl;
      cout<<"Nama Buku : "<<nama_buku[i]<<endl;
      cout<<"Harga Buku : "<<harga_buku[i]<<endl;
      cout<<endl;
      i++;
    }

    cout<<endl;
    garis();

    cout<<"1. Cari Data"<<endl;
    cout<<"0. Menu Utama"<<endl;

    garis();
    cout<<endl;

    cout<<"Pilih : ";
    cin>>pilih;

    switch(pilih){
    case 0:
        system("PAUSE");
        system("CLS");
        menuUtama();
    case 1:
        system("CLS");
        cariDataBuku();
    default:
        cout<<"Pilihan tidak ada"<<endl<<endl;
        system("PAUSE");
        system("CLS");
        goto awal;
    }
}

void cariDataBuku()
{
    awal:
    system("CLS");

    header("CARI DATA BUKU");

    string no_buku[100], nama_buku[100], harga_buku[100], no_bk;
    int i = 1, pilih;
    bool ketemu;

    ifstream Buku("buku.txt");

    cout<<"Masukkan No.Buku : ";
    cin>>no_bk;

    cout<<endl;

    while(getline(Buku, no_buku[i])){
        if(no_buku[i] == no_bk){
            ketemu = true;
            getline(Buku, nama_buku[i]);
            getline(Buku, harga_buku[i]);

            cout<<"No Buku : "<<no_buku[i]<<endl;
            cout<<"Nama Buku : "<<nama_buku[i]<<endl;
            cout<<"Harga Buku : "<<harga_buku[i]<<endl;
            cout<<endl;
            break;
        }else{
            ketemu = false;
        }
      i++;
    }

    if(ketemu == false){
        cout<<"Data Buku Yang Anda Cari Tidak Ada";
    }

    cout<<endl;
    garis();

    cout<<"1. Cari Lagi"<<endl;
    cout<<"0. Data Buku"<<endl;

    garis();
    cout<<endl;

    cout<<"Pilih : ";
    cin>>pilih;

    switch(pilih){
    case 0:
        system("PAUSE");
        system("CLS");
        dataBuku();
    case 1:
        system("CLS");
        cariDataBuku();
    default:
        cout<<"Pilihan tidak ada"<<endl<<endl;
        system("PAUSE");
        system("CLS");
        goto awal;
    }
}

int main()
{
    string user, pass;
    char ch;

    header("LOGIN");

    cout<<"Username : ";
    cin>>user;

    cout<<"Password : ";
    ch = getch();
    while(ch != 13){
      pass.push_back(ch);
      cout<<'*';
      ch = getch();
    }

    login(user, pass);
}
