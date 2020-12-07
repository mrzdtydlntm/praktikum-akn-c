#include<stdio.h>
#include<math.h>
main()
{	
      int q,i,j,n,TRUE=0,it=0;
      float A[5][5],B[15],C[15],x[15],x1[15],e=0.0001;

printf("\n\tMETODE ITERASI JACOBI\n\n");
printf("Masukkan orde matriks : ");scanf("%d",&n);

printf("\nMasukkan Matriks A : \n");
for(i=1;i<=n;i++)
{ for(j=1;j<=n;j++)
     {printf("Masukkan elemen matriks A[%d][%d] : ",i,j); scanf("%f",&A[i][j]);}
}
printf("\nMatriks A\n");
for(i=1;i<=n;i++)
{ for(j=1;j<=n;j++)
    { printf("\t%.1f",A[i][j]); }
    printf("\n");
}

printf("\nMasukkan vektor konstanta :\n");
for(i=1;i<=n;i++)
{ printf("B[%d] : ",i); scanf("%f",&B[i]); }

printf("masukkan vektor awal :\n");
for(i=1;i<=n;i++)
{ printf("x[%d] : ",i); scanf("%f",&x[i]); }
printf ("Iterasi\tX[1]\tX[2]\tX[3]\tX[4]");

while(!TRUE)
    {   it = it + 1;
       TRUE = 1;
       for(i=1;i<=n;i++)
       {
          C[i]=B[i];
          for(j=1;j<=n;j++)
             if(i!=j) C[i]=C[i]-A[i][j]*x[j];
          C[i]=C[i]/A[i][i];
          if(fabs(C[i]-x[i])>e) TRUE = 0;
       }
       printf("\n%2d",it);
       for(i=1;i<=n;i++) printf("\t%.3f",C[i]);
       printf("\n");

       for(i=1;i<=n;i++) x[i]=C[i];
    }
    printf("\n\nSolusinya\n");
    for(i=1;i<=n;i++) printf("\nX[%d] = %.3f\n",i,x[i]);
 return 0;
 }

