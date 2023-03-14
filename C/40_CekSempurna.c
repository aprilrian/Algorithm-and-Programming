/*Nama File 	: CekSempurna*/
/*Deskripsi 	: Mengecek apakah sebuah bilangan integer N sembarang merupakan bilangan sempurna atau bukan dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Rabu, 30 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N, Total_Faktor,i;

    /*Algoritma*/
    printf("Program Cek Bilangan Sempurna\n");
    printf("Masukkan bilangan integer positif N : ");
    scanf("%i", &N);

    Total_Faktor = 0;
    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        for (i = 1; i < N; i++)
        {
            if (N % i==0)
            {
                Total_Faktor += i;
            }
        }

        if (Total_Faktor == N)
        {
            printf("%i Bilangan Sempurna", N);
        }
        else{
            printf("%i BUKAN Bilangan Sempurna", N);
        }
    }
}
