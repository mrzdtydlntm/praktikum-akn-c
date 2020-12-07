#include<stdio.h>
#include<math.h>

main()
{
	float A[3][3];//elemen matriks disini dapat diganti sesuai dengan matriks keinginan kita tapi harus matrik berordo 3x3
	float B[3], C[3], X[3], a, max=0, e, sebelum,error;
	int i, j, iter=0, imax;
	printf("Masukkan Ordo Matriks A \n");
	scanf("%f")
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Elemen Matriks A [%d][%d]", i+1, j+1);
			scanf("%f",&A[i][j]);
		}
	}
	printf("Input toleransi : "); scanf("%f", &e);
	printf("Input iterasi maksimum : "); scanf("%d", &imax);
	for(i=0; i<3; i++)
	{ X[i]=1; B[i]=0;}
	do
	{
		for(i=0; i<3; i++)
		{ B[i]=0;}
		sebelum=max;
		max=0;
		//menghitung Perkalian 
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				a=A[i][j]*X[j];
				B[i]=B[i]+a;
			}
		}
		//mencari nilai max
		for(i=0; i<3; i++)
		{ if (fabs(max) < fabs(B[i])) max=B[i];}
		//menampilkan hasil perkalian
		printf("\n\nHasil perkalian :");
		for(i=0; i<3; i++)
		{ printf("%.3f\t", B[i]);}
		printf("\nnilai max :%.3f\n", max);
		//mencari vektor baru
		for(i=0; i<3; i++)
		{C[i]=B[i]*(1/max);}
		printf("Vektor Baru :");
		for(i=0; i<3; i++)
		{ printf("%.3f\t", C[i]);}
		//menghitung error
		error=fabs(max-sebelum)/fabs(max);
		printf("\nerror :%.3f", error);
		for(i=0; i<3; i++)
		X[i]=C[i];

	iter++;
	}while((iter<imax) && (error>e));
	printf("\n\nNilai Eigennya adalah :%.3f", max);
	printf("\nVektor Eigennya :%.3f\t", C[i]);
printf("iterasinya : %d",iter);
	printf("\n");
}

