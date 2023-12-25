/*Nama File 	: IsiMatrik*/
/*Deskripsi 	: Menentukan dan menampilkan matriks persegi dengan elemen diagonal utama bernilai 1,
                  elemen di atas diagonal utama bernilai 0 dan elemen di bawah diagonal utama bernilai 2 */
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Selasa, 29 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int M,N,i,j;
/*Algoritma*/
    printf("Program Isi Matrik\n");
    printf("Masukkan jumlah baris : ");
    scanf("%i", &M);
    printf("Masukkan jumlah kolom : ");
    scanf("%i", &N);

    int Matriks[M][N];
    if (M != N )
    {
        printf("\nNilai M dan N harus sama");
    }
    else{
        /*Perulangan diagonal matriks*/
        for (i = 0; i <= M-1; i++)
        {
            Matriks[i][i] = 1;
        }

        /*Perulangan nilai elemen diatas diagonal utama*/
        for (i = 0; i <= M-2; i++)
        {
            for (j = i+1; j <= N-1; j++)
            {
                Matriks[i][j] = 0;
            }
        }

        /*Perulangan nilai elemen dibawah diagonal utama*/
        for (i = 1; i <= M-1; i++)
        {
            for (j = 0; j <= i-1; j++)
            {
                Matriks[i][j] = 2;
            }

        }

        /*Perulangan untuk menampilkan matriks*/
        for (i = 0; i <= M-1; i++)
        {
            for (j = 0; j <= N-1; j++)
            {
                printf("%i ", Matriks[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
