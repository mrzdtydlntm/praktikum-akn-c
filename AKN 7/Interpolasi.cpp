#include<stdio.h>
#include<math.h>

float f(float x)
{
	return sin (x);
}
main()
{
	float x0,x1,x,px,ana,e;
	printf("Masukkan nilai x0 =  ");
	scanf("%f",&x0);
	printf("\n");
	printf("Masukkan nilai x1 =  ");
	scanf("%f",&x1);
	printf("\n");
	printf("Masukkan nilai x yang dicari =  ");
	scanf("%f",&x);
	printf("\n");
	ana=f(x);
	px=f(x0)+(f(x1)-f(x0))*(x-x0)/(x1-x0);
	e=fabs(ana-px);
	printf("Nilai sin(%.2f) = %.2f",x,px);
	printf("Error = %f",e);
}

