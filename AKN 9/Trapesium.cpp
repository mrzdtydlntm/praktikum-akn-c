#include <stdio.h>
#include <math.h>
float f(float x)
{
return x*exp(2*x);
}
float in(float x)
{
return (x*exp(2*x))-exp(2*x);
}
main()
{
int N,i;
float x0,x1,h,e,an,I,sx,f0,fn,xj;
printf("Integrasi Metode Trapesium\n");
printf("==========================\n");
printf("Masukkan x0 = ");
scanf("%f",&x0);
printf("Masukkan x1 = ");
scanf("%f",&x1);
printf("Masukkan N = ");
scanf("%d",&N);
h=(x1-x0)/N;
f0=f(x0);
fn=f(x1);
for(i=1;i<N;i++)
{
xj=x0+(i*h);
sx+=f(xj);
}
I=(f0+2*sx+fn)*h/2;
an=in(x1)-in(x0);
e=fabs(I-an);
printf("Hasil numeriknya adalah= %.2f\n",I);
printf("Hasil analitiknya adalah= %.2f\n",an);
printf("Error = %.2f\n",e);
}
