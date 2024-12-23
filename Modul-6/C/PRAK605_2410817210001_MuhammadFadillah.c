#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    int MatriksA[r][r], MatriksB[r][r], MatriksAXB[r][r];
    printf("Matriks A\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &MatriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &MatriksB[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            MatriksAXB[i][j] = 0;
            for (int k = 0; k < r; k++) {
                MatriksAXB[i][j] += MatriksA[i][k] * MatriksB[k][j];
            }
        }
    }
    printf("Matriks AXB\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", MatriksAXB[i][j]);
        }
        printf("\n");
    }
    return 0;
}