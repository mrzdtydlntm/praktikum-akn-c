#include<stdio.h>
#include <conio.h>
#include<math.h>
main()
{
	int i,j,n,iterasi;
	float a[100][100],b[100],x[100],xi,g[100], maks, error,toleransi,xa,w;
	printf("Metode SOR\n\n");
	printf("Masukkan orde matriks bujursangkar (baris & kolom) : ");
    scanf("%d", &n);
	printf("\nMatriks A :\n");
	for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	printf("Masukkan elemen matriks A[%d][%d] = ",i,j);
    scanf("%f",&a[i][j]);
	}}

	printf("\nMatriks B : \n");
	for(i=1;i<=n;i++)
	{
	printf("Masukkan elemen matriks B[%d] = ",i);
    scanf("%f",&b[i]);
	}
	printf("\nMasukkan nilai toleransi : ");
    scanf("%f", &toleransi);
	printf("\nMasukkan nilai relaksasi : ");
    scanf("%f", &w);
	for(i=1;i<=n;i++)
		x[i] = 0;

	iterasi = 0;
	do
	{
		iterasi++;
		for(i=1;i<=n;i++)
		{
			xi=b[i];
			for(j=1;j<=n;j++)
			{
			if(i!=j)
			xi=xi-(a[i][j]*x[j]);
			} 
			xa= (1 - w)*x[i] + (w/a[i][i])*xi;
			g[i] = (xa - x[i])/xa;
			x[i]=xa;			
		}
		maks = fabs(g[1]);
		for(i=1;i<=n;i++)
			{
			if(maks < fabs(g[i]))
			maks = fabs(g[i]);
			}
		error = maks;
		printf("Iterasi ke-%2d : ", iterasi);
		for(i=1;i<=n;i++)
		printf(" %7.5f   ",x[i]);
		printf("\t| %f", error);
		printf("\n");
	}while(error>toleransi);

	printf("Hasil akhir\n");
	for(i=1;i<=n;i++)
	printf("x[%d] = %f\n", i, x[i]);
	getch();
	return 0;
}

