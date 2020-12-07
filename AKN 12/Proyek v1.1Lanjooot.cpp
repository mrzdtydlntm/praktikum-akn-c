#include <stdio.h>
#include <math.h>

float f(float x)
{
	return pow(x,-2);
}

float g(float y)
{
	return (4*pow(10,-7)*y)/(4*22/7);
}

main()
{
	int i,N;
	float h,f0,fn,rj,sr,r0,r1,ger,ora,r,p,I,hasil;
	printf("Masukkan N: ");
	scanf("%d",&N);
	printf("Masukkan jumlah gerbong (Asumsikan berat gerbong 15.000 kg): ");
	scanf("%f",&ger);
	printf("Masukkan jumlah penumpang (Asumsikan berat penumpang 75 kg): ");
	scanf("%f",&ora);
	printf("Masukkan jarak rel dengan tanah (m): ");
	scanf("%f",&r0);
	printf("Masukkan jarak rel dengan kereta (m): ");
	scanf("%f",&r1);
	printf("Masukkan arus listrik (A): ");
	scanf("%f",&p);
	//operasi//
	h=(r1-r0)/N;
	f0=f(r0);
	fn=f(r1);
	for(i=1;i<N;i++)
	{
		rj=r0+(i*h);
		sr+=f(rj);
	}
	I=(f0+2*sr+fn)*h/2;
	hasil=g(p)*I;
	printf("Hasil = %.2f",I);
}

