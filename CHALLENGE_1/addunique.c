// TUGAS MENAMBAH KEUNIKAN

// Diberikan Sebuah "Array" bilangan bulat positive dengan size "n"
// print jumlah akumulatif dari element-element yang muncul tepat sekali yang ada di dalam array. (unique)
// Misal diberikan sebuah array: [4, 3, 2, 2, 4, 7]
// jumlah(sum): 10 (3 + 7) => 3 dan 7 hanya muncul sekali

/*
    Input Format:
    n
    a1 a2 a3 ... an
*/
/*
    Constraints
    1 <= n <= 10
    1 <= ai <= 10
*/
// Output format: single integer (jumlah integer unik)
/*
    Sample Input 0:
    2
    3 7
    Sample Output 0:
    10
*/
/* 
    Sample Input 1:
    7
    8 2 9 4 9 6 1
    Sample Output 1:
    21
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int masukan_angka; // Ini inisialisasi variabel untuk menampung input angka
    scanf("%d", &masukan_angka); // User diminta untuk memasukkan angka

    int arr[masukan_angka]; // Ini berfungsi untuk menampung array masukan_angka
    for(int iterasi = 0; iterasi < masukan_angka; iterasi++){ // Ini berfungsi untuk mengisi array ke semua index
        scanf("%d", &arr[iterasi]); // User diminta untuk memasukkan angka ke dalam array
    }

    int hasil = 0; // Ini inisialisasi variabel untuk menampung hasil penjumlahan angka unik
    for(int iterasi = 0; iterasi < masukan_angka; iterasi++){ // Ini adalah looping untuk mengecek setiap angka di dalam array
        int hitung = 0; // Ini inisialisasi variabel untuk menampung jumlah kemunculan angka
        for(int pembanding = 0; pembanding < masukan_angka; pembanding++){ // Ini adalah looping untuk membandingkan angka di dalam array
            if(arr[iterasi] == arr[pembanding]){ // Ketika angka di index iterasi sama dengan angka di index pembanding
                hitung++; // Maka variabel hitung akan bertambah 1
            }
        }
        if(hitung == 1){ // Ketika variabel hitung bernilai 1 (artinya angka tersebut hanya muncul sekali)
            hasil += arr[iterasi]; // Maka variabel hasil akan ditambah dengan angka di index iterasi
        }
    }

    printf("%d\n", hasil); // Ini berfungsi untuk menampilkan hasil penjumlahan angka unik
    return 0;
}