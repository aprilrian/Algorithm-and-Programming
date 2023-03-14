/*Nama File 	: DNAKambing*/
/*Deskripsi 	: Menentukan banyak kambing yang bersaudara dan tidak bersaudara berdasarkan kumpulan DNA*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Selasa, 29 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int N, Sum, i, j, temp, Selisih, Saudara, NotSaudara;

/*Algoritma*/
    printf("Masukkan banyaknya DNA : ");
    scanf("%i", &N);
    int KumpDNA[N];

    for (i = 0; i < N; i++)
    {
        printf("Masukkan DNA: ");
        scanf("%i", &KumpDNA[i]);
    }

    for (i = 0; i < N; i++){
        for(j = i + 1; j <N; j++){
            if (KumpDNA[i] > KumpDNA[j]){
                temp = KumpDNA[i];
                KumpDNA[i] = KumpDNA[j];
                KumpDNA[j] = temp;
            }
        }
    }

    printf("Kumpulan DNA setelah dirutkan : ");
    for (i = 0; i < N; i++)
    {
        printf("%i ", KumpDNA[i]);
    }


    Saudara = 0;
    NotSaudara = 0;
    for (i = 0; i < N; i++)
    {
        Selisih = 0;
        for (j = i+1; j < N; j++)
        {
            Selisih = KumpDNA[j] - KumpDNA[i];
            if (Selisih <3)
            {
                Saudara += 1;
            }
            else
            {
                NotSaudara += 1;
            }
        }
    }

    printf("\n\nBanyaknya kambing yang bersaudara adalah %i", Saudara);
    printf("\nBanyaknya kambing yang tidak bersaudara adalah %i\n", NotSaudara);
    return 0;
}
