// Program ODD EVEN ODD EVEN

/* 
    SOAL:
    Diberi sebuah array berisi n bilangan bulat. Sebuah subarray disebut bergantian-paritas jika setiap pasangan elemen bersebelahan memiliki paritas berbeda (ganjil-genap atau genap-ganjil). Cari panjang maksimum subarray kontigu (berturut-turut) yang bergantian-paritas.
    Keluarkan satu bilangan tiap testcase: panjang maksimum subarray tersebut.

    Input Format:
    n
    a1 a2 a3 ... an

    Constraints
    5 <= n <= 100

    Output Format:
    single integer (panjang subarray kontigu terpanjang yang bergantian-paritas)

    Sample Input 0:
    6
    6 9 10 9 10 9

    Sample Output 0:
    6

    Explanation 0:
    seluruh elemen bergantian:
    6(even), 9(odd), 10(even), 9(odd), 10(even), 9(odd)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int jumlah_elemen; // Inisialisasi variabel untuk menampung jumlah elemen
    scanf("%d", &jumlah_elemen); // User diminta untuk memasukkan jumlah elemen

    int array_elemen[jumlah_elemen]; // Inisialisasi array untuk menampung elemen
    for(int index_array = 0; index_array < jumlah_elemen; index_array++){ // Jika index_array kurang dari jumlah_elemen, maka fungsi looping akan dijalankan
        scanf("%d", &array_elemen[index_array]); // User diminta untuk memasukkan elemen ke dalam array
    }

    int panjang_max = 1; // Inisitalisasi variabel untuk menampung panjang maksimum
    int panjang_now = 1; // Inisialisasi variabel untuk menampung panjang sekarang

    for(int index_array = 1; index_array < jumlah_elemen; index_array++){ // Jika index_array kurang dari jumlah_elemen, maka fungsi looping akan dijalankan
        if((array_elemen[index_array] % 2) != (array_elemen[index_array - 1] % 2)){ // Jika sisa bagi elemen di index_array dengan 2 tidak sama dengan sisa bagi elemen di index_array - 1 dengan 2 (artinya paritasnya berbeda)
            panjang_now++; // Maka panjang_now akan bertambah 1
            if(panjang_now > panjang_max){ // Jika panjang_now lebih besar dari panjang_max
                panjang_max = panjang_now; // Maka panjang_max akan diisi dengan panjang_now
            }
        } else { // Jika paritasnya sama
            panjang_now = 1; // Maka panjang_now akan direset menjadi 1
        }
    }

    // Keterangan: panjang_now direset menjadi 1 karena ketika paritasnya sama, maka subarray bergantian-paritas akan berakhir dan panjang_now akan dihitung ulang dari elemen berikutnya
    // Misal: 6 9 10 9 10 9 (panjang_now = 6) | 6 9 10 10 9 (panjang_now = 3, kemudian direset menjadi 1 karena paritasnya sama pada elemen ke-4 dan ke-5)
    // Jadi panjang_max tetap 6 karena itu adalah panjang maksimum subarray bergantian-paritas
    // Keterangan: paritas adalah sifat dari bilangan bulat yang menunjukkan apakah bilangan tersebut ganjil atau genap

    printf("%d\n", panjang_max); // Ini berfungsi untuk menampilkan panjang maksimum
    return 0;
}