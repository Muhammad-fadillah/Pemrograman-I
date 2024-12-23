#include <stdio.h>

int main() {
    int detik, hari, jam, menit, sisa_detik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);

    hari = detik / 86400;            
    sisa_detik = detik % 86400;       
    jam = sisa_detik / 3600;          
    sisa_detik %= 3600;               
    menit = sisa_detik / 60;          
    sisa_detik %= 60;                

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, sisa_detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, sisa_detik);
    }

    return 0;
}
