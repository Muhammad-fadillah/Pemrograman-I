#include <stdio.h>

int main() {
    int pilihan;
    float nilaiPertama, nilaiKedua, hasil;

    do {
        printf("\nPilih program:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilaiKedua);

            switch (pilihan) {
                case 1:
                    hasil = nilaiPertama + nilaiKedua;
                    printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                    break;
                case 2:
                    hasil = nilaiPertama - nilaiKedua;
                    printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                    break;
                case 3:
                    hasil = nilaiPertama * nilaiKedua;
                    printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                    break;
                case 4:
                    if (nilaiKedua != 0) {
                        hasil = nilaiPertama / nilaiKedua;
                        printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, hasil);
                    } else {
                        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
                    }
                    break;
            }
        } else if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Fadillah.\n");
        } else {
            printf("Input anda salah, silahkan coba lagi.\n");
        }
    } while (pilihan != 5);

    return 0;
}
