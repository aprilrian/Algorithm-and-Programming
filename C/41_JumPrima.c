/*Nama File 	: JumPrima*/
/*Deskripsi 	: Menentukan jumlah deret bilangan prima yang dapat dibentuk dari bilangan integer sembarang N dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Rabu, 30 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, BanyFaktor, Sn, i, j;

/*Algoritma*/
    printf("Program Jumlah Deret Bilangan Prima\n");
    printf("Masukkan bilangan integer positif N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
    }
    else{
        Sn = 0;
        for (i = 1; i <= N; i++)
        {
            BanyFaktor = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    BanyFaktor = BanyFaktor + 1;
                }
            }

            if (BanyFaktor == 2)
            {
                Sn += i;
                if (i == 2)
                {
                    printf("%i", i);
                }
                else{
                    printf(" + %i",i);
                }
            }
        }
        printf(" dengan Jumlahan Deret Bilangannya adalah Sn=%i", Sn);
    }
}
