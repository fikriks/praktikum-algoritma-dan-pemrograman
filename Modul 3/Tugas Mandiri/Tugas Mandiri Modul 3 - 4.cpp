#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int d, h, g, j, k, l, s;
    int hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    printf(" Masukkan Nilai Ke-1 = ");
    scanf("%d",&g);
    printf(" Masukkan Nilai Ke-2 = ");
    scanf("%d",&h);
    printf(" Masukkan Nilai Ke-3 = ");
    scanf("%d",&d);

    s = ++g * h < d > 100;
    j = --g + d * h < 100;
    k = ++s + --j * g > 200;
    l = s + j + k > 150;
    hasil1 = s && j && k && l;
    hasil2 = s || j || k || l;
    hasil3 = s ^ j ^ k ^ l;
    hasil4 = !hasil1;
    hasil5 = !hasil2;
    hasil6 = !hasil3;

    getch();
    cout<<" Program Operasi Logika AND, NOT, OR, XOR \n"<<endl;
    getch();
    printf(" Hasil dari Nilai Ke -4 = Increment Nilai Ke-1 X Nilai Ke-2 < Nilai Ke-3 > 100 adalah = %d\n",s);
    getch();
    cout<<" Hasil dari Nilai Ke -5 = Decrement Nilai Ke-1 + Nilai Ke-2 X Nilai Ke-3 < 100 adalah = "<<j<<endl;
    getch();
    printf(" Hasil dari Nilai Ke -6 = Increment Nilai Ke-4 + Decrement Nilai Ke-5 > 200 adalah %d\n",k);
    getch();
    printf(" Hasil dari Nilai Ke -7 = Nilai Ke-4 + Nilai Ke-5 + Nilai Ke-6 > 150 adalah %d\n",l);
    getch();
    cout<<" \n Maka Logika AND = Nilai ke -4 && Nilai ke -5 && Nilai ke -6 && Nilai ke -7 adalah = "<<hasil1<<endl;
    cout<<" Maka Logika OR = Nilai ke -4 || Nilai ke -5 || Nilai ke -6 || Nilai ke -7 adalah = "<<hasil2<<endl;
    cout<<" Maka Logika XOR = Nilai ke -4 ^ Nilai ke -5 ^ Nilai ke -6 ^ Nilai ke -7 adalah = "<<hasil3<<endl;
    cout<<" Maka Logika NOT AND = !AND adalah = "<<hasil4<<endl;
    cout<<" Maka Logika NOT OR = !OR adalah = "<<hasil5<<endl;
    cout<<" Maka Logika NOT XOR = !XOR adalah = "<<hasil6<<endl;
    getch();

    return 0;
}
