/* Nama file	: 15_UpahKerja.c */
/* Deskripsi	: Menghitung dan menampilkan upah yang diterima */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 10 Maret 2022 */

#include <stdio.h>

int main(){
    int Gol, Jam, Upah;
    printf("MENGHITUNG UPAH YANG DITERIMA\n");
    printf("-------------------------------");
    printf("\nMasukkan jenis golongan [1/2/3/4] : ");
    scanf("%d", &Gol);
    printf("Masukkan banyaknya jam kerja per minggu : ");
    scanf("%d", &Jam);

    if ((Gol >= 1 && Gol <= 4) && (Jam > 0)){
        if (Jam < 40){
            switch (Gol){
                case 1 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = 1000*Jam);
                    break;
                case 2 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = 1500*Jam);
                    break;
                case 3 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = 2000*Jam);
                    break;
                case 4 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = 2500*Jam);
                    break;
                default :
                    printf("Masukan golongan tidak valid");
            }
        }
        else{
            switch (Gol){
                case 1 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = (1000*40)+((Jam-40)*1500));
                    break;
                case 2 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = (1500*40)+((Jam-40)*2250));
                    break;
                case 3 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = (2000*40)+((Jam-40)*3000));
                    break;
                case 4 :
                    printf("Upah yang diterima sebesar Rp %d", Upah = (2500*40)+((Jam-40)*3750));
                    break;
                default :
                    printf("Masukan golongan tidak valid");
                    break;
            }
        }
    }
    else{
        printf("Masukan tidak valid.");
    }

    return 0;
}
