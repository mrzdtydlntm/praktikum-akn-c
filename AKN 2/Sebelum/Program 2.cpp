#include<stdio.h>
#include<conio.h>
main()
{
      int A[10][10],i,j,n,m;
      printf("Jumlah baris : ");scanf("%d", &n);
      printf("Jumlah kolom : ");scanf("%d", &m);
      printf("\n");
      for(i=1; i<=n; i++)
      {
                       for(j=1; j<=m; j++)
                       {
                       printf("A[%d][%d] : ", i,j);scanf("%d",&A[i][j]);
                       }
                       }
      printf("\nMatriks Aij\n");
      for(i=1;i<=n;i++)
      {
                       for(j=1;j<=m;j++)
                       {
                       printf("%d\t", A[i][j]);
                       }
                       printf("\n");
                       }
     
     printf("\n");
     
     printf("Transpose Matriks Aij \n");              
     for(j=1;j<=m;j++)
      {
                       for(i=1;i<=n;i++)
                       {
                       printf("%d\t", A[i][j]);
                       }
                       printf("\n");
                       }
      getch();
      }
