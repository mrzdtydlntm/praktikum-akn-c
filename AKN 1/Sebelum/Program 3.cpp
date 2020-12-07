/*Program 3 - Penggunaan if dan sistem relasi*/
#include <stdio.h>
main()
{
	int bil1, bil2;
	printf("Masukkan dua bilangan integer, \n");
	scanf("%d %d", &bil1, &bil2);
	printf("Hubungan antara dua bilangan tersebut adalah : \n");
	if(bil1 == bil2)	
	printf("%d sama dengan %d \n", bil1, bil2);
	if(bil1 != bil2)
	printf ("%d tidak sama dengan %d \n", bil1, bil2);
	if(bil1<bil2)
	printf("%d lebih kecil dari %d \n", bil1, bil2);
	if(bil1>bil2)
	printf("%d lebih besar dari %d \n", bil1, bil2);
	if(bil1<=bil2)
	printf("%d lebih kecil sama dengan %d \n", bil1, bil2);
	if(bil1>=bil2)
	printf("%d lebih besar sama dengan %d \n", bil1, bil2);
	return 0;
	
}
