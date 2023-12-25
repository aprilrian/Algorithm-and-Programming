/* Nama file	: 5_luasKellLayang.c */
/* Deskripsi	: Menghitung dan menampilkan luas layang-layang
(Luas dalam meter persegi), dan keliling layang-layang (Kell dalam meter) dari
sebuah layang-layang */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 2 Maret 2022*/

#include <stdio.h>

int main() {
    float s1, s2, d1, d2, Luas, Kell;
    printf("Menghitung Luas dan Keliling Layang-Layang\n--------------------------------------------\n");
    printf("Masukkan sisi satu (s1): ");
    scanf("%f", &s1);
    printf("Masukkan sisi dua (s2): ");
    scanf("%f", &s2);
    printf("Masukkan diagonal satu (d1): ");
    scanf("%f", &d1);
    printf("Masukkan diagonal dua (d2): ");
    scanf("%f", &d2);
    Luas = (1/2) * d1 * d2;
    Kell = 2 * (s1 + s2);
    printf("Luas layang-layang adalah: %.2f m^2\n", Luas);
    printf("Keliling layang-layang adalah: %.2f m^2", Kell);

    return 0;
}
