#include<stdio.h>
#include<math.h>

main()
{
int i,j,n,TRUE=0,it=0;
float A[5][5],B[7],C[7],x[7],e=0.0001,X;

printf("\n\tMETODE GAUSS-SEIDEL\n\n");
printf("Masukkan orde matriks : ");scanf("%d",&n);

printf("\nMasukkan Matriks A : \n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    { printf("Masukkan elemen matriks A[%d][%d] : ",i,j); scanf("%f",&A[i][j]); }
}
printf("\nMatriks A\n\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    { printf("\t%.1f",A[i][j]); } printf("\n");
}
printf("\nmasukkan vektor konstanta :\n\n");
for(i=1;i<=n;i++)
{ printf("B[%d] : ",i); scanf("%f",&B[i]); }
printf("\nmasukkan vektor awal :\n\n");
for(i=1;i<=n;i++)
{   printf("X[%d] : ",i); scanf("%f",&x[i]);  }
printf ("\nIterasi\tX[1]\tX[2]");
while(!TRUE)
    {
       it = it + 1;
       TRUE = 1;
       printf("\n%2d ",it);
       for(i=1;i<=n;i++)
       {
           X=B[i];
           for(j=1;j<=n;j++)
           if(i!=j) X=X-A[i][j]*x[j];
           X=X/A[i][i];
           if(fabs(X-x[i])>e) TRUE = 0; x[i]=X;
           printf("\t%.3f",X);
       }
       printf("\n");
    }

    printf("\nSolusinya\n");
    for(i=1;i<=n;i++) printf("X[%2d] = %.3f\n",i,x[i]);
return 0;
 }

