/*Nama File 	: JumDeret2*/
/*Deskripsi 	: Menentukan jumlah deret bilangan ganjil sesuai dengan masukan N dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N, Sum, i;

    /*Algoritma*/
    printf("Program Jumlah Deret 2\n");
    printf("Masukan N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else
    {
        Sum = 0;
        for (i = 1; i <= N; i++)
        {
            Sum += (2*i)-1;
        }
        printf("Jumlah deret ganjil dengan N = %i adalah %i", N, Sum);
    }
    return 0;
}
