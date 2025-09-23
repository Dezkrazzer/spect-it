// Program PosNeg Sum

/*
    SOAL:
    Diberikan nilai "N", yaitu jumlah panjang(length) dari array. Diberikan nilai "Init", yaitu nilai pertama (initial value) yang
    berupa integer. Diberikan nilai "v". nilai element di dalam array. nilai "v" integer positf
    akumulatifkan nilai-nilai di dalam array + nilai Init Value dengan aturan yang berlaku
    aturan:
    proses akumulatif, dilakukan dengan selang-seling, jika nilai init adalah nilai positif, maka proses akumulatif berikutnya adalah
    penjumlahan. Jika nilai init adalah nilai negatif, maka proses akumulatif berikutnya adalah pengurangan. Proses ini ter-ulang
    sebanyak N kali
    contoh jika Init positif => Init - v1 + v2 - v3 ...
    contoh jika Init negatif => Init + v1 - v2 + v3 ...
    NOTE: nilai "Init" masuk ke dalam proses akumulatif

    Input Format:
    N Init
    v1 v2 v3 ... vN

    Constraints:
    1 <= N <= 1000
    -99999 <= Init <= 99999
    1 <= v <= 100000

    Output Format:
    nilai akumulatif

    Sample Input 0:
    3 -8
    1 2 3

    Sample Output 0:
    -6

    Explanation 0:
    -8 + 1 - 2 + 3 = -6
    ^
    init

    Sample Input 1:
    5 200
    8 2 10 3 4

    Sample Output 1:
    183

    Explanation 1:
    200 - 8 + 2 - 10 + 3 - 4 = 183
    ^
    init(+)
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int panjang_array, nilai_init; // Inisialisasi variabel untuk menampung panjang array dan nilai init
    scanf("%d %d", &panjang_array, &nilai_init); // User diminta untuk memasukkan panjang array dan nilai init

    int nilai_array[panjang_array]; // Inisialisasi array untuk menampung nilai-nilai
    for(int iterasi = 0; iterasi < panjang_array; iterasi++){ // Jika iterasi kurang dari panjang array, maka lakukan proses berikut
        scanf("%d", &nilai_array[iterasi]); // User diminta untuk memasukkan nilai-nilai ke dalam array
    }

    int nilai_akumulatif = nilai_init; // Inisialisasi variabel untuk menampung nilai akumulatif, diinisialisasi dengan nilai init
    int proses_penjumlahan = (nilai_init < 0) ? 1 : 0; // Inisialisasi variabel untuk menampung proses penjumlahan, 
    // jika nilai init negatif maka proses penjumlahan adalah 1 (true), jika tidak maka 0 (false)

    for(int iterasi = 0; iterasi < panjang_array; iterasi++){ // Jika iterasi kurang dari panjang array, maka lakukan proses looping berikut
        if(proses_penjumlahan){ // Jika proses penjumlahan adalah true, maka lakukan proses penjumlahan
            nilai_akumulatif += nilai_array[iterasi]; // Tambahkan nilai array ke nilai akumulatif
            proses_penjumlahan = 0; // Set proses penjumlahan menjadi false
        } else { // Jika proses penjumlahan adalah false, maka lakukan proses pengurangan
            nilai_akumulatif -= nilai_array[iterasi]; // Kurangkan nilai array dari nilai akumulatif
            proses_penjumlahan = 1; // Set proses penjumlahan menjadi true
        }
    }

    printf("%d\n", nilai_akumulatif);   // Print hasil nilai akumulatif

    /*
        Penjelasan:
        1. nilai_akumulatif diinisialisasi dengan nilai init
        2. proses_penjumlahan diinisialisasi dengan kondisi nilai init, jika negatif maka true (1), jika tidak maka false (0)
        3. Looping dilakukan sebanyak panjang array
        4. Jika proses_penjumlahan true, maka lakukan penjumlahan dan set proses_penjumlahan menjadi false
        5. Jika proses_penjumlahan false, maka lakukan pengurangan dan set proses_penjumlahan menjadi true
        6. Hasil akhir nilai_akumulatif adalah hasil dari proses akumulatif
    */

    return 0;
}