/*Nama File 	: CekBilSemb*/
/*Deskripsi 	: Mengecek apakah integer sembarang i tersebut bilangan bulat positif atau nol atau bulat negative atau bukan termasuk bilangan*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Rabu, 8 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Program Cek Bilangan Sembarang\n");
    printf("Masukkan bilangan bulat sembarang i = ");

    if(scanf("%i", &i)){
        if(i > 0){
            printf("Merupakan bilangan bulat positif");
        }
        else if(i == 0){
            printf("Merupakan bilangan 0");
        }
        else{
            printf("Merupakan bilangan negatif");
        }
    }
    else{
        printf("Bukan termasuk sebuah bilangan");
    }

    return 0;
}
