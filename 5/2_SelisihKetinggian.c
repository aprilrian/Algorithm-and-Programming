/* Nama file	: 2_SelisihKetinggian.c */
/* Deskripsi	: Menghitung  selisih  ketinggian  terbesar antara
puncak bukit dengan lembah bukit atau sebaliknya */
/* Nama 		: Aprilyanto Setiyawan Siburian */
/* NIM  		: 24060121120022 */

#include <stdio.h>

int main()
{
  // Kamus
  int N, i, max, min, arr[N];

  // Algoritma
  printf("Masukkan jumlah data: ");
  scanf("%d", &arr[N]);

  for (i = 0; i < N; i++){
    printf("Masukkan ketinggian ke-%d", i);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < N; i++)
    scanf("%d", &arr[i]);

  max = arr[0];
  min = arr[0];

  for (i = 0; i < N; i++)
    if (arr[i] > max)
      max = arr[i];

  for (i = 0; i < N; i++)
    if (arr[i] < min)
      min = arr[i];

  printf("Selisih ketinggiannya adalah %d", max - min);
  return 0;
}
