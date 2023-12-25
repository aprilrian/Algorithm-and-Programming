/* Nama file	: 17_TarifPLN.c */
/* Deskripsi	: Menghitung dan menampilkan besarnya tarif listrik
yang dikenakan */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */
/* Tanggal      : 10 Maret 2022 */

#include <stdio.h>

int main(){
    int Gol, Daya, Tarif;
    printf("MENGHITUNG BESARNYA TARIF LISTRIK YANG DIKENAKAN\n");
    printf("------------------------------------------------\n");
    printf("Masukkan golongan tarif anda [1/2] : ");
    scanf("%d", &Gol);
    printf("Masukkan pemakaian daya listrik anda (dalam kWH) : ");
    scanf("%d", &Daya);

    if ((Gol >= 1) && (Gol <= 2) && (Daya > 0)){
        if (Daya < 100){
            if (Gol == 1){
                printf("\n[PEMAKAIAN DAYA LISTRIK BELUM MEMENUHI MINIMUM PEMBAYARAN]\n\n");
                printf("Besar tarif listrik yang dikenakan sebesar Rp %d",
                       Tarif = 1000*Daya);
            }
            else{
                printf("\n[PEMAKAIAN DAYA LISTRIK BELUM MEMENUHI MINIMUM PEMBAYARAN]\n\n");
                printf("Besar tarif listrik yang dikenakan sebesar Rp %d",
                       Tarif = 2000*Daya);
            }
        }
        else if ((Daya >= 100) && (Daya < 1000)){
            if (Gol == 1){
                printf("Besar tarif listrik yang dikenakan sebesar Rp %d",
                       Tarif = 1000*Daya);
            }
            else {
                printf("Besar tarif listrik yang dikenakan sebesar Rp %d",
                       Tarif = 2000*Daya);
            }
        }
        else {
            if (Gol == 1){
                Tarif = 1000*Daya;
                printf("Besar tarif listrik yang dikenakan sebesar Rp %d",
                       Tarif = Tarif+(Tarif*0.1));
            }
            else{
                Tarif == 2000*Daya;
                printf("Besar tarif listrik yang dikenakan sebesar Rp %d",
                       Tarif = Tarif+(Tarif*0.1));
            }
        }
    }
    else {
        printf("Masukan tidak valid.");
    }

    return 0;
}
