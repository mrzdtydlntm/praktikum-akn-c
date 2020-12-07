#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
float rus(float a,float l,float m)
{
	return (4*3.14*9.8*a*m)/(0.0000004*l);
}

main()
{
	int menu,teodas,N,i,it;
	char x,y,l,n;
	float mas[10],pan[10],jar[10],I[10],at,bt,xx[20],xy[20],sx,sy,sxx,sxk,sxkk,sxy;
	for(i=0;i<5;i++)
			{
				printf("Masukkan a[%d]: ",i+1);
				scanf("%f",&jar[i]);
			}
			for(i=0;i<5;i++)
			{
				printf("Masukkan m[%d]: ",i+1);
				scanf("%f",&mas[i]);
			}
			for(i=0;i<5;i++)
			{
				printf("Masukkan L[%d]: ",i+1);
				scanf("%f",&pan[i]);
			}
			for(i=0;i<5;i++)
			{
				I[i]=sqrt(rus(jar[i],pan[i],mas[i]));
				printf("Arus%d = %f\n",i+1,I[i]);
			}
			for(i=0;i<5;i++)
			{
				xx[i]=pow(mas[i],2);
			}
			for(i=0;i<5;i++)
			{
				xy[i]=mas[i]*I[i];
			}
			printf("x\t y\t x^2\t xy\t\n");
			for(i=0;i<5;i++)
			{
				printf("%.2f\t %.2f\t %.2f\t %.2f\t\n",mas[i],I[i],xx[i],xy[i]);
			}
			printf("\n");
			for(i=0;i<5;i++)
			{
				sx+=mas[i];
			}
			for(i=0;i<5;i++)
			{
				sy+=I[i];
			}
			for(i=0;i<5;i++)
			{
				sxx+=xx[i];
			}
			for(i=0;i<5;i++)
			{
				sxy+=xy[i];
			}
			for(i=0;i<5;i++)
			{
				sxkk+=mas[i];
				sxk=pow(sxkk,2);
			}
			printf("Sigma dari:\n");
			printf("x\t y\t x^2\t xy\t xk\t\n");
			printf("%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",sx,sy,sxx,sxy,sxk);
			
			at=((sy*sx)-(sx*sxy))/((5*sxx)-sxk);
			bt=((5*sxy)-(sx*sy))/((5*sxx)-sxk);
			
			printf("at bt\n");
			printf("%.3f %.3f",at,bt);
	}
