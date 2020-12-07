/* Program 4 - Contoh Program Menggunakan Statement If.. dan Else.. */
#include <stdio.h>
main()
{
	/* deklarasi variabel */
	int nilai;
	/* Input Nilai */
	printf("Masukkan Nilai Ujian : \n");
	scanf("%d", &nilai);
	/* Pengkondisian */
	if(nilai >= 60&&nilai<100)
	printf("Selamat Anda Lulus ! \n");
	else if(nilai >0&&nilai<100)
		printf("Maaf Anda Harus Mengulang Lagi Semester Depan !");
	else
		printf("Data tidak valid");
	return 0;
}
