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
    int panjang_array, nilai_init;
    scanf("%d %d", &panjang_array, &nilai_init);

    int nilai_array[panjang_array];
    for(int iterasi = 0; iterasi < panjang_array; iterasi++){
        scanf("%d", &nilai_array[iterasi]);
    }

    int nilai_akumulatif = nilai_init;
    int proses_penjumlahan = (nilai_init < 0) ? 1 : 0;

    for(int iterasi = 0; iterasi < panjang_array; iterasi++){
        if(proses_penjumlahan){
            nilai_akumulatif += nilai_array[iterasi];
            proses_penjumlahan = 0;
        } else {
            nilai_akumulatif -= nilai_array[iterasi];
            proses_penjumlahan = 1;
        }
    }

    printf("%d\n", nilai_akumulatif);

    return 0;
}