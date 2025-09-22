// Membuat huruf dengan pola tangga

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char masukkan_karakter[100];
    scanf("%s", masukkan_karakter);

    for (int i = 0; masukkan_karakter[i] != '\0'; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", masukkan_karakter[j]);
        }
        printf("\n");
    }

    return 0;
}