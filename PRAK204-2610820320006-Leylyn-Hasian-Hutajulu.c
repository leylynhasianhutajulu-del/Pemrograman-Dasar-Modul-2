#include <stdio.h>

int main() {
    double r, t, volume, luas, keliling;
    double pi = 3.142857;

    scanf("%lf %lf", &r, &t);

    volume = pi * r * r * t;
    luas = 2 * pi * r * (r + t);
    keliling = 2 * pi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}