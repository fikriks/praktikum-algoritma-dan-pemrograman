#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
    int matriks[3][3];
    int baris,kolom;

    printf("* Masukkan Data *\n");

    for(baris = 0; baris < 3; baris++){
        for(kolom = 0; kolom < 3; kolom++){
            printf("Masukkan Angka : ");
            scanf("%d", &matriks[baris][kolom]);
        }
    }

    printf("Hasilnya adalah : \n");
    for(baris = 0; baris < 3; baris++){
        for(kolom = 0; kolom < 3; kolom++){
            printf("%d", matriks[baris][kolom]);
            printf(" ");
        }
        printf("\n");
    }

    getch();

    return 0;
}
