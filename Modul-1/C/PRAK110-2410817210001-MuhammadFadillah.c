#include <stdio.h>
#include <math.h>

int main() {
  int alas = 5;
  int tinggi = 12;

  int sisi_c = sqrt(alas * alas + tinggi * tinggi);

  int keliling = alas + tinggi + sisi_c;

  int luas = (alas * tinggi) / 2;

  printf("Diketahui :\n");
  printf("Alas = %d cm\n", alas);
  printf("Tinggi = %d cm\n", tinggi);

  printf("\nJawab:\n");
  printf("Sisi A = %d cm\n", alas);
  printf("Sisi B = %d cm\n", tinggi);
  printf("Sisi C = %d cm\n", sisi_c);
  printf("Keliling = %d cm\n", keliling);
  printf("Luas = %d cm\n", luas);

  return 0;
}