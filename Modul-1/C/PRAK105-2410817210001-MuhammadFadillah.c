#include <stdio.h>

int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    int total_sisa = a % b + x % y;

    printf("Variable a bernilai %d\n", a);
    printf("Variable b bernilai %d\n", b);
    printf("Variable x bernilai %d\n", x);
    printf("Variable y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa);

    return 0;
}