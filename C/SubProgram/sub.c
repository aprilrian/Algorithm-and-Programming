#ifndef SUB_C
#define SUB_C
#include "sub.h"
#include <stdio.h>
#include <stdlib.h>

void Faktorial(int N){
/* Proses : Melakukan traversal bilangan integer 1 s/d N*/
/* lalu melakukan perkalian dan menuliskan nilainya ke layar. */
/* I.S : N integer sembarang */
/* F.S : jika N > 1 maka akan menampilkan perkalian faktorial. */
/* dan menampilkan hasil faktorial, jika N=0/N=1 akan  */
/* menampilkan hasil faktorialnya 1. Sedangkan jika N<0 */
/* akan menampilkan pesan "N tidak boleh negatif"*/
/*Kamus Lokal*/
	int i;
	int hasil;
/*Algoritma*/
	if(N<0){
		printf("N tidak boleh negatif\n");
	}
	else{
		if(N==0 || N==1){
			printf("Faktorial(%i)= 1\n", N);
		}
		else{
			printf("Faktorial(%i)= ", N);
			hasil = 1;
			for(i = N; i>=1; i--){
				hasil = hasil * i;
				if(i == N){
					printf("%i", i);
				}
				else{
					printf(" * %i", i);
				}
			}
			printf(" = %i\n", hasil);
		}
	}
}

void Pangkat(int i, int j){
/* Proses : Melakukan traversal perkalian i sebanyak j */
/* I.S : i dan j integer sembarang. */
/* F.S : jika j > 0 maka akan menampilkan hasil perkalian i sebanyak j kali */
/* jika j = 0 maka akan menampilkan nilai 1*/
/* jika j < 0 maka akan menampilkan hasil perkalian 1/i sebanyak j kali*/
/*Kamus Lokal*/
	int k, hasilPangkat;
/*Algoritma*/
	hasilPangkat = 1;
	if(j==0){
		printf("%i pangkat %i = 1\n", i, j);
	}
	else{
		if(j>0){
			for(k = 1; k <= j; k++){
				hasilPangkat = hasilPangkat * i;
			}
			printf("%i pangkat %i = %i\n", i, j, hasilPangkat);
		}
		else{
			for(k = 1; k <= (-j); k++){
				hasilPangkat = hasilPangkat * i;
			}
			printf("%i pangkat %i = 1/%i\n", i, j, hasilPangkat);
		}
	}
}

#endif
