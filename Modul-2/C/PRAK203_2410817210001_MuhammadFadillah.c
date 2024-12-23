#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;
 
    printf("Masukkan nilai a, b, i, j, x, y secara berurutan: ");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = (((a - b) *  i) / j) - (x + y);

    printf("Hasil dari penghitungan adalah: %.3f", hasil);

    return 0;
}