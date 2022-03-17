/* Nama file	: 13_BiayaParkir.c */
/* Deskripsi	: Menentukan dan menampilkan besarnya biaya parkir yang dihitung
berdasarkan lamanya parkir */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */

#include <stdio.h>

int main(){
    int LamaParkir;
    int BiayaParkir;
    printf("MENGHITUNG BIAYA PARKIR\n-----------------------");
    printf("\nMasukkan waktu lamanya parkir (jam) : ");
    scanf("%d", &LamaParkir);
    if (LamaParkir > 0){
        if (LamaParkir > 2){
            BiayaParkir = 2000+((LamaParkir - 2)*500);
            printf("Biaya parkir yang harus dibayar sebanyak Rp %.d", BiayaParkir);
        }
        else{
            BiayaParkir = 2000;
            printf("Biaya parkir yang harus dibayar sebanyak Rp %.d", BiayaParkir);
        }
    }
    else{
        printf("Masukan tidak valid.");
    }

    return 0;
}
