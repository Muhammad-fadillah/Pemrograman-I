#include <stdio.h>
#include <string.h>

int main() {
    char kalimat_asli[100], kalimat_palsu[100];
    int jumlah_sama = 0, jumlah_beda = 0;
    scanf(" %[^\n]", kalimat_asli);
    scanf(" %[^\n]", kalimat_palsu);
    int panjang_asli = strlen(kalimat_asli);
    int panjang_palsu = strlen(kalimat_palsu);

    if (panjang_asli != panjang_palsu) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        for (int i = 0; i < panjang_asli; i++) {
            if (kalimat_asli[i] == kalimat_palsu[i]) {
                if (kalimat_asli[i] != ' ') {
                    printf("*");
                    jumlah_sama++;
                } else {
                    printf(" "); 
                }
            } else {
                printf("#");
                jumlah_beda++;
            }
        }
        printf("\n* = %d\n", jumlah_sama);
        printf("# = %d\n", jumlah_beda);
        if (jumlah_sama >= jumlah_beda) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }
    return 0;
}
