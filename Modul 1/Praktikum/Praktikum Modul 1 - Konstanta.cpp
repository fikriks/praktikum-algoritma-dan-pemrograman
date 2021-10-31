#include<iostream>
#include<stdio.h>
using namespace std;
#define var_6 550.987654321234
int main()
{
//mendirikan variabel beserta nilainya
int var_1 = 123456789;
const float var_2 = 550.987654321234;
char var_3 = 'R';
long var_4 = 123456789;
double var_5 = 550.987654321234;
//melakukan pemanggilan variabel beserta nilainya
cout<<var_1<<endl;
cout<<var_2<<endl;
cout<<"apakah karakter yang ditampilkan adalah C++/:"<<var_3<<endl;
cout<<endl;
cout<<var_4<<endl;
cout<<var_5<<endl;
printf("%f",var_5);
cout<<var_6<<endl;
printf("%le",var_6);
return 0;
}
