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
    int jumlah_elemen;
    scanf("%d", &jumlah_elemen);

    int array_elemen[jumlah_elemen];
    for(int index_array = 0; index_array < jumlah_elemen; index_array++){
        scanf("%d", &array_elemen[index_array]);
    }

    int jumlah_positif = 0;
    int jumlah_negatif = 0;

    for(int index_array = 0; index_array < jumlah_elemen; index_array++){
        if(array_elemen[index_array] >= 0){
            jumlah_positif++;
        } else {
            jumlah_negatif++;
        }
    }

    printf("%d %d\n", jumlah_positif, jumlah_negatif);

    return 0;
}