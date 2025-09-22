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
    int jumlah_elemen;
    scanf("%d", &jumlah_elemen);

    int array_elemen[jumlah_elemen];
    for(int index_array = 0; index_array < jumlah_elemen; index_array++){
        scanf("%d", &array_elemen[index_array]);
    }

    int panjang_max = 1;
    int panjang_now = 1;

    for(int index_array = 1; index_array < jumlah_elemen; index_array++){
        if((array_elemen[index_array] % 2) != (array_elemen[index_array - 1] % 2)){
            panjang_now++;
            if(panjang_now > panjang_max){
                panjang_max = panjang_now;
            }
        } else {
            panjang_now = 1;
        }
    }

    printf("%d\n", panjang_max);

    return 0;
}