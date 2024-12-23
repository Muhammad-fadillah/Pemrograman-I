#include <stdio.h>

int main(){
    int harga_A = 400000;
    int harga_B = 350000;
    float diskon_A = 0.13;
    float diskon_B = 0.21;
    int harga_diskonA = harga_A - (harga_A * diskon_A);
    int harga_diskonB = harga_B - (harga_B * diskon_B);

    printf("Harga sepatu a adalah %d\n", harga_A); 
    printf("Harga sepatu b adalah %d\n", harga_B);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %d\n", harga_diskonA); 
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %d\n", harga_diskonB);

    return 0; 
}