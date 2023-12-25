/* Nama file	: 3_JumlahSubArray.c */
/* Deskripsi	: menghitung besarnya penjumlahan sub array/tabel T */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */


#include <stdio.h>

int main()
{
    // Kamus
    int a, b, c, sum;

    // Algoritma
    printf("Masukkan jumlah sub array: ");
    scanf("%d", &a);
    int T[a];
    sum = 0;

    for (b = 0; b < a; b++)
        scanf("%d", &T[b]);

    for (b = 0; b < a; b++)
    {
        printf("(");
        for (c = b; c < a; c++)
        {
            sum += T[c];
            if (c != a - 1)
                printf("%d + ", T[c]);
            else
                printf("%d", T[c]);
        }
        if (b != a - 1)
            printf(") + ");
        else
            printf(")");
    }
    printf("\nJumlah sub-array sebesar %d", sum);
    return 0;
}
