#include <stdio.h>

int main(){
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float hasil = (float) (a + b) * x / y;

    printf("Variable a bernilai %d\n", a);
    printf("Variable a bernilai %d\n", b);
    printf("Variable a bernilai %d\n", x);
    printf("Variable a bernilai %d\n", y);
    printf("Hasil dari nilai a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}
