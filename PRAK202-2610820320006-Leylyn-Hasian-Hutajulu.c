#include <stdio.h>
#include <stdlib.h>

int main() {
    char nilai1[50], nilai2[50];
    double angka1, angka2, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%49s", nilai1);

    printf("Masukkan Nilai Kedua   : ");
    scanf("%49s", nilai2);

    angka1 = atof(nilai1);
    angka2 = atof(nilai2);
    hasil = angka1 + angka2;

    printf("Hasil dari penjumlahan nilai pertama \"%s\" dan nilai kedua \"%s\" adalah \"%.2f\"\n",
           nilai1, nilai2, hasil);

    return 0;
}