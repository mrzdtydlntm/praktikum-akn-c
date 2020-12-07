#include <stdio.h>
#include <math.h>
int derajat;
float xa[20]={0,0,0,0,0,0,0,0,0,0};
float Ch (float A[20][20],float B[20])
{
float C[20],x[20],error=0.01,jum;
int i,j,ordo=derajat+1,n=0,k=1,nilai=0;
for(i=0;i<20;i++) x[i]=0;
mulai :
	n++;
for(i=0;i<ordo;i++)
{
jum = 0;
for(j=0;j<ordo;j++)
{
if(i!=j)
jum+=xa[j]*A[i][j];
}xa[i]=(B[i]-jum)/A[i][i];
}
nilai=0;
for(i=0;i<ordo;i++)
{
	if(fabs(x[i]-xa[i])/x[i]> error) nilai++;
x[i] = xa[i];
}
if(nilai>=1)goto mulai;
printf("\n\nHasil dengan Gauss Seidel\n\n");
for(i=0;i<ordo;i++)printf("\na[%d]: %f",i+1,xa[i]);
printf("\nBanykanya Iterasi: %d\n", n);
}
main()
{
FILE *HC;
int i,j,k,data;
float
x[20],y[20],A[20][20],x3,x4,Zxx[20],Zxy[20],Zy0=0,Zx0=0,Y[20],a,b,
E,Et=0;
printf ("\tRegresi Derajat\n");
printf("\nMasukkan derajat polinom : ");scanf("%d",&derajat);
printf("\nMasukkan jumlah data : ");scanf("%d",&data);
for (i=0;i<data;i++)
{
printf("masukan data x[%d] : ",i+1);scanf("%f",&x[i]);
printf("masukan data y[%d] : ",i+1);scanf("%f",&y[i]);
}
for(i=0;i<data;i++) {Zxy[i]=0;Zxx[i]=0;}
for(i=0;i<data;i++) for (j=0;j<derajat+2;j++)
{Zxy[j]+=pow(x[i],j)*y[i];Zxx[j]+=pow(x[i],j+1);}
for (i=0;i<=derajat;i++)
{
	for (j=0+i,k=0;j<=derajat+i;j++,k++)
{
if (i==0&&j==0) A[i][k]= data;
else A[i][k]=Zxx[j-1];}
}
Ch(A,Zxy);
HC=fopen("Regresi polinom .txt","w");
printf("\nPersamaan yang didapat : f(x) = ");for (i=derajat;i>1;i--) printf("%f x^%d + ",xa[i],i);
fprintf(HC,"\nPersamaan yang didapat : f(x) = ");for
(i=derajat;i>1;i--) fprintf(HC,"%f x^%d + ",xa[i],i);
printf("%f x + %f \n\nX\tYlama\tYbaru\tError\n",xa[1],xa[0]);
fprintf(HC,"%f x + %f \n\nX\tYlama\tYbaru\tError\n",xa[1],xa[0]);
for(i=0;i<data;i++)
{
Y[i]=0;
for (j=0;j<=derajat;j++)Y[i]+=pow(x[i],j)*xa[j];
E=fabs(Y[i] - y[i]);
printf("\n%.3f\t%.3f\t%.3f\t%f",x[i],y[i] ,Y[i] ,E);
fprintf(HC,"\n%.3f\t%.3f\t%.3f\t%f",x[i],y[i] ,Y[i],E);
Et+=pow(E,2);
}
printf("\n\nError Total = %f\n\n",Et);
fprintf(HC,"\n\nError Total = %f\n\n",Et);
fclose(HC);
return 0;
}
