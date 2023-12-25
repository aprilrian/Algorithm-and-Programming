/* Nama file	: 14_HargaDiskon.c */
/* Deskripsi	: Menghitung dan menampilkan besarnya harga
setelah diberikan diskon */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 10 Maret 2022 */

#include <stdio.h>

int main(){
    int Harga, Total;
    char d;
    printf("MENGHITUNG HARGA SETELAH DIBERI DISKON\n");
    printf("--------------------------------------");
    printf("\nMasukkan harga (angka) : ");
    scanf("%d", &Harga);
    printf("\nMasukkan jenis Diskon [A/B/C] : ");
    scanf(" %c", &d);

    if (Harga > 200 && Harga < 10000){
        switch (d){
            case 'A' :
                printf("Total Harga = Rp %d", Total = Harga - (Harga * 0.1));
                break;
            case 'B' :
                printf("Total Harga = Rp %d", Total = Harga - (Harga * 0.15));
                break;
            case 'C' :
                printf("Total Harga = Rp %d", Total = Harga - (Harga * 0.2));
                break;
            default :
                printf("Jenis diskon tidak diketahui");
        }
    }
    else{
        printf("Masukan harga tidak valid.");
    }

    return 0;
}
