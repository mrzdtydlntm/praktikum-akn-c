#include<stdio.h>
#include<math.h>

main()
{
	float x[4],y[4],X,px=0,L[4];
	int i,j,N,N2;
	printf("Masukkan banyaknya data = \n");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		printf("Masukkan nilai tahun %d = ",i+1);
		scanf("%f",&x[i]);
		printf("Masukkan nilai populasi %d = ",i+1);
		scanf("%f",&y[i]);
	}
	printf("\n");
	printf("Masukkan nilai x yang dicari = \n");
	scanf("%d",&X);
	printf("Masukkan derajat lagrange = \n");
	scanf("%d",&N2);
	for(i=0;i<N2;i++)
	{
		L[i]=1;
		for(j=0;j<N2;j++)
		{
			if(j!=i)
			L[i]*=(X-x[j])/(x[i]-x[j]);
		}
		px+=y[i]*L[i];
	}
	printf("Nilai pada %.0f = %.0f",X,px);
}
