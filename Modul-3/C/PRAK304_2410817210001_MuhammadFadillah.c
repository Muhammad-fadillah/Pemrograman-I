#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan angka (0-99): ");
    scanf("%d", &angka);

    if (angka < 0 || angka >= 100) {  
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (angka == 0) {  
        printf("Nol\n");
    } else if (angka < 10) {  
        printf("Satuan\n");
    } else if (angka < 20) {  
        printf("Belasan\n");
    } else {  
        printf("Puluhan\n");
    }

    return 0;  
}
