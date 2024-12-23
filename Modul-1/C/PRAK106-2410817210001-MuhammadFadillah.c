#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variable a bernilai %d\n", a);
    printf("Variable b bernilai %d\n", b);
    printf("Variable c bernilai %d\n", c);

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a == b);
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", b > c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a != c);

    return 0;
}