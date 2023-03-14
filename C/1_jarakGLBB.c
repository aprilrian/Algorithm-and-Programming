/* Nama file	: 1_jarakGLBB.c */
/* Deskripsi	: Menghitung dan menampilkan jarak (S dalam meter)
yang ditempuh benda yang mengalami gerak lurus berubah beraturan */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 2 Maret 2022*/

#include <stdio.h>

int main() {
    float v0, t, a, S;
    printf("Mengitung Jarak GLBB\n----------------------\n");
    printf("Masukkan kecepatan awal (v0): ");
    scanf("%f", &v0);
    printf("Masukkan waktu (t): ");
    scanf("%f", &t);
    printf("Masukkan percepatan (a): ");
    scanf("%f", &a);
    S = v0 * t + 0.5*(a*t*t);
    printf("Jarak yang ditempuh benda yang mengalami GLBB adalah: %.2f m", S);

    return 0;
}
