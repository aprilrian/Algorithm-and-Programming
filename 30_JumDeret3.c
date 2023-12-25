/*Nama File 	: JumDeret3*/
/*Deskripsi 	: Menentukan jumlah deret bilangan sesuai dengan masukan N dan menampilkannya di layar*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Senin, 28 Maret 2022*/

#include <stdio.h>
#include <math.h>

int main(){
    /*Kamus*/
    int N, Sum;

    /*Algoritma*/
    printf("Program Jumlah Deret 3\n");
    printf("Masukan N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else{
        Sum = 0;
        for (int i = 1; i <= N; i++)
        {
            Sum += pow(-1,i-1)*i;
        }
        printf("%i", Sum);
    }
    return 0;
}
