/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Nama File   : Nomor2.c
Deskripsi   : Menghitung selisih max dan min menggunakan array


#include <stdio.h>

int main(){
    // Kamus Lokal
    int max, min, array[100];
    int i, N;

    // Algoritma
    printf("Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya.");
    printf("\n\nMasukkan banyaknya jalur lintasan (N): ");
    scanf("%d",&N);

    for(i=0; i<N; i++){
        printf("Masukkan nilai data perjalanan: ");
        scanf("%d",&array[i]);
    }

    max = array[0];
    min = array[0];

    for(i=0; i<N; i++){
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    printf("\nSelisih ketinggian\n= max - min\n= %d - %d\n= %d", max, min, max-min);
    return 0;
}
*/
