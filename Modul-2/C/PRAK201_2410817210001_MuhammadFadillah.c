#include <stdio.h>

int main() {
    char nama[50];
    int nim;
    int kelasParalel;
    char ttl[50];
    char alamat[100];
    char hobby[50];
    int noHp;

    printf("Nama :");
    scanf(" %[^\n]", nama);

    printf("NIM :");
    scanf("%d", &nim);

    printf("Kelas Paralel :");
    scanf("%d", &kelasParalel);

    printf("Tempat/Tanggal Lahir :");
    scanf(" %[^\n]", ttl);

    printf("Alamat :");
    scanf(" %[^\n]", alamat);

    printf("Hobby :");
    scanf(" %[^\n]", hobby);

    printf("No. Hp :");
    scanf("%d", &noHp);

    printf("\nOUTPUT\n");
    printf("Nama : %s\n", nama);
    printf("NIM : %d\n", nim);
    printf("Kelas Paralel : %d\n", kelasParalel);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n", hobby);
    printf("No. Hp : %d\n", noHp);

    return 0;

}