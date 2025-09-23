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
    int tinggi_segitiga; // Inisialisasi variabel untuk menampung tinggi segitiga
    scanf("%d", &tinggi_segitiga); // User diminta untuk memasukkan tinggi segitiga

    for(int baris = 1; baris <= tinggi_segitiga; baris++){ // Jika baris kurang dari atau sama dengan tinggi_segitiga, maka fungsi looping akan dijalankan

        for(int spasi = 1; spasi <= (tinggi_segitiga - baris); spasi++){ // Jika spasi kurang dari atau sama dengan (tinggi_segitiga - baris), maka fungsi looping akan dijalankan
            printf(" "); // Ini berfungsi untuk menampilkan spasi
        }

        if(baris == 1){ // Jika baris sama dengan 1 (artinya puncak segitiga)

            printf("^\n"); // Maka tampilkan karakter ^ diikuti dengan baris baru
        } else if(baris == tinggi_segitiga){ // Jika baris sama dengan tinggi_segitiga (artinya alas segitiga)

            printf("/"); // Maka tampilkan karakter /
            for(int karakter = 1; karakter <= (2 * (baris - 1) - 1); karakter++){ // Jika karakter kurang dari atau sama dengan (2 * (baris - 1) - 1), maka fungsi looping akan dijalankan
                // Keterangan: (2 * (baris - 1) - 1) digunakan untuk menghitung jumlah karakter - yang harus ditampilkan pada alas segitiga
                printf("-"); // Ini berfungsi untuk menampilkan karakter -
            }
            printf("\\\n"); // Ini berfungsi untuk menampilkan karakter \ diikuti dengan baris baru
        } else { // Jika baris bukan puncak segitiga dan bukan alas segitiga (artinya sisi segitiga)
            printf("/"); // Maka tampilkan karakter /
            for(int karakter = 1; karakter <= (2 * (baris - 1) - 1); karakter++){ // Jika karakter kurang dari atau sama dengan (2 * (baris - 1) - 1), maka fungsi looping akan dijalankan
                printf("*"); // Ini berfungsi untuk menampilkan karakter *
            }
            printf("\\\n"); // Ini berfungsi untuk menampilkan karakter \ diikuti dengan baris baru
        }
    }

    /*
        Keterangan: (tinggi_segitiga - baris) digunakan untuk menghitung jumlah spasi yang harus ditampilkan sebelum karakter ^, /, atau \
        Keterangan: pada baris pertama, spasi akan bernilai (tinggi_segitiga - 1) sehingga akan menampilkan (tinggi_segitiga - 1) spasi
        Keterangan: pada baris kedua, spasi akan bernilai (tinggi_segitiga - 2) sehingga akan menampilkan (tinggi_segitiga - 2) spasi
        Keterangan: dan seterusnya hingga baris ke-N
    */

    return 0;
}