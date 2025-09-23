// Program to manage book borrowing in a library

/*
    SOAL:
    suatu hari, seseorang meminjam buku.
    Diberikan hari ke-(N) orang tersebut mengembalikan buku => N (integer positive)
    Diberikan hari ke-(M) orang tersebut harus mengembalikan buku => M (integer positive)
    Diberikan sanksi denda Rp.(D) per hari, jika orang tersebut melewati batas hari pengembalian => D (integer positive)
    jika orang tersebut mengembalikan buku sebelum/tepat waktu batas hari pengembalian, maka orang tersebut tidak diberikan denda.
    jika orang tersebut mengembalikan buku melewati batas hari pengembalian, maka orang tersebut akan diberikan denda

    Input Format:
    N M D

    Constraints:
    1000 <= D <= 100000
    7 <= M <= 10000
    1 <= N <= M*2

    Output Format:
    apakah tepat waktu ? "TEPAT WAKTU" : Total kumulatif Denda

    Sample Input 0:
    10 20 4000

    Sample Output 0:
    TEPAT WAKTU

    Sample Input 1:
    35 32 5000

    Sample Output 1:
    15000
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int hari_kembali, hari_batas, denda_per_hari; // Inisialisasi variabel untuk menampung hari kembali, hari batas, dan denda per hari
    scanf("%d %d %d", &hari_kembali, &hari_batas, &denda_per_hari); // User diminta untuk memasukkan hari kembali, hari batas, dan denda per hari

    if(hari_kembali <= hari_batas){ // Jika hari_kembali kurang dari atau sama dengan hari_batas (artinya tepat waktu)
        printf("TEPAT WAKTU\n"); // Maka tampilkan "TEPAT WAKTU"
    } else { // Jika hari_kembali lebih besar dari hari_batas (artinya terlambat)
        int total_denda_yang_diberikan = (hari_kembali - hari_batas) * denda_per_hari; // Maka hitung total denda yang diberikan
        printf("%d\n", total_denda_yang_diberikan); // Print total denda yang harus dibayarkan
    }

    /*
        total_denda_yang_diberikan = (hari_kembali - hari_batas) * denda_per_hari
        Keterangan: (hari_kembali - hari_batas) adalah jumlah hari keterlambatan
        Keterangan: denda_per_hari adalah denda yang diberikan per hari keterlambatan
        Keterangan: total_denda_yang_diberikan adalah total denda yang harus dibayarkan
    */

    return 0;
}