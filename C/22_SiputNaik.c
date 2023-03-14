/*Nama File 	: Segitiga*/
/*Deskripsi 	: Menentukan berapa hari yang dibutuhkan siput untuk mencapai ketinggian N meter*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    float N,i;
    int hari;

    /*Algoritma*/
    printf("Masukkan kedalaman lubang :");
    scanf("%f", &N);

    hari = 0;
    i = 0;
    if (N <= 0)
    {
        printf("Masukan N harus positif!")
    }
    else{
        while (i < N-0.1)
        {
            hari = hari + 1;
            i = i + 0.2;
        }
    }
    printf("Siput membutuhkan %i hari untuk mencapai ujung lubang", hari);
}
