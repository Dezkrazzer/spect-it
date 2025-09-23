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
    int total_uang;
    scanf("%d", &total_uang);

    int mata_uang[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 5, 1};
    int jumlah_mata_uang = 0;

    for(int iterasi = 0; iterasi < sizeof(mata_uang)/sizeof(mata_uang[0]); iterasi++){
        while(total_uang >= mata_uang[iterasi]){
            total_uang -= mata_uang[iterasi];
            jumlah_mata_uang++;
        }
    }

    printf("%d\n", jumlah_mata_uang);

    return 0;
}