#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int zetsu_awal[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu_awal[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu_awal[i] * (i + 1));
    }
    return 0;
}
