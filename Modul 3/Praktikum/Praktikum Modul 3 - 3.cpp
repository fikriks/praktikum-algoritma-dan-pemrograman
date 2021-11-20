#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int k,l,m,n,o,p,q,r;

    //clrscr();
    printf(" Masukkan Nilai Ke-1 = ");
    scanf("%d",&k);
    printf(" Masukkan Nilai Ke-2 = ");
    scanf("%d",&l);
    printf(" Masukkan Nilai Ke-3 = ");
    scanf("%d",&m);

    //proses
    o = (k + l)*m <100;
    p = k * l * m >100;
    q = o + p < 500;
    r = o && p && q;

    //tampilkan
    getch();
    cout<<" Program Operasi Logika AND \n"<<endl;
    getch();
    printf(" Hasil dari Nilai Ke -4 = (Nilai Ke-1 + Nilai Ke-2)X Nilai Ke-3 < 100 adalah = %d\n",o);
    getch();
    cout<<" Hasil dari Nilai Ke -5 = Nilai Ke-1 + Nilai Ke-2 + Nilai Ke-3 > 100 adalah = "<<p<<endl;
    getch();
    printf(" Hasil dari Nilai Ke -6 = Nilai Ke-4 + Nilai Ke-5 < 500 adalah %d",q);
    getch();
    cout<<" \nMaka Logika AND = Nilai ke -4 && Nilai ke -5 && Nilai ke -6 adalah = "<<r;
    cout<<endl;
    getch();

    return 0;
}
