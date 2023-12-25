/* Nama file	: 3_gayaSentr.c */
/* Deskripsi	: Menghitung dan menampilkan Gaya (F dalam Newton) */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 2 Maret 2022*/

#include <stdio.h>

int main() {
    float m, v, r, F;
    printf("Menghitung Gaya Sentripetal\n-----------------------------\n");
    printf("Masukkan massa (m): ");
    scanf("%f", &m);
    printf("Masukkan kecepatan (v): ");
    scanf("%f", &v);
    printf("Masukkan jari-jari (r): ");
    scanf("%f", &r);
    F = m * ((v*v)/r);
    printf("Gaya sentripetal pada benda adalah: %.2f N", F);

    return 0;
}
