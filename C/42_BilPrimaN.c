/*Nama File 	: BilPrimaN*/
/*Deskripsi 	: Menentukan bilangan prima yang dapat dibentuk dari bilangan integer sembarang N dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Rabu, 30 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, BanyFaktor;

/*Algoritma*/
    printf("Program Deret Bilangan Prima\n");
    printf("Masukkan bilangan integer positif N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        printf("Bilangan Primanya adalah ");
        for (int i = 1; i <= N; i++)
        {
            BanyFaktor = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    BanyFaktor++;
                }
            }
            if (BanyFaktor == 2)
            {
                if (i == 2)
                {
                    printf("%i", i);
                }
                else{
                    printf(", %i",i);
                }
            }
        }
    }
}
