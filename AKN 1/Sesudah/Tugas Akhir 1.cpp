#include<stdio.h>
main(){
	int hari1=0, bulan1=0, tahun1=0, hari2=0, bulan2=0, tahun2=0, Total1=0, Total2=0, Total=0;
	int i1=0, I1=0,  i2=0, I2=0;
	printf("Masukkan Tanggal Bulan dan Tahun 1 (d m yyyy) : ");
	scanf("%d %d %d", &hari1, &bulan1, &tahun1);
	printf("Masukkan Tanggal Bulan dan Tahun 2 (d m yyyy) : ");
	scanf("%d %d %d", &hari2, &bulan2, &tahun2);
	for (i1=1; i1 < bulan1; i1 ++){
		if(i1==4|| i1==6|| i1==9|| i1==11) Total1 += 30;
		else {
			if(i1 == 2){
				if(tahun1 % 4 == 0) Total1 += 29;
				else Total1 += 28;
			}
			else Total1 += 31;
		}
	}
	for (I1=1; I1 < tahun1; I1 ++){
		if(I1 % 4 == 0) Total1 += 366;
		else Total1 += 365;
	}
	for (i2=1; i2 < bulan2; i2 ++){
		if(i2==4|| i2==6|| i2==9|| i2==11) Total2 += 30;
		else{ 
			if(i2==2){
				if(tahun2 % 4 == 0) Total2 += 29;
				if(tahun2 % 4 != 0) Total2 += 28;
			}
			else Total2 += 31;
		}
	}
	for (I2=1; I2 < tahun2; I2++){
		if(I2 % 4 == 0) Total2 += 366;
		else Total2 += 365; 
	}
	Total1 += hari1;
	Total2 += hari2;
	Total = Total2 - Total1;
	printf("hasil : %d", Total);
}
