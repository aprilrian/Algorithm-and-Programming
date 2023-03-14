/*Nama File 	: Kuadran*/
/*Deskripsi 	: Menentukan dan menampilkan di layar kuadran dari suatu titik P*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Selasa, 29 Maret 2022*/

#include <stdio.h>/*Header File*/

/*Program Utama*/
int main(){
/*Kamus*/
    int P[2]; /*Titik*/
    int X,Y;
/*Algoritma*/
    printf("Program Kuadran\n");
    printf("Masukkan koordinat sumbu x : ");
    scanf("%i", &P[0]);
    printf("Masukkan koordinat sumbu y : ");
    scanf("%i", &P[1]);

    X = P[0];
    Y = P[1];

    if (X > 0 && Y >0)
    {
        printf("Titik P(%i,%i) berada pada kuadran I", X,Y);
    }
    else if (X < 0 && Y > 0)
    {
        printf("Titik P(%i,%i) berada pada kuadran II", X,Y);
    }
    else if (X > 0 && Y < 0)
    {
        printf("Titik P(%i,%i) berada pada kuadran III", X,Y);
    }
    else if (X < 0 && Y < 0)
    {
        printf("Titik P(%i,%i) berada pada kuadran III", X,Y);
    }
    else if ((X == 0) && (Y == 0)){
        printf("Titik P(%i,%i) berada pada titik pusat 0", X,Y);
    }
    else if (X == 0)
    {
        printf("Titik P(%i,%i) berada pada sumbu y", X,Y);
    }
    else
    {
        printf("Titik P(%i,%i) berada pada sumbu x", X,Y);
    }
    return 0;
}
