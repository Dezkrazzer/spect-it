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
    int masukan_angka;
    scanf("%d", &masukan_angka);

    int arr[masukan_angka];
    for(int iterasi = 0; iterasi < masukan_angka; iterasi++){
        scanf("%d", &arr[iterasi]);
    }

    int hasil = 0;
    for(int iterasi = 0; iterasi < masukan_angka; iterasi++){
        int hitung = 0;
        for(int pembanding = 0; pembanding < masukan_angka; pembanding++){
            if(arr[iterasi] == arr[pembanding]){
                hitung++;
            }
        }
        if(hitung == 1){
            hasil += arr[iterasi];
        }
    }

    printf("%d\n", hasil);
    return 0;
}