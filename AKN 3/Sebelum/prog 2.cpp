#include <stdio.h> 
#include <math.h>

main()

{
 




float x,n,e,suku,jumlah=0,jumlahsebelum=0;


printf("Perhitungan ln(x)\n\n"); printf("Nilai x = "); scanf("%f",&x);

printf("\nN	Hampiran	Error\n");

printf("-----------------------------\n");


for(n=1;n<=8;n++)

{

suku=pow(-1,n-1)*pow(x-1,n)/n;
jumlah=jumlah+suku;
e=fabs((jumlah-jumlahsebelum)/jumlah);
printf("%.0f %.10f %.10f \n",n,jumlah,e);
jumlahsebelum=jumlah;

}


printf("\nln(x) = %.10f",jumlah); printf("\nError = %.10f",e);

}
