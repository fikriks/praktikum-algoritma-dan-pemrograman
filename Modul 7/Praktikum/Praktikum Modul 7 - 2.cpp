#include<iostream>

using namespace std;

int main()
{
   int i, n, cari, posisi, ketemu = 0;
   int data[n];

   cout<<" Banyaknya data = ";
   cin>>n;

   // Input data
   for(i = 0; i < n; i++){
    cout<<" Masukkan data ke - "<<i + 1<<" : ";
    cin>>data[i];
   }

   cout<<" Data yang dicari = ";
   cin>>cari;

   ketemu = 0;
   i = 0;

   while((ketemu == 0) && (i < n)){
    if(data[i] == cari){
        ketemu = 1;
        posisi = i;
    }else {
        i = i + 1;
    }
   }

   if(ketemu == 0){
    cout<<" Data yang dicari tidak ditemukan "<<endl;
   } else {
    cout<<" Data yang dicari ditemukan "<<endl;
    cout<<" Data pada posisi "<<posisi+1<<endl;
   }

   return 0;
}
