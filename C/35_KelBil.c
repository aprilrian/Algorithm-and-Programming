/*Nama File 	: KelBil*/
/*Deskripsi 	: Menentukan kelipatan bilangan terkecil jika diberikan sebuah array integer sembarang */
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Selasa, 29 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N,i,j,temp,Kelipatan,cek;
/*Algoritma*/
    printf("Program Kelipatan Bilangan Terkecil\n");
    printf("Masukkan Panjang Array : ");
    scanf("%i", &N);
    int Data[N];

    printf("\nMasukkan elemen array\n");
    for (i = 0; i < N; i++)
    {
        printf("Masukkan elemen array ke-%i : ", i+1);
        scanf("%i", &Data[i]);
    }

    /*Mengurutkan elemen array dari yang terkecil ke yang terbesar*/
    for (i = 0; i < N; i++){
        for(j = i + 1; j <N; j++){
            if (Data[i] > Data[j]){
                temp = Data[i];
                Data[i] = Data[j];
                Data[j] = temp;
            }
        }
    }

    /*Looping untuk menemukan kelipatan bilangan terkecil*/
    while (cek < N-1)
    {
        cek = 0;
        Kelipatan += Data[N-1];
        for (j = 0; j < N-1; j++)           /*Looping untuk mengecek apakah kelipatan bilangan habis dibagi elemen array atau tidak*/
        {
            if (Kelipatan % Data[j] == 0)  /*Mengecek apakah kelipatan bilangan merupakan kelipatan dari masing-masing elemen array*/
            {
                cek = cek + 1;          /*Kondisi berhenti ketika sudah menemukan kelipatan terkecil*/
            }
        }
    }
    printf("Kelipatan terkecil adalah : %i", Kelipatan);
    return 0;
}
