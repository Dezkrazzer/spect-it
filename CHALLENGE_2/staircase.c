// Membuat huruf dengan pola tangga

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char masukkan_karakter[100]; // Inisialisasi variabel untuk menampung input karakter berjumlah maksimal 100 karakter
    scanf("%s", masukkan_karakter); // Ini berfungsi untuk meminta user memasukkan karakter

    for (int iterasi = 0; masukkan_karakter[iterasi] != '\0'; iterasi++) { // Jika karakter di index iterasi tidak sama dengan null, maka lakukan looping
        // Ini berfungsi untuk menampilkan karakter dengan pola tangga
        for (int index_karakter = 0; index_karakter <= iterasi; index_karakter++) { // Jika index_karakter kurang dari atau sama dengan iterasi, maka lakukan looping
            printf("%c", masukkan_karakter[index_karakter]); // Ini berfungsi untuk menampilkan karakter di index index_karakter
        }
        printf("\n"); // Ini berfungsi untuk membuat baris baru
    }

    return 0;
}