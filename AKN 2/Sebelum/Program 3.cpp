
#include<stdio.h>
#include<conio.h>
main()
{
      int A[10][10], B[10][10], C[10][10], i, j, k, a, b, c, d;
      printf("Jumlah baris A : ");scanf("%d", &a);
      printf("Jumlah kolom A : ");scanf("%d", &b);
      printf("Jumlah baris B : ");scanf("%d", &c);
      printf("Jumlah kolom B : ");scanf("%d", &d);
      printf("\n");
      for(i=1; i<=a; i++)
      {
               for(j=1; j<=b; j++)
               {printf("Elemen matriks A [%d][%d] : ", i, j);scanf("%d", &A[i][j]);}
      }
      for(i=1; i<=c; i++)
      {
               for(j=1; j<=d; j++)
               {printf("Elemen matriks B [%d][%d] : ", i, j);scanf("%d", &B[i][j]);}
      }
      printf("\nMatriks A : \n");
      for(i=1; i<=a; i++)
      {
               for(j=1; j<=b; j++)
               printf("%d\t", A[i][j]);
               printf("\n");
      }
      printf("\nMatriks B : \n");
      for(i=1; i<=c; i++)
      {
               for(j=1; j<=d; j++)
               printf("%d\t", B[i][j]);
               printf("\n");
      }
      if(b==c)
      {for(i=1; i<=a; i++)
      {
               for(j=1; j<=b; j++)
               {
                        C[i][j] = 0;
                        for(k=1; k<=b; k++)
                        C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
               }
      }
      printf("\nHasil perkalian : \n");
      for(i=1; i<=a; i++)
      {
               for(j=1; j<=b; j++)               
                        printf("%d\t", C[i][j]);
               printf("\n");
               
      }
      } 
      else
      {
          printf("Matriks tidak dapat dikalikan");
      }
      getch();
      }
