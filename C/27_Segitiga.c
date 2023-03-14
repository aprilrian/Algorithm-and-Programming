/*Nama File 	: Segitiga*/
/*Deskripsi 	: Membuat suatu segitiga terbalik dari suatu masukan integer N*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, i, j, k;

/*Algoritma*/
    printf("Program Segitiga\n");
    printf("Masukkan banyaknya baris : ");
    scanf("%i", &N); /*Input*/

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else{
        for (i = N; i >= 1; i--)        /*Loop Baris*/
        {
            for (j = i; j < N ; j++)    /*Loop Spasi*/
            {
                printf(" ");            /*Output Spasi*/
            }
            for (k = i; k >= 1; k--)    /*Loop Bintang + Spasi*/
            {
                printf("* ");           /*Output bintang + spasi*/
            }
            printf("--%i\n", i);        /*Output jumlah bintang*/
        }
    }
    return 0;
}
