/*Nama File 	: Kalk-SS*/
/*Deskripsi 	: Kalkulator sederhana yang dapat melakukan operasi aritmatika terhadap 2 bilangan bulat sembarang*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Kamis, 10 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int iA, iB, hasil;
    float hasilBagi;
    div_t hasilDiv;
    char pilihan;

    /*Algoritma*/
    printf("Program kalkulator sederhana\n");
    printf("Pilihan Menu (pilih dengan huruf) :\na(+) \nb(-) \nc(*) \nd(/) \ne(mod) \nf(div)\n");
    printf("Masukkan pilihan operasi : ");
    scanf(" %c", &pilihan);
    printf("Masukkan angka pertama : ");
    scanf("%i", &iA);
    printf("Masukkan angka kedua : ");
    scanf("%i", &iB);

    switch (pilihan){
    case 'a':
        hasil = iA + iB;
        printf("%i + %i = %i", iA, iB, hasil);
        break;

    case 'b':
        hasil = iA - iB;
        printf("%i - %i = %i", iA, iB, hasil);
        break;

    case 'c':
        hasil = iA * iB;
        printf("%i * %i = %i", iA, iB, hasil);
        break;

    case 'd':
        hasilBagi = (float)iA / (float)iB;
        printf("%i / %i = %f", iA, iB, hasilBagi);
        break;

    case 'e':
        hasil = iA % iB;
        printf("%i mod %i = %i", iA, iB, hasil);
        break;

    case 'f':
        hasilDiv = div(iA,iB);
        printf("%i div %i = %i", iA, iB, hasilDiv);
        break;
    default:
        printf("Bukan pilihan menu yang benar");
        break;
    }
}
