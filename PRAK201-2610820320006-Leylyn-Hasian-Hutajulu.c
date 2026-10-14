#include <stdio.h>
#include <string.h>

int main() {
    char nama[100];
    char nim[30];
    char kelas[20];
    char ttl[100];
    char alamat[200];
    char hobby[50];
    char no_hp[20];

    printf("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                  : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel        : ");
    fgets(kelas, sizeof(kelas), stdin);

    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat               : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby                : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. HP               : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    nama[strcspn(nama, "\n")] = '\0';
    nim[strcspn(nim, "\n")] = '\0';
    kelas[strcspn(kelas, "\n")] = '\0';
    ttl[strcspn(ttl, "\n")] = '\0';
    alamat[strcspn(alamat, "\n")] = '\0';
    hobby[strcspn(hobby, "\n")] = '\0';
    no_hp[strcspn(no_hp, "\n")] = '\0';

    printf("\nOutput Biodata\n");
    printf("%-21s: %s\n", "Nama", nama);
    printf("%-21s: %s\n", "NIM", nim);
    printf("%-21s: %s\n", "Kelas Paralel", kelas);
    printf("%-21s: %s\n", "Tempat/Tanggal Lahir", ttl);
    printf("%-21s: %s\n", "Alamat", alamat);
    printf("%-21s: %s\n", "Hobby", hobby);
    printf("%-21s: %s\n", "No. HP", no_hp);

    return 0;
}