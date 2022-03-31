/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Nama File   : Nomor3.c
Deskripsi   : Menghitung besarnya penjumlahan sub array
*/

#include <stdio.h>

int main(){
    // Kamus Lokal
    int i, N, j, array[100];
    float sum;

    // Algoritma
    printf("Penjumlahan Sub-Array\n\n");
    printf("Masukkan banyaknya elemen (N): ");
    scanf("%d",&N);

    for(i=0; i<N; i++){
        printf("Masukkan nilai array: ");
        scanf("%d",&array[i]);
    }

    for(i=0; i<N; i++){
        for(j=0; j<i+1; j++){
            sum += array[i];
        }
    }

    printf("\nHasil: %0.1f",sum);
    return 0;
}
