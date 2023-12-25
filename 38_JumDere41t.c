/*Nama File 	: JumDere41t*/
/*Deskripsi 	: Menentukan jumlah deret sesuai dengan masukan N dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N, Sum, bil, i;

    /*Algoritma*/
    printf("Program Jumlah Deret==========\n");
    printf("Masukan N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("Tidak ada Deret Bilangan, sehingga Sn=0");
    }
    else
    {
        printf("Deretnya adalah : ");
        bil = 0;
        for (i = 1; i <= N; i++)
        {
            bil = 0.5 * i * (i+1);
            if (i == 1)
            {
                printf("%i", bil);
            }
            else{
                printf(" , %i",bil);
            }
        }
        printf("\n");

        Sum = 0;
        bil = 0;
        for (int i = 1; i <= N; i++)
        {
            bil = 0.5 * i * (i+1);
            Sum += bil;
            if (i == 1)
            {
                printf("%i", bil);
            }
            else{
                printf(" + %i",bil);
            }
        }
        printf(" = %i", Sum);
    }
    return 0;
}
