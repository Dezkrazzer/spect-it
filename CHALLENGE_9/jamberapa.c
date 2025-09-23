// Program Jam Berapa Ini

/*
    SOAL:
    Diberikan (S) detik, tugas kamu adalah menghasilkan (print out) hasil format waktu yang benar
    Format -> Jam:Menit:Detik

    Input Format:
    Integer positif (S)

    Constraints:
    0 <= S <= 86400

    Output Format:
    Jam:Menit:Detik

    Sample Input 0:
    3661

    Sample Output 0:
    01:01:01

    Sample Input 1:
    59

    Sample Output 1:
    00:00:59
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int total_detik; // Inisialisasi variabel untuk menampung total detik
    scanf("%d", &total_detik); // User diminta untuk memasukkan total detik

    int jam_format = total_detik / 3600; // Ini berfungsi untuk mengkonversi detik ke jam
    int menit_format = (total_detik % 3600) / 60; // Ini berfungsi untuk mengkonversi sisa detik ke menit
    int detik_format = total_detik % 60; // Ini berfungsi untuk mengkonversi sisa detik ke detik

    printf("%02d:%02d:%02d\n", jam_format, menit_format, detik_format); // Print hasil format waktu yang benar

    /*
        Penjelasan:
        1. total_detik / 3600 -> Menghitung jumlah jam dari total detik
        2. (total_detik % 3600) / 60 -> Menghitung jumlah menit dari sisa detik setelah dikurangi jam
        3. total_detik % 60 -> Menghitung sisa detik setelah dikurangi jam dan menit
        4. %02d -> Format untuk mencetak angka dengan lebar minimal 2 digit, menambahkan nol di depan jika perlu
    */
    return 0;
}