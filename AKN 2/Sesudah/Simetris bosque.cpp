#include<stdio.h>
#include<conio.h>
main ()
{
      int a, b, baris, kolom;
      int A[10][10], B[10][10];
      printf("Jumlah Baris yang Diinginkan : "); scanf("%d", &baris);
      printf("Jumlah Kolom yang Diinginkan : "); scanf("%d", &kolom);
      printf("\n");
      for(a=1; a<=baris; a++)
      {
               for(b=1; b<=kolom; b++)
               {
                        printf("Masukkan Elemen Matriks A[%d][%d] : ", a, b);
                        scanf("%d", &A[a][b]);
               }
      }
      printf("\n Matriks A \n");
      for (a=1; a<=baris; a++)
      {
          for (b=1; b<=kolom; b++)
          {
              printf("%d\t", A[a][b]);
          }
          printf("\n");
      }
      printf("\n Transpose A \n");
      for (a=1; a<=kolom; a++)
      {
          for (b=1; b<=baris; b++)
          {
              B[a][b]= A[b][a];
              printf("%d\t", B[a][b]);
          }
          printf("\n");
      }
      if(A[a][b]==B[a][b])
      printf("\nMatriks Bersifat Simetris");
      else{
      
      printf("\nMatriks Tidak Bersifat Simetris");
	}
    
}
