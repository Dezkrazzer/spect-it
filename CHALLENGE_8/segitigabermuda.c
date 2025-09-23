// Program Membuat Segitiga Bermuda

/*
    SOAL:
    Tugas anda adalah menulis program yang menghasilkan sebuah gambar segitiga sama kaki menggunakan simbol. Segitiga ini memiliki
    tinggi N yang telah ditentukan.
    Puncak Segitiga: Baris pertama adalah puncah, yang direpresentasikan oleh satu karakter ^.
    Sisi Segitiga: Baris dari 2 hingga N-1 membentuk sisi-sisi segitiga. Setiap baris diawali dengan /, diisi dengan
    karakter bintang *, dan diakhiri dengan \.
    Alas Segitiga: Baris terakhir, yaitu baris ke-N, adalah sebuah garis horizontal yang terbuat dari karakter - yang
    menjadi alas segitiga, baris di awali dengan simbol / dan diakhiri dengan simbol \addtogroup

    Input Format:
    Bilangan bulat positif, N

    Constraints:
    1 <= N <= 100

    Output Format:
    Cetak N baris teks yang membentuk segitiga

    Sample Input 0:
    7

    Sample Output 0:
          ^
         /*\
        /***\
       /*****\
      /*******\
     /*********\
    /-----------\

    Sample Input 1:
    1

    Sample Output 1:
    ^

    Sample Input 2:
    2

    Sample Output 2:
     ^
    /-\
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tinggi_segitiga;
    scanf("%d", &tinggi_segitiga);

    for(int baris = 1; baris <= tinggi_segitiga; baris++){

        for(int spasi = 1; spasi <= (tinggi_segitiga - baris); spasi++){
            printf(" ");
        }


        if(baris == 1){

            printf("^\n");
        } else if(baris == tinggi_segitiga){

            printf("/");
            for(int karakter = 1; karakter <= (2 * (baris - 1) - 1); karakter++){
                printf("-");
            }
            printf("\\\n");
        } else {

            printf("/");
            for(int karakter = 1; karakter <= (2 * (baris - 1) - 1); karakter++){
                printf("*");
            }
            printf("\\\n");
        }
    }

    return 0;
}