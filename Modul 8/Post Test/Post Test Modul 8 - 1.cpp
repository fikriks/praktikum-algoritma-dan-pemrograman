#include<iostream>

using namespace std;

char grade;

void cekNilai(int nilai)
{
    if(nilai <= 45){
        grade = 'E';
    }else if(nilai <= 56){
        grade = 'D';
    }else if(nilai <= 68){
        grade = 'C';
    }else if(nilai <= 80){
        grade = 'B';
    }else if(nilai >= 90){
        grade = 'A';
    }
}

int main()
{
    int nilai;

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    cekNilai(nilai);
    cout<<"Gradenya adalah : "<<grade;

    return 0;
}
