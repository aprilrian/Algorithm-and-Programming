/* Nama file	: 16_TunjAnak.c */
/* Deskripsi	: Menghitung dan menampilkan besarnya tunjangan anak
yang diberikan */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 10 Maret 2022 */

#include <stdio.h>

int main(){
    int JumlahAnak, Gaji, Tunjangan;
    printf("MENGHITUNG BESARNYA TUNJANGAN ANAK YANG DIBERIKAN\n");
    printf("-------------------------------------------------\n");
    printf("Berapa jumlah anak anda?(dalam angka) = ");
    scanf("%d", &JumlahAnak);
    printf("Berapa gaji pokok anda?(langsung dalam angka) = ");
    scanf("%d", &Gaji);

    if ((JumlahAnak >= 0) && (Gaji > 0)){
        if (JumlahAnak <= 3){
            Tunjangan = JumlahAnak*(0.1*Gaji);
            printf("Besarnya tunjangan anda sebesar %d", Tunjangan);
        }
        else{
            Tunjangan = 3*(0.1*Gaji);
            printf("Besarnya tunjangan anda sebesar %d", Tunjangan);
        }
    }
    else{
        printf("Masukan tidak valid.");
    }

    return 0;
}
