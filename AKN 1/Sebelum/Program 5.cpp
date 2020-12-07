/* Program 5 - Program Menghitung Nilai Rata-Rata */
#include <stdio.h>
main()
{
	/* Deklarasi */
	float jumlah;
	int N, bil;
	float rata2;
	/* Input jumlah N yang diinginkan*/
	printf("Masukkan jumlah bilangan : ");
	scanf("%i", &N);
	/* Deklarasi i */
	int i;
	for(i=1; i<=N; i++)
	{
		/* Input bilangan yang akan di rata-rata */
		printf("Masukkan Bilangan ke-%i : ", i);
		scanf("%d", &bil);
		jumlah += bil;
	}
	rata2 = jumlah / N;
	/* Rata-rata dalam desimal 2 angka dibelakang koma */
	printf("Nilai Rata-Rata nya %0.2f \n", rata2);
	return 0;
}
