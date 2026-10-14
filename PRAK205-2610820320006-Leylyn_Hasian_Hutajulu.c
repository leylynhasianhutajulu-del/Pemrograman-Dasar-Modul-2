#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    double alas, tinggi, keliling, luas;

    scanf("%d %d", &A, &B);

    alas = sqrt((double)B * B - (double)A * A);
    tinggi = A;
    keliling = A + B + alas;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}