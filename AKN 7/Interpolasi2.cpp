#include<stdio.h>
#include<math.h>

float f(float x)
{
	return sin (x);
}
main()
{
	float x0,x1,x2,x,px,ana,e,b0,b1,b2;
	printf("Masukkan nilai x0 =  ");
	scanf("%f",&x0);
	printf("\n");
	printf("Masukkan nilai x1 =  ");
	scanf("%f",&x1);
	printf("\n");
	printf("Masukkan nilai x2 =  ");
	scanf("%f",&x2);
	printf("\n");
	printf("Masukkan nilai x yang dicari =  ");
	scanf("%f",&x);
	printf("\n");
	ana=f(x);
	b0=f(0);
	b1=(f(x1)-f(x0))/(x1-x0);
	b2=(((f(x2)-f(x1))/(x2-x1))-((f(x1)-f(x0))/(x1-x0)))/(x2-x0);
	px=b0+b1*(x-x0)+b2*(x-x0)*(x-x1);
	e=fabs(ana-px);
	printf("Nilai sin(%.2f) = %.2f",x,px);
	printf("Error = %f",e);
}

