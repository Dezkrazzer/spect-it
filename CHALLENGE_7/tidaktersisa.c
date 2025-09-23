// Program Tidak Tersisa

/*
    SOAL:
    Budi mempunyai total uang N, berapa minimal jumlah mata uang yang dipegang Budi sekarang dengan mata uang yang
    tersedia: [1, 5, 25, 50, 100, 200, 500, 1000, 2000, 5000, 10000]

    Input Format:
    N integer positif

    Constraints:
    1000 <= N <= 100000

    Output Format:
    Jumlah mata uang (bukan hasil kumulatif)

    Sample Input 0:
    6700

    Sample Output 0:
    4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int total_uang; // Inisialisasi variabel untuk menampung total uang
    scanf("%d", &total_uang); // User diminta untuk memasukkan total uang

    int mata_uang[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 5, 1}; // Inisialisasi array untuk menampung mata uang yang tersedia
    int jumlah_mata_uang = 0; // Inisialisasi variabel untuk menampung jumlah mata uang

    for(int iterasi = 0; iterasi < sizeof(mata_uang)/sizeof(mata_uang[0]); iterasi++){ // Jika iterasi kurang dari jumlah mata uang yang tersedia, maka fungsi looping akan dijalankan
        while(total_uang >= mata_uang[iterasi]){ // Jika total_uang lebih besar dari atau sama dengan mata_uang di index iterasi, maka fungsi looping akan dijalankan
            total_uang -= mata_uang[iterasi]; // Maka total_uang akan dikurangi dengan mata_uang di index iterasi
            jumlah_mata_uang++; // Maka jumlah_mata_uang akan bertambah 1
        } // Keterangan: while digunakan karena satu mata uang bisa digunakan lebih dari satu kali
    }

    /*
        Keterangan: sizeof(mata_uang)/sizeof(mata_uang[0]) digunakan untuk menghitung jumlah elemen dalam array mata_uang
        Keterangan: sizeof(mata_uang) adalah ukuran total array dalam byte
        Keterangan: sizeof(mata_uang[0]) adalah ukuran satu elemen array dalam byte
        Keterangan: dengan membagi kedua ukuran tersebut, kita mendapatkan jumlah elemen dalam array
    */

    printf("%d\n", jumlah_mata_uang); // Ini berfungsi untuk menampilkan jumlah mata uang
    return 0;
}