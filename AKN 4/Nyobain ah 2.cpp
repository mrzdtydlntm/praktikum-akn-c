#include<stdio.h>
#include<math.h>
main()
{
	float fa,fb,fc,a,b,c,hasil1,hasil2,error, e;
	printf("Masukkan nilai a : \n");
	scanf("%f",&a);
	printf("Masukkan nilai b : \n");
	scanf("%f",&b);
	printf("\n");
	printf("a\t b\t fa\t fb\t c\t fc\t\n");
	fa=pow(a,2)-3*a-10;
	fb=pow(b,2)-3*b-10;
	if(fa*fb<0)
	{
	do{
		fa=pow(a,2)-3*a-10;
		fb=pow(b,2)-3*b-10;
		c = b - ((fb*(b-a))/(fb-fa));
		fc=pow(c,2)-3*c-10;
		printf("%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",a,b,fa,fb,c,fc);
		if(fa*fc<0)
		{b=c;}
		else
		{a=c;}
		error=(b-a)/2;
	}
	while (fabs(fc)>=0.001);
	printf("\n");
	printf("error = %f",c);
	}
	else
	{
	printf("Selang tidak dapat dioperasikan");
	}
}
