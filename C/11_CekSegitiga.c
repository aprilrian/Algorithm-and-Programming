/*Nama File 	: CekSegitiga*/
/*Deskripsi 	: Mengecek dan menampilkan ke layar jenis suatu segitiga dari 3 buah inputan sisi segitiga*/
/*Pembuat   	: 24060121120022-Aprilyanto Setiyawan Siburian*/
/*Tgl Pembuatan	: Kamis, 10 Maret 2022*/

#include <stdio.h>

int main (){
    /*Kamus*/
    int a,b,c;

    /*Algoritma*/
    printf("Program Cek Segitiga\n");
    printf("Masukkan sisi 1 : ");
    scanf("%i", &a);
    printf("Masukkan sisi 2 : ");
    scanf("%i", &b);
    printf("Masukkan sisi 3 : ");
    scanf("%i", &c);

    if((a>0)&&(b>0)&&(c>0)){
        if ((a==b) && (b==c)){
            printf("Merupakan segitiga sama sisi");
        }
        else if((a==b) || (b==c) || (a==c)){
            printf("Merupakan segitiga sama kaki");
        }
        else if((a+b>c)&&(a+c>b)&&(b+c>a)){
            printf("Merupakan segitiga sembarang");
        }
        else{
            printf("Bukan segitiga");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segiitga");
    }
}
