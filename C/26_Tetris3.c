/*Nama File 	: Tetris3*/
/*Deskripsi 	: Menampilkan susunan karakter '*' sesuai masukkan N*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, i, j, Un;

/*Algoritma*/
    printf("Program Tetris\n");
    printf("Masukkan banyaknya baris : ");
    scanf("%i", &N); /*Input*/

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else{
        for (i = 1; i <= N; i++) /*Looping baris*/
        {
            Un = (0.5)*i*(i+1);
            for (j = 1; j <= Un; j++)
            {
                printf("*");
            }
            printf(" --%i\n", Un);    /*Output banyaknya bintang*/
        }
    }
    return 0;
}
