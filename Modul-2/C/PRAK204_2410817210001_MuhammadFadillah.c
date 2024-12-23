#include <stdio.h>

int main() {
    float r, t, volume, luas, keliling;

    printf("Masukan jari-jari : ");
    scanf("%f", &r);
    printf("Masukan tinggi : ");
    scanf("%f", &t);

    volume = 3.1428571428571 * r * r * t;
    luas = 2 * 3.1428571428571 * r * (r + t);
    keliling = 2 * 3.1428571428571 * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}