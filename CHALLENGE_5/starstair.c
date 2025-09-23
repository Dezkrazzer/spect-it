// Program to print star stair pattern

/*
    SOAL:
    Diberikan sebuah Singel Integer positif, N. berikan sebuah pola segitiga siku-siku dengan tinggi dan alas sepanjang N.
    baris pertama berisi 1 karakter bintang
    baris kedua berisi 2 karakter bintang
    ...
    baris ke-N berisi N karakter bintang

    Input Format:
    N (integer positif)

    Constraints:
    1 <= N <= 1000

    Output Format:
    pola bintang(*), tanpa spasi di antaranya

    Sample Input 0:
    3

    Sample Output 0:
    *
    **
    ***

    Sample Input 1:
    5

    Sample Output 1:
    *
    **
    ***
    ****
    *****
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int masukan_angka; // Inisialisasi variabel untuk menampung input angka
    scanf("%d", &masukan_angka); // User diminta untuk memasukkan angka

    for(int baris = 1; baris <= masukan_angka; baris++){ // Jika baris kurang dari atau sama dengan masukan_angka, maka fungsi looping akan dijalankan
        // Ini berfungsi untuk menampilkan karakter bintang dengan pola segitiga siku-siku
        for(int kolom = 1; kolom <= baris; kolom++){ // Jika kolom kurang dari atau sama dengan baris, maka fungsi looping akan dijalankan
            printf("*"); // Ini berfungsi untuk menampilkan karakter bintang
        }
        printf("\n"); // Ini berfungsi untuk membuat baris baru
    }

    /*
        Keterangan: pada baris pertama, kolom akan bernilai 1 (1 <= 1) sehingga akan menampilkan 1 bintang
        pada baris kedua, kolom akan bernilai 1 dan 2 (1 <= 2, 2 <= 2) sehingga akan menampilkan 2 bintang
        pada baris ketiga, kolom akan bernilai 1, 2, dan 3 (1 <= 3, 2 <= 3, 3 <= 3) sehingga akan menampilkan 3 bintang
        dan seterusnya hingga baris ke-N
    */
   
    return 0;
}