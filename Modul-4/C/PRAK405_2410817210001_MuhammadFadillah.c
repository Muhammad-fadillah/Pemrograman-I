#include <stdio.h>

int main() {
    int n, kelipatan;
    
    printf("Masukkan jumlah baris dan kelipatan : ");
    scanf("%d %d", &n, &kelipatan);
    
    int total = 0; 

    for (int i = 1; i <= n; i++) {
        int sum = 0; 
        
        for (int j = i; j >= 1; j--) {
            sum += j * kelipatan;
            
            printf("(%d * %d)", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }

        printf(" = %d\n", sum);
        
        total += sum;
    }
    
    printf("%d\n", total);
    return 0;
}
