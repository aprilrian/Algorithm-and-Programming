/*Nama File 	: CekPrima*/
/*Deskripsi 	: Mengecek apakah bilangan integer N sembarang merupakan bilangan prima atau bukan dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Rabu, 15 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, BanyFaktor,i;

/*Algoritma*/
    printf("==Program Cek Bilangan Prima==\n");
    printf("Masukkan bilangan integer positif sembarang : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        for (i = 1; i <= N; i++)
        {
            int a = N % i;
            if (a==0)
            {
                BanyFaktor+= 1;
            }
        }

        if (BanyFaktor == 2)
        {
            printf("%i bilangan prima", N);
        }
        else{
            printf("%i BUKAN bilangan prima", N);
        }
    }

}
