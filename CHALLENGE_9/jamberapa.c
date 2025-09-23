// Program Jam Berapa Ini

/*
    SOAL:
    Diberikan (S) detik, tugas kamu adalah menghasilkan (print out) hasil format waktu yang benar
    Format -> Jam:Menit:Detik

    Input Format:
    Integer positif (S)

    Constraints:
    0 <= S <= 86400

    Output Format:
    Jam:Menit:Detik

    Sample Input 0:
    3661

    Sample Output 0:
    01:01:01

    Sample Input 1:
    59

    Sample Output 1:
    00:00:59
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int total_detik;
    scanf("%d", &total_detik);

    int jam = total_detik / 3600;
    int menit = (total_detik % 3600) / 60;
    int detik = total_detik % 60;

    printf("%02d:%02d:%02d\n", jam, menit, detik);

    return 0;
}