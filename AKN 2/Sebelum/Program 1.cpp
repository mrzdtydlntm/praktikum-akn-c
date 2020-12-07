#include<stdio.h>
#include<conio.h>
main() 
{
       int baris, kolom, i, j, A[10][10], B[10][10], C[10][10];
       printf("Jumlah baris : ");scanf("%d", &baris);
       printf("Jumlah kolom : ");scanf("%d", &kolom);
       for (i=1; i<=baris; i++) 
       {
           for (j=1; j<=kolom; j++) 
           {
           printf("Elemen matriks A [%d][%d] = ",i,j);scanf("%d",&A[i][j]); 
           } 
       }
       for (i=1; i<=baris; i++)
       {
           for(j=1; j<=kolom; j++)
           {
           printf("Elemen matriks B [%d][%d] = ", i,j);scanf("%d",&B[i][j]);
           }
       }
       
       printf("Matriks A :\n");
       for (i=1; i<=baris; i++)
       {
           for(j=1; j<=kolom; j++)
           {
		   printf("\t%d",A[i][j]);
           }
	   printf("\n");
       }       
          
       printf("Matriks B :\n");
       for (i=1; i<=baris; i++)
       {
           for(j=1; j<=kolom; j++)
           {
		   printf("\t%d",B[i][j]);
           }
	   printf("\n");
       }    

       for (i=1; i<=baris; i++)
       {
           for (j=1; j<=kolom; j++)
           {
               C[i][j] = A[i][j] + B[i][j];
           }
       }
       printf("\nPenjumlahan matriks A + B adalah \n");
       for (i=1; i<=baris; i++)
       {
           for(j=1; j<=kolom; j++)
           {
                    printf("%5d ", C[i][j]); 
           }
           printf("\n");
       }    
       getch();
}
	
	
	
	
