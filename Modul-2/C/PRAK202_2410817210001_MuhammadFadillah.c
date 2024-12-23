#include <stdio.h>

int main() {
    float a, b , hasil;

    printf("Masukan nilai pertama :");
    scanf("%f", &a);
    printf("Masukan nilai kedua :");
    scanf("%f", &b);

    hasil = a + b;
    printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.2f adalah %.2f", a, b, hasil);

    return 0;
}