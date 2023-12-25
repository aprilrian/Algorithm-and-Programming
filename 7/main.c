/* Nama File    : main.c */
/* Nama Pembuat : Aprilyanto Setiyawan Siburian */
/* NIM          : 24060121120022 */
/* Lab          : B1 */
/* Deskripsi    : Mencari harga X dalam Tabel T [ 1...N ] melalui metode/algoritma binary search tree mulai dari T[1] */

#include "BinSearch.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Kamus
    int T[]={1,3,6,9,11,13,15,17,19,21};
    int X=9;
    int n=sizeof(T)/sizeof(T[0]);
    int ix;

    //Algoritma
    BinSearch(T,n,X,&ix);
    (ix==-1)
        ? printf("Elemen tidak berada di array")
        : printf("Elemen berada di index ke-%i", ix+1);
    return 0;
}
