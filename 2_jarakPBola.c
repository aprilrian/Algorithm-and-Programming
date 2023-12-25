/* Nama file	: 2_jarakPBola.c */
/* Deskripsi	: Menghitung dan menampilkan jarak (y dalam meter)
yang ditempuh benda yang mengalami gerak gerak parabola */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 2 Maret 2022*/

#include <stdio.h>

int main() {
    float v0, t, y;
    const float g = 9.8;
    printf("Menghitung Jarak Parabola\n---------------------------\n");
    printf("Masukkan kecepatan awal (v0): ");
    scanf("%f", &v0);
    printf("Masukkan waktu (t): ");
    scanf("%f", &t);
    y = v0 * t - 0.5*(g*t*t);
    printf("Jarak parabola yang ditempuh benda adalah: %.2f m", y);

    return 0;
}
