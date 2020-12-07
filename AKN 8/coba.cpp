#include <stdio.h>
#include <math.h>
main()
{
	float x[20],y[20],at,bt,xx[20],xy[20],sx,sy,sxx,sxk,sxkk,sxy;
	int i,j,N;
	printf("Masukkan banyaknya data = ");
	scanf("%d",&N);
	printf("\n");
	printf("Masukkan x : \n");
	for(i=0;i<N;i++)
	{
		printf("x%d = ",i+1);
		scanf("%f",&x[i]);
	}
	printf("\n");
	printf("Masukkan y : \n");
	for(i=0;i<N;i++)
	{
		printf("y%d = ",i+1);
		scanf("%f",&y[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		xx[i]=pow(x[i],2);
	}
	for(i=0;i<N;i++)
	{
		xy[i]=x[i]*y[i];
	}
	printf("x\t y\t x^2\t xy\t\n");
	for(i=0;i<N;i++)
	{
		printf("%.2f\t %.2f\t %.2f\t %.2f\t\n",x[i],y[i],xx[i],xy[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		sx+=x[i];
	}
	for(i=0;i<N;i++)
	{
		sy+=y[i];
	}
	for(i=0;i<N;i++)
	{
		sxx+=xx[i];
	}
	for(i=0;i<N;i++)
	{
		sxy+=xy[i];
	}
	for(i=0;i<N;i++)
	{
		sxkk+=x[i];
		sxk=pow(sxkk,2);
	}
	printf("Sigma dari:\n");
	printf("x\t y\t x^2\t xy\t xk\t\n");
	printf("%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",sx,sy,sxx,sxy,sxk);
	
	at=((sy*sx)-(sx*sxy))/((N*sxx)-sxk);
	bt=((N*sxy)-(sx*sy))/((N*sxx)-sxk);
	
	printf("at bt\n");
	printf("%.3f %.3f",at,bt);
}
