/* Nama file	: 4_volBolaKerct.c */
/* Deskripsi	: Menghitung dan menampilkan volume bola (Vb dalam meter kubik),
dan volume kerucut (Vk dalam meter kubik) dari sebuah lingkaran */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 2 Maret 2022*/

#include <stdio.h>

int main() {
    float r, Vb, Vk;
    const float PHI = 3.14;
    printf("Menghitung Volume Bola dan Kerucut\n------------------------------------\n");
    printf("Masukkan jari-jari (r): ");
    scanf("%f", &r);
    Vb = (4/3) * (PHI * r * r * r);
    Vk = (1/2) * Vb;
    printf("Volume bola adalah: %.2f m^3\n", Vb);
    printf("Volume kerucut adalah: %.2f m^3", Vk);

    return 0;
}
