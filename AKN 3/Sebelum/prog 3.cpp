#include <stdio.h> 
#include <math.h> 
#define e 0.000000001

float fact(float n)

{

if(n==0) return 1; else

return n*fact(n-1);

}


int main(void)

{

float x,n=0,suku=1,jumlah=0;


printf("Perhitungan e^(x)\n"); printf("Nilai x = "); scanf("%f",&x);

printf("Epsilon = %.10f\n\n",e);


printf("N	HAMPIRAN	ERROR\n");

printf("-----------------------------\n");


//Batas akhir: epsilon (e) for(n=0;fabs(suku)>=e;n++)

{

suku=pow(x,n)/fact(n);

jumlah=jumlah+suku;
 
printf("%.0f	%.10f	%.10f	\n",n,jumlah,fabs(pow(M_E,x)-

jumlah));

}


printf("\ne^(x) = %.15f (Nilai Hampiran)",jumlah); printf("\ne^(x) = %.15f (Nilai Sejati)",pow(M_E,x)); printf("\nError = %.15f",fabs(pow(M_E,x)-jumlah));
}
