/*Nama File 	: CekProsesBil*/
/*Deskripsi 	: Mengklasifikasikan sebuah bilangan integer sembarang N dan melakukan suatu proses dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Rabu, 8 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N;

    /*Algoritma*/
    printf("Program Cek Proses Bilangan\n");
    printf("Masukkan bilangan integer N = ");
    scanf("%i", &N);

    if (N % 2 == 0){
        N = N + 3;
        if (N % 5 == 0){
            N = N + 5;
        }
        else{
            N = N + 2;
        }
    }
    else{
        N = N + 2;
        if (N % 3 == 0){
            N = N + 4;
        }
        else{
            N = N + 1;
        }
    }

    printf("Jadi, Hasil akhir dari N adalah : %i", N);
    return 0;
}
