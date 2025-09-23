// Find Positif dan Negatif

/*
    SOAL:
    Diberikan Sebuah array berisi integer. kembalikan jumlah integer positive dan jumlah integer negative pada array tersebut.
    NOTE: '0' TERMASUK POSITIVE

    Input Format:
    S -> single integer(jumlah element array)
    a1 a2 a3 ... aS (array)

    Constraints
    1 <= S <= 100
    -10000 <= a <= 10000

    Output Format:
    P N (P = single integer(jumlah element positive), N = single integer(jumlah element negative))

    Sample Input 0:
    5
    10 -23 -1 -53 2

    Sample Output 0:
    2 3

    Explanation 0:
    (2) => jumlah integer positive (3) => jumlah integer negative
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int jumlah_elemen; // Inisialisasi variabel untuk menampung jumlah elemen
    scanf("%d", &jumlah_elemen); // User diminta untuk memasukkan jumlah elemen

    int array_elemen[jumlah_elemen]; // Inisialisasi jumlah array untuk menampung elemen
    for(int index_array = 0; index_array < jumlah_elemen; index_array++){ // Jika index_array kurang dari jumlah_elemen, maka fungsi looping akan dijalankan
        scanf("%d", &array_elemen[index_array]); // User diminta untuk memasukkan elemen ke dalam array
    }

    int jumlah_positif = 0; // Inisialisasi variabel untuk menampung jumlah elemen positif
    int jumlah_negatif = 0; // Inisialisasi variabel untuk menampung jumlah elemen negatif

    for(int index_array = 0; index_array < jumlah_elemen; index_array++){ // Jika index_array kurang dari jumlah_elemen, maka fungsi looping akan dijalankan
        if(array_elemen[index_array] >= 0){ // Jika elemen di index_array lebih besar dari atau sama dengan 0 (artinya positif)
            jumlah_positif++; // Maka jumlah_positif akan bertambah 1
        } else { // Jika elemen di index_array kurang dari 0 (artinya negatif)
            jumlah_negatif++; // Maka jumlah_negatif akan bertambah 1
        }
    }

    // Keterangan: '0' termasuk positif karena 0 adalah bilangan netral yang tidak memiliki tanda, sehingga secara matematis 0 dianggap sebagai bilangan non-negatif.

    printf("%d %d\n", jumlah_positif, jumlah_negatif); // Ini berfungsi untuk menampilkan jumlah elemen positif dan negatif
    return 0;
}